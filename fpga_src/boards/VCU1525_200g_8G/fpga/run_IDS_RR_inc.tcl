open_project fpga.xpr

update_compile_order -fileset sources_1
set_property needs_refresh false [get_runs synth_1]
set_property needs_refresh false [get_runs impl_1]

if {[llength [get_reconfig_modules scheduler_RR]]!=0} then {
  delete_reconfig_modules scheduler_RR}
create_reconfig_module -name scheduler_RR -partition_def [get_partition_defs pr_scheduler] -top scheduler_PR

add_files -norecurse {
  ../lib/eth/lib/axis/rtl/arbiter.v 
  ../lib/eth/lib/axis/rtl/axis_arb_mux.v
  ../lib/eth/lib/axis/rtl/axis_register.v
  ../lib/eth/lib/axis/rtl/axis_pipeline_register.v
  ../lib/eth/lib/axis/rtl/priority_encoder.v
  ../lib/eth/lib/axis/rtl/sync_reset.v
  ../lib/corundum/rtl/rx_hash.v
  ../lib/smartFPGA/rtl/axis_fifo.v
  ../lib/smartFPGA/rtl/simple_arbiter.v
  ../lib/smartFPGA/rtl/simple_fifo.v
  ../lib/smartFPGA/rtl/header.v
  ../lib/smartFPGA/rtl/axis_dropper.v
  ../lib/smartFPGA/rtl/slot_keeper.v
  ../lib/smartFPGA/rtl/max_finder_tree.v
  ../rtl/RR_LU_scheduler_PR.v
} -of_objects [get_reconfig_modules scheduler_RR]

if {[llength [get_pr_configurations IDS_RR_config]]!=0} then {
  delete_pr_configurations IDS_RR_config}
create_pr_configuration -name IDS_RR_config -partitions [list \
  core_inst/riscv_cores[0].pr_wrapper:Gousheh_IDS \
  core_inst/riscv_cores[1].pr_wrapper:Gousheh_IDS \
  core_inst/riscv_cores[2].pr_wrapper:Gousheh_IDS \
  core_inst/riscv_cores[3].pr_wrapper:Gousheh_IDS \
  core_inst/riscv_cores[4].pr_wrapper:Gousheh_IDS \
  core_inst/riscv_cores[5].pr_wrapper:Gousheh_IDS \
  core_inst/riscv_cores[6].pr_wrapper:Gousheh_IDS \
  core_inst/riscv_cores[7].pr_wrapper:Gousheh_IDS \
  core_inst/scheduler_PR_inst:scheduler_RR]

if {[llength [get_runs "impl_IDS_RR"]]!=0} then {delete_run impl_IDS_RR}
create_run impl_IDS_RR -parent_run impl_1 -flow {Vivado Implementation 2020} -pr_config IDS_RR_config
set_property strategy Performance_ExtraTimingOpt [get_runs impl_IDS_RR]
set_property STEPS.POST_ROUTE_PHYS_OPT_DESIGN.IS_ENABLED true [get_runs impl_IDS_RR]
set_property STEPS.POST_ROUTE_PHYS_OPT_DESIGN.ARGS.DIRECTIVE Explore [get_runs impl_IDS_RR]
# set_property STEPS.PLACE_DESIGN.ARGS.DIRECTIVE Explore [get_runs impl_IDS_RR]

update_compile_order -fileset scheduler_RR
update_compile_order -fileset sources_1

reset_run scheduler_RR_synth_1
launch_runs scheduler_RR_synth_1
wait_on_run scheduler_RR_synth_1

create_fileset -quiet IDS_RR_utils
add_files -fileset IDS_RR_utils -norecurse ../lib/axis/syn/vivado/sync_reset.tcl
add_files -fileset IDS_RR_utils -norecurse ../lib/smartFPGA/syn/vivado/simple_sync_sig.tcl

# add_files -fileset IDS_RR_utils -norecurse fpga.runs/impl_IDS_Hash/fpga_postroute_physopt.dcp
# set_property incremental_checkpoint fpga.runs/impl_IDS_RR/fpga_postroute_physopt.dcp [get_runs impl_IDS_RR]

set_property STEPS.OPT_DESIGN.TCL.PRE [ get_files ../lib/axis/syn/vivado/sync_reset.tcl -of [get_fileset IDS_RR_utils] ] [get_runs impl_IDS_RR]
set_property STEPS.OPT_DESIGN.TCL.PRE [ get_files ../lib/smartFPGA/syn/vivado/simple_sync_sig.tcl -of [get_fileset IDS_RR_utils] ] [get_runs impl_IDS_RR]
set_property STEPS.ROUTE_DESIGN.TCL.PRE [ get_files ../lib/axis/syn/vivado/sync_reset.tcl -of [get_fileset IDS_RR_utils] ] [get_runs impl_IDS_RR]
set_property STEPS.ROUTE_DESIGN.TCL.PRE [ get_files ../lib/smartFPGA/syn/vivado/simple_sync_sig.tcl -of [get_fileset IDS_RR_utils] ] [get_runs impl_IDS_RR]

set_property IS_ENABLED false [get_report_config -of_object [get_runs impl_IDS_RR] impl_IDS_RR_route_report_drc_0]
set_property IS_ENABLED false [get_report_config -of_object [get_runs impl_IDS_RR] impl_IDS_RR_route_report_power_0]
set_property IS_ENABLED false [get_report_config -of_object [get_runs impl_IDS_RR] impl_IDS_RR_opt_report_drc_0]

reset_run impl_IDS_RR
launch_runs impl_IDS_RR -jobs 12
wait_on_run impl_IDS_RR

open_run impl_IDS_RR
write_bitstream -no_partial_bitfile -force fpga.runs/impl_IDS_RR/fpga.bit

exit