import string
import time
import json
# from Bio import trie
# from Bio import triefind
import itertools
import copy
import sys

inp_file = 'google_2_ports_sorted_prefixes.json'
max_prefix_len = 24
first_lvl_len = 14

prefix_table = []
fill = ['']
for i in range (1,max_prefix_len):
	fill.append(i*'?')

with open(inp_file, 'r') as f:
	prefix_table = [(str(x),int(y)) for (x,y) in json.load(f)]
f.close()

prefix_table = sorted(prefix_table, key=lambda x: -len(x[0]))

MSB_dict= {}
first_lvl = []
for (x,y) in prefix_table:
	k = x[0:first_lvl_len]
	if MSB_dict.has_key(k):
		if (len(x)!=first_lvl_len):
			MSB_dict[k].append((x[first_lvl_len:],y))
	else:
		if (len(x)==first_lvl_len):
			# since list is sorted based on number of wildcards
			first_lvl.append((x,y))
		else: 
			MSB_dict[k] = [(x[first_lvl_len:],y)]
	

with open("ip_match.v","w") as f:

  for k in MSB_dict:
  		f.write('module table_'+k+'(input ['+str(max_prefix_len-first_lvl_len-1)+':0] addr, output reg match);\r\n')
  		f.write('  always@(posedge clk) begin\r\n')
  		# f.write('  always@(addr) begin\r\n')
  		f.write('    casex (addr)\r\n')
  		for (x,y) in MSB_dict[k]:
  			f.write('      '+str(max_prefix_len-first_lvl_len)+'\'b'+x+fill[max_prefix_len-first_lvl_len-len(x)]+': '+'match <= 1\'b'+str(y)+';\r\n')
  		f.write('      default: match <= 1\'b0;\r\n')
  		f.write('    endcase\r\n')
  		f.write('  end\r\n')
  		f.write('endmodule\r\n')
  		f.write('\r\n')

  f.write('module ip_match(input clk, input [31:0] addr, output reg match);\r\n')
  f.write('  reg [31:0] addr_r;\r\n')
  f.write('\r\n')
  for k in MSB_dict:
    f.write('  wire out_'+k+';\r\n')
    f.write('  table_'+k+' m_'+k+' (.addr(addr_r[23:'+str(32-max_prefix_len)+']), .match(out_'+k+'));\r\n')
  f.write('\r\n')
  f.write('  always@(posedge clk) begin\r\n')
  f.write('    addr_r <= addr;\r\n')
  f.write('    case (addr_r[31:'+str(max_prefix_len)+'])\r\n')
  for k in MSB_dict:
    f.write('      '+str(first_lvl_len)+'\'b'+k+': '+'match <= out_'+k+';\r\n')
  for (x,y) in first_lvl:
    f.write('      '+str(first_lvl_len)+'\'b'+x+': '+'match <= 1\'b'+str(y)+';\r\n')
  f.write('      default: match <= 1\'b0;\r\n')
  f.write('    endcase\r\n')
  f.write('  end\r\n')
  f.write('endmodule\r\n')
f.close()

print MSB_dict.keys()
print len(MSB_dict.keys())
