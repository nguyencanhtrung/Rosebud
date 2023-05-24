# Copyright (c) 2019-2021 Moein Khazraee
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.

# The TCL code you provided is used to create and configure reconfigurable 
# modules in Vivado. The code first checks if partition definitions for the 
# "pr_riscv" and "pr_load_balancer" partitions exist, and creates them if 
# they do not. It then checks if reconfigurable modules for the "RPU_base" 
# and "LB_RR" modules exist, and creates them if they do not.
#
# The set_property PR_FLOW 1 [current_project] command sets the PR_FLOW 
# property of the current project to 1, which enables partial reconfiguration 
# flow in Vivado.

# The create_partition_def command creates a new partition definition with 
# the specified name and module. The -name option specifies the name of the 
# partition definition, and the -module option specifies the name of the 
# module that the partition definition is associated with.

# The create_reconfig_module command creates a new reconfigurable module 
# with the specified name, partition definition, and source. The -name option 
# specifies the name of the reconfigurable module, the -partition_def option 
# specifies the name of the partition definition that the reconfigurable 
# module is associated with, and the -define_from option specifies the 
# source of the reconfigurable module.

open_project fpga.xpr

#  Set the PR_FLOW property of the current project - Partial Reconfiguration FLOW: enable
set_property PR_FLOW 1 [current_project]

# Create partition definition
# Partition `pr_riscv` associates with module `rpu_RR`
# Partition `pr_load_balancer` associates with module `lb_PR`
if {[llength [get_partition_defs  pr_riscv]]==0} then {
  create_partition_def -name pr_riscv -module rpu_PR}
if {[llength [get_partition_defs  pr_load_balancer]]==0} then {
  create_partition_def -name pr_load_balancer -module lb_PR}

# Create new reconfigurable module
# Reconfigurable module `RPU_base`   <=> assign to partition `pr_riscv` <=> Module `rpu_PR`
# Reconfigurable module `LB_RR`      <=> assign to `pr_load_balancer`   <=> Module `lb_PR`

if {[llength [get_reconfig_modules RPU_base]]==0} then {
  create_reconfig_module -name RPU_base -partition_def [get_partition_defs pr_riscv]  -define_from rpu_PR}
if {[llength [get_reconfig_modules LB_RR]]==0} then {
  create_reconfig_module -name LB_RR -partition_def [get_partition_defs pr_load_balancer] -define_from lb_PR}

update_compile_order -fileset LB_RR
update_compile_order -fileset RPU_base
update_compile_order -fileset sources_1

reset_run synth_1
launch_runs synth_1 -jobs 8
wait_on_run synth_1

exit
