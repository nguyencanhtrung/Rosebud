# Coloring of different components

# Leaf cell coloring
highlight_objects -color_index 13 -leaf_cells [get_cells core_inst/rpus[*].rpu_intercon_inst]
highlight_objects -color_index 4  -leaf_cells [get_cells core_inst/lb_PR_inst]
highlight_objects -color_index 3  -leaf_cells [get_cells [list {core_inst/MAC_async_FIFO[*].*} {qsfp*}]]
highlight_objects -color_index 2  -leaf_cells [get_cells [list {core_inst/pcie*} {pcie*}]]

# Net coloring
highlight_objects -color_index 7 [get_nets [list {core_inst/ctrl_in_sw/ctrl_s_axis_tdata[*]} {core_inst/ctrl_in_sw/dout_reg_reg[35][*]}]]

# highlight_objects -color_index 7 [get_nets -regexp {core_inst/data_out_sw/shrink.axis_switch_2lvl_shrink_inst/input_registers\[.*\].input_register/dout\[[0-9]\]}]
# highlight_objects -color_index 7 [get_nets -regexp {core_inst/data_out_sw/shrink.axis_switch_2lvl_shrink_inst/input_registers\[.*\].input_register/dout\[1[0-9]\]}]
# highlight_objects -color_index 7 [get_nets -regexp {core_inst/data_out_sw/shrink.axis_switch_2lvl_shrink_inst/input_registers\[.*\].input_register/sll_data_reg\[153\]\[[0-9]\]}]
# highlight_objects -color_index 7 [get_nets -regexp {core_inst/data_out_sw/shrink.axis_switch_2lvl_shrink_inst/input_registers\[.*\].input_register/sll_data_reg\[153\]\[1[0-9]\]}]
