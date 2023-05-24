#!/usr/bin/env python3
"""

Copyright (c) 2020-2021 Moein Khazraee

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

"""

from module_names import *
from util_extractor import *
from math import ceil
from glob import glob

csv_file           = "parsed_utilization_16G.csv"
lb_pblock_rep      = "fpga_utilization_lb_raw.rpt"
full_fpga_raw_rep  = "fpga_utilization_hierarchy_placed_raw.rpt"
lb_pr_pblock_rep   = "fpga_utilization_LB_FW_RR.rpt"
RPU_pblock_pat     = "fpga_utilization_RPU_*_FW_RR.rpt"
full_fpga_acc_rep  = "fpga_utilization_hierarchy_placed_FW_RR.rpt"
RPU_count          = 16
FPGA_tot_resources = [1182240, 2364480, 2160, 960, 6840]

# LUTS, Registers, BRAM, URAM, DSP
RPU_pblock_rep      = sorted(glob(RPU_pblock_pat), key=natural_keys)
RPU_tot_resources   = [available (x) for x in RPU_pblock_rep]
LB_tot_resources    = available (lb_pblock_rep)
LB_PR_tot_resources = available (lb_pr_pblock_rep)
RPU_avg_resources   = \
    [ceil(sum(col)/float(len(col))) for col in zip(*RPU_tot_resources)]

print ("Available Resources:")
print ("Block       \tLUTS\tRegs\tBRAM\tURAM\tDSP")
print ("Avg RPU:  \t"  +"\t".join([str(x) for x in RPU_avg_resources]))
print ("LB:\t"  +"\t".join([str(x) for x in LB_tot_resources]))
print ("LB_PR:\t"  +"\t".join([str(x) for x in LB_PR_tot_resources]))
print ("Full FPGA:\t"  +"\t".join([str(x) for x in FPGA_tot_resources]))

out_file = open(csv_file, 'w')
def printcsv(x):
  out_file.write(x+'\n')

def calc (vals, tots):
  sel = [vals[0], vals[4], vals[5]+ceil(vals[6]*1.0/2), vals[7], vals[8]]
  res = [str(x) for x in vals]
  for i in range(len(tots)):
    if (sel[i]==0):
      res.append("0")
    else:
      res.append(str(sel[i])+ " (" + "%.2f" % ((100.0*sel[i])/tots[i]) +")")
  return res

def calc_remain (vals, maxs, tots):
  sel = [vals[0], vals[4], vals[5]+ceil(vals[6]*1.0/2), vals[7], vals[8]]
  rem = [b - a for a, b in zip(sel, maxs)]
  res = ["-"]*len(vals)
  for i in range(len(tots)):
    res.append(str(rem[i])+ " (" + "%.2f" % ((100.0*rem[i])/tots[i]) +")")
  return res

# Naming of Modules and number of them for averaging
# Since a module could be set of different sub-modules we cannot
# just use occurences
Rosebud_mods = {"RPU": (RPUs, RPU_count),
                "LB": (LB_module, 1),
                "Interconnects": (Interconnects, RPU_count),
                "MAC": (MAC_modules, 1),
                "PCIe": (PCIe_modules, 1),
                "Switch and Debug": (SW_n_stat_modules, 1)}

RPU_mods   = {"mem modules": (mem_modules, RPU_count),
              "riscv": (riscv_modules, RPU_count),
              "Firewall": (firewall, RPU_count),
              "Accel manager": (acc_manager, RPU_count)}

# CSV header
printcsv("Module, LUT, Logic, LUTRAM, SRL, Register, RAMB36, RAMB18, \
URAM, DSP, LUTs (%), Registers(%), BRAMs(%), URAMs(%), DSPs(%)\n")

printcsv ("Rosebud stats:")

acc_util = [0]*9
last_avg = []
last_tot = []
last_mod = ""

for mod in Rosebud_mods:
  (avg, tot, _, _) = extract(full_fpga_raw_rep, Rosebud_mods[mod][0], Rosebud_mods[mod][1])
  line = calc(avg, FPGA_tot_resources)
  acc_util = [a + b for a, b in zip(acc_util, tot)]
  printcsv(mod + ", " + ", ".join(line))
  if (mod == "RPU"):
    line = calc_remain(avg, RPU_avg_resources, FPGA_tot_resources)
    printcsv("Remaining RPU" + ", " + ", ".join(line))
  if (mod == "LB"):
    line = calc_remain(tot, LB_tot_resources, FPGA_tot_resources)
    printcsv("Remaining LB" + ", " + ", ".join(line))
  last_tot = tot
  last_mod = mod

(avg, tot, _, _) = extract(full_fpga_raw_rep, [" fpga"], 1)
rest = [b - a for a, b in zip(acc_util, tot)]
line = calc(rest, FPGA_tot_resources)
printcsv("Rest" + ", " + ", ".join(line))
rest = [a + b for a, b in zip(rest, last_tot)]
line = calc(rest, FPGA_tot_resources)
printcsv(last_mod+"+, " + ", ".join(line))
line = calc(tot, FPGA_tot_resources)
printcsv("Full" + ", " + ", ".join(line))

printcsv ("\n\nRPU with accelerator stats:")

acc_util = [0]*9
for mod in RPU_mods:
  (avg, tot, _, _) = extract(full_fpga_acc_rep, RPU_mods[mod][0], RPU_mods[mod][1])
  line = calc(avg, RPU_avg_resources)
  acc_util = [a + b for a, b in zip(acc_util, tot)]
  printcsv(mod + ", " + ", ".join(line))
  last_avg = avg
  last_mod = mod

(avg, tot, _, _) = extract(full_fpga_acc_rep, RPUs, RPU_count)
rest = [b - a for a, b in zip(acc_util, tot)]
rest = [ceil(x/RPU_count) for x in rest]
line = calc(rest, RPU_avg_resources)
printcsv("Rest" + ", " + ", ".join(line))
rest = [a + b for a, b in zip(rest, last_avg)]
line = calc(rest, RPU_avg_resources)
printcsv(last_mod+"+, " + ", ".join(line))
line = calc(avg, RPU_avg_resources)
printcsv("Full" + ", " + ", ".join(line))
line = calc_remain(avg, RPU_avg_resources, RPU_avg_resources)
printcsv("Remaining" + ", " + ", ".join(line))

(avg, tot, _, _) = extract(full_fpga_acc_rep, LB_module, 1)
line = calc(avg, FPGA_tot_resources)
printcsv("LB_PR" + ", " + ", ".join(line))
line = calc_remain(tot, LB_PR_tot_resources, FPGA_tot_resources)
printcsv("Remaining LB_PR" + ", " + ", ".join(line))
printcsv("RPU" + ", " + 9*"-, " + ", ".join([str(x) for x in RPU_avg_resources]))

out_file.close()
