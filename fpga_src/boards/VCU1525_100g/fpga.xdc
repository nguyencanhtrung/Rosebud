# XDC constraints for the Xilinx VCU1525 board
# part: xcvu9p-fsgd2104-2L-e

# General configuration
set_property CFGBVS GND [current_design]
set_property CONFIG_VOLTAGE 1.8 [current_design]
set_property BITSTREAM.GENERAL.COMPRESS true [current_design]
set_property BITSTREAM.CONFIG.EXTMASTERCCLK_EN DIV-1 [current_design]
set_property BITSTREAM.CONFIG.SPI_32BIT_ADDR YES [current_design]
set_property BITSTREAM.CONFIG.SPI_BUSWIDTH 4 [current_design]
set_property BITSTREAM.CONFIG.SPI_FALL_EDGE YES [current_design]

# System clocks
# 300 MHz (DDR 0)
#set_property -dict {LOC AY37 IOSTANDARD LVDS} [get_ports clk_300mhz_0_p]
#set_property -dict {LOC AY38 IOSTANDARD LVDS} [get_ports clk_300mhz_0_n]
#create_clock -period 3.333 -name clk_300mhz_0 [get_ports clk_300mhz_0_p]

# 300 MHz (DDR 1)
#set_property -dict {LOC AW20 IOSTANDARD LVDS} [get_ports clk_300mhz_1_p]
#set_property -dict {LOC AW19 IOSTANDARD LVDS} [get_ports clk_300mhz_1_n]
#create_clock -period 3.333 -name clk_300mhz_1 [get_ports clk_300mhz_1_p]

# 300 MHz (DDR 2)
#set_property -dict {LOC F32  IOSTANDARD LVDS} [get_ports clk_300mhz_2_p]
#set_property -dict {LOC E32  IOSTANDARD LVDS} [get_ports clk_300mhz_2_n]
#create_clock -period 3.333 -name clk_300mhz_2 [get_ports clk_300mhz_2_p]

# 300 MHz (DDR 3)
#set_property -dict {LOC J16  IOSTANDARD LVDS} [get_ports clk_300mhz_3_p]
#set_property -dict {LOC H16  IOSTANDARD LVDS} [get_ports clk_300mhz_3_n]
#create_clock -period 3.333 -name clk_300mhz_3 [get_ports clk_300mhz_3_p]

# SI570 user clock
#set_property -dict {LOC AU19 IOSTANDARD LVDS} [get_ports clk_user_p]
#set_property -dict {LOC AV19 IOSTANDARD LVDS} [get_ports clk_user_n]
#create_clock -period 6.400 -name clk_user [get_ports clk_user_p]

# LEDs
set_property -dict {LOC BC21 IOSTANDARD LVCMOS12 SLEW SLOW DRIVE 8} [get_ports {led[0]}]
set_property -dict {LOC BB21 IOSTANDARD LVCMOS12 SLEW SLOW DRIVE 8} [get_ports {led[1]}]
set_property -dict {LOC BA20 IOSTANDARD LVCMOS12 SLEW SLOW DRIVE 8} [get_ports {led[2]}]

# Reset button
#set_property -dict {LOC AL20 IOSTANDARD LVCMOS12} [get_ports reset]

# DIP switches
set_property -dict {LOC AN22 IOSTANDARD LVCMOS12} [get_ports {sw[0]}]
set_property -dict {LOC AM19 IOSTANDARD LVCMOS12} [get_ports {sw[1]}]
set_property -dict {LOC AL19 IOSTANDARD LVCMOS12} [get_ports {sw[2]}]
set_property -dict {LOC AP20 IOSTANDARD LVCMOS12} [get_ports {sw[3]}]

# UART
#set_property -dict {LOC BB20 IOSTANDARD LVCMOS12} [get_ports uart_txd]
#set_property -dict {LOC BF18 IOSTANDARD LVCMOS12 SLEW SLOW DRIVE 8} [get_ports uart_rxd]

# QSFP28 Interfaces
set_property -dict {LOC N9} [get_ports qsfp0_tx1_p]
#set_property -dict {LOC N8  } [get_ports qsfp0_tx1_n] ;# MGTYTXN0_231 GTYE4_CHANNEL_X1Y48 / GTYE4_COMMON_X1Y12
set_property -dict {LOC N4} [get_ports qsfp0_rx1_p]
#set_property -dict {LOC N3  } [get_ports qsfp0_rx1_n] ;# MGTYRXN0_231 GTYE4_CHANNEL_X1Y48 / GTYE4_COMMON_X1Y12
set_property -dict {LOC M7} [get_ports qsfp0_tx2_p]
#set_property -dict {LOC M6  } [get_ports qsfp0_tx2_n] ;# MGTYTXN1_231 GTYE4_CHANNEL_X1Y49 / GTYE4_COMMON_X1Y12
set_property -dict {LOC M2} [get_ports qsfp0_rx2_p]
#set_property -dict {LOC M1  } [get_ports qsfp0_rx2_n] ;# MGTYRXN1_231 GTYE4_CHANNEL_X1Y49 / GTYE4_COMMON_X1Y12
set_property -dict {LOC L9} [get_ports qsfp0_tx3_p]
#set_property -dict {LOC L8  } [get_ports qsfp0_tx3_n] ;# MGTYTXN2_231 GTYE4_CHANNEL_X1Y50 / GTYE4_COMMON_X1Y12
set_property -dict {LOC L4} [get_ports qsfp0_rx3_p]
#set_property -dict {LOC L3  } [get_ports qsfp0_rx3_n] ;# MGTYRXN2_231 GTYE4_CHANNEL_X1Y50 / GTYE4_COMMON_X1Y12
set_property -dict {LOC K7} [get_ports qsfp0_tx4_p]
#set_property -dict {LOC K6  } [get_ports qsfp0_tx4_n] ;# MGTYTXN3_231 GTYE4_CHANNEL_X1Y51 / GTYE4_COMMON_X1Y12
set_property -dict {LOC K2} [get_ports qsfp0_rx4_p]
#set_property -dict {LOC K1  } [get_ports qsfp0_rx4_n] ;# MGTYRXN3_231 GTYE4_CHANNEL_X1Y51 / GTYE4_COMMON_X1Y12
#set_property -dict {LOC M11 } [get_ports qsfp0_mgt_refclk_0_p] ;# MGTREFCLK0P_231 from U14.4 via U43.13
#set_property -dict {LOC M10 } [get_ports qsfp0_mgt_refclk_0_n] ;# MGTREFCLK0N_231 from U14.5 via U43.14
set_property -dict {LOC K11} [get_ports qsfp0_mgt_refclk_1_p]
#set_property -dict {LOC K10 } [get_ports qsfp0_mgt_refclk_1_n] ;# MGTREFCLK1N_231 from U9.17
set_property -dict {LOC BE16 IOSTANDARD LVCMOS12} [get_ports qsfp0_modsell]
set_property -dict {LOC BE17 IOSTANDARD LVCMOS12} [get_ports qsfp0_resetl]
set_property -dict {LOC BE20 IOSTANDARD LVCMOS12} [get_ports qsfp0_modprsl]
set_property -dict {LOC BE21 IOSTANDARD LVCMOS12} [get_ports qsfp0_intl]
set_property -dict {LOC BD18 IOSTANDARD LVCMOS12} [get_ports qsfp0_lpmode]
set_property -dict {LOC AT22 IOSTANDARD LVCMOS12} [get_ports qsfp0_refclk_reset]
set_property -dict {LOC AT20 IOSTANDARD LVCMOS12} [get_ports {qsfp0_fs[0]}]
set_property -dict {LOC AU22 IOSTANDARD LVCMOS12} [get_ports {qsfp0_fs[1]}]

# 156.25 MHz MGT reference clock (from SI570)
#create_clock -period 6.400 -name qsfp0_mgt_refclk_0 [get_ports qsfp0_mgt_refclk_0_p]

# 156.25 MHz MGT reference clock (from SI5335, FS = 0b01)
#create_clock -period 6.400 -name qsfp0_mgt_refclk_1 [get_ports qsfp0_mgt_refclk_1_p]

# 161.1328125 MHz MGT reference clock (from SI5335, FS = 0b10)
#create_clock -period 6.206 -name qsfp0_mgt_refclk_1 [get_ports qsfp0_mgt_refclk_1_p]

set_property -dict {LOC U9} [get_ports qsfp1_tx1_p]
#set_property -dict {LOC U8  } [get_ports qsfp1_tx1_n] ;# MGTYTXN0_230 GTYE4_CHANNEL_X1Y44 / GTYE4_COMMON_X1Y11
set_property -dict {LOC U4} [get_ports qsfp1_rx1_p]
#set_property -dict {LOC U3  } [get_ports qsfp1_rx1_n] ;# MGTYRXN0_230 GTYE4_CHANNEL_X1Y44 / GTYE4_COMMON_X1Y11
set_property -dict {LOC T7} [get_ports qsfp1_tx2_p]
#set_property -dict {LOC T6  } [get_ports qsfp1_tx2_n] ;# MGTYTXN1_230 GTYE4_CHANNEL_X1Y45 / GTYE4_COMMON_X1Y11
set_property -dict {LOC T2} [get_ports qsfp1_rx2_p]
#set_property -dict {LOC T1  } [get_ports qsfp1_rx2_n] ;# MGTYRXN1_230 GTYE4_CHANNEL_X1Y45 / GTYE4_COMMON_X1Y11
set_property -dict {LOC R9} [get_ports qsfp1_tx3_p]
#set_property -dict {LOC R8  } [get_ports qsfp1_tx3_n] ;# MGTYTXN2_230 GTYE4_CHANNEL_X1Y46 / GTYE4_COMMON_X1Y11
set_property -dict {LOC R4} [get_ports qsfp1_rx3_p]
#set_property -dict {LOC R3  } [get_ports qsfp1_rx3_n] ;# MGTYRXN2_230 GTYE4_CHANNEL_X1Y46 / GTYE4_COMMON_X1Y11
set_property -dict {LOC P7} [get_ports qsfp1_tx4_p]
#set_property -dict {LOC P6  } [get_ports qsfp1_tx4_n] ;# MGTYTXN3_230 GTYE4_CHANNEL_X1Y47 / GTYE4_COMMON_X1Y11
set_property -dict {LOC P2} [get_ports qsfp1_rx4_p]
#set_property -dict {LOC P1  } [get_ports qsfp1_rx4_n] ;# MGTYRXN3_230 GTYE4_CHANNEL_X1Y47 / GTYE4_COMMON_X1Y11
#set_property -dict {LOC T11 } [get_ports qsfp1_mgt_refclk_0_p] ;# MGTREFCLK0P_230 from U14.4 via U43.15
#set_property -dict {LOC T10 } [get_ports qsfp1_mgt_refclk_0_n] ;# MGTREFCLK0N_230 from U14.5 via U43.16
set_property -dict {LOC P11} [get_ports qsfp1_mgt_refclk_1_p]
#set_property -dict {LOC P10 } [get_ports qsfp1_mgt_refclk_1_n] ;# MGTREFCLK1N_230 from U12.17
set_property -dict {LOC AY20 IOSTANDARD LVCMOS12} [get_ports qsfp1_modsell]
set_property -dict {LOC BC18 IOSTANDARD LVCMOS12} [get_ports qsfp1_resetl]
set_property -dict {LOC BC19 IOSTANDARD LVCMOS12} [get_ports qsfp1_modprsl]
set_property -dict {LOC AV21 IOSTANDARD LVCMOS12} [get_ports qsfp1_intl]
set_property -dict {LOC AV22 IOSTANDARD LVCMOS12} [get_ports qsfp1_lpmode]
set_property -dict {LOC AR21 IOSTANDARD LVCMOS12} [get_ports qsfp1_refclk_reset]
set_property -dict {LOC AR22 IOSTANDARD LVCMOS12} [get_ports {qsfp1_fs[0]}]
set_property -dict {LOC AU20 IOSTANDARD LVCMOS12} [get_ports {qsfp1_fs[1]}]

# 156.25 MHz MGT reference clock (from SI570)
#create_clock -period 6.400 -name qsfp1_mgt_refclk_0 [get_ports qsfp1_mgt_refclk_0_p]

# 156.25 MHz MGT reference clock (from SI5335, FS = 0b01)
#create_clock -period 6.400 -name qsfp1_mgt_refclk_1 [get_ports qsfp1_mgt_refclk_1_p]

# 161.1328125 MHz MGT reference clock (from SI5335, FS = 0b10)
#create_clock -period 6.206 -name qsfp1_mgt_refclk_1 [get_ports qsfp1_mgt_refclk_1_p]

# I2C interface
#set_property -dict {LOC BF19 IOSTANDARD LVCMOS12 SLEW SLOW DRIVE 8} [get_ports i2c_mux_reset]
set_property -dict {LOC BF20 IOSTANDARD LVCMOS12 SLEW SLOW DRIVE 8} [get_ports i2c_scl]
set_property -dict {LOC BF17 IOSTANDARD LVCMOS12 SLEW SLOW DRIVE 8} [get_ports i2c_sda]

# PCIe Interface
set_property -dict {LOC AF2} [get_ports {pcie_rx_p[0]}]
#set_property -dict {LOC AF1  } [get_ports {pcie_rx_n[0]}]  ;# MGTYRXN3_227 GTYE4_CHANNEL_X1Y35 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AF7} [get_ports {pcie_tx_p[0]}]
#set_property -dict {LOC AF6  } [get_ports {pcie_tx_n[0]}]  ;# MGTYTXN3_227 GTYE4_CHANNEL_X1Y35 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AG4} [get_ports {pcie_rx_p[1]}]
#set_property -dict {LOC AG3  } [get_ports {pcie_rx_n[1]}]  ;# MGTYRXN2_227 GTYE4_CHANNEL_X1Y34 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AG9} [get_ports {pcie_tx_p[1]}]
#set_property -dict {LOC AG8  } [get_ports {pcie_tx_n[1]}]  ;# MGTYTXN2_227 GTYE4_CHANNEL_X1Y34 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AH2} [get_ports {pcie_rx_p[2]}]
#set_property -dict {LOC AH1  } [get_ports {pcie_rx_n[2]}]  ;# MGTYRXN1_227 GTYE4_CHANNEL_X1Y33 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AH7} [get_ports {pcie_tx_p[2]}]
#set_property -dict {LOC AH6  } [get_ports {pcie_tx_n[2]}]  ;# MGTYTXN1_227 GTYE4_CHANNEL_X1Y33 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AJ4} [get_ports {pcie_rx_p[3]}]
#set_property -dict {LOC AJ3  } [get_ports {pcie_rx_n[3]}]  ;# MGTYRXN0_227 GTYE4_CHANNEL_X1Y32 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AJ9} [get_ports {pcie_tx_p[3]}]
#set_property -dict {LOC AJ8  } [get_ports {pcie_tx_n[3]}]  ;# MGTYTXN0_227 GTYE4_CHANNEL_X1Y32 / GTYE4_COMMON_X1Y8
set_property -dict {LOC AK2} [get_ports {pcie_rx_p[4]}]
#set_property -dict {LOC AK1  } [get_ports {pcie_rx_n[4]}]  ;# MGTYRXN3_226 GTYE4_CHANNEL_X1Y31 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AK7} [get_ports {pcie_tx_p[4]}]
#set_property -dict {LOC AK6  } [get_ports {pcie_tx_n[4]}]  ;# MGTYTXN3_226 GTYE4_CHANNEL_X1Y31 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AL4} [get_ports {pcie_rx_p[5]}]
#set_property -dict {LOC AL3  } [get_ports {pcie_rx_n[5]}]  ;# MGTYRXN2_226 GTYE4_CHANNEL_X1Y30 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AL9} [get_ports {pcie_tx_p[5]}]
#set_property -dict {LOC AL8  } [get_ports {pcie_tx_n[5]}]  ;# MGTYTXN2_226 GTYE4_CHANNEL_X1Y30 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AM2} [get_ports {pcie_rx_p[6]}]
#set_property -dict {LOC AM1  } [get_ports {pcie_rx_n[6]}]  ;# MGTYRXN1_226 GTYE4_CHANNEL_X1Y29 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AM7} [get_ports {pcie_tx_p[6]}]
#set_property -dict {LOC AM6  } [get_ports {pcie_tx_n[6]}]  ;# MGTYTXN1_226 GTYE4_CHANNEL_X1Y29 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AN4} [get_ports {pcie_rx_p[7]}]
#set_property -dict {LOC AN3  } [get_ports {pcie_rx_n[7]}]  ;# MGTYRXN0_226 GTYE4_CHANNEL_X1Y28 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AN9} [get_ports {pcie_tx_p[7]}]
#set_property -dict {LOC AN8  } [get_ports {pcie_tx_n[7]}]  ;# MGTYTXN0_226 GTYE4_CHANNEL_X1Y28 / GTYE4_COMMON_X1Y7
set_property -dict {LOC AP2} [get_ports {pcie_rx_p[8]}]
#set_property -dict {LOC AP1  } [get_ports {pcie_rx_n[8]}]  ;# MGTYRXN3_225 GTYE4_CHANNEL_X1Y27 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AP7} [get_ports {pcie_tx_p[8]}]
#set_property -dict {LOC AP6  } [get_ports {pcie_tx_n[8]}]  ;# MGTYTXN3_225 GTYE4_CHANNEL_X1Y27 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AR4} [get_ports {pcie_rx_p[9]}]
#set_property -dict {LOC AR3  } [get_ports {pcie_rx_n[9]}]  ;# MGTYRXN2_225 GTYE4_CHANNEL_X1Y26 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AR9} [get_ports {pcie_tx_p[9]}]
#set_property -dict {LOC AR8  } [get_ports {pcie_tx_n[9]}]  ;# MGTYTXN2_225 GTYE4_CHANNEL_X1Y26 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AT2} [get_ports {pcie_rx_p[10]}]
#set_property -dict {LOC AT1  } [get_ports {pcie_rx_n[10]}] ;# MGTYRXN1_225 GTYE4_CHANNEL_X1Y25 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AT7} [get_ports {pcie_tx_p[10]}]
#set_property -dict {LOC AT6  } [get_ports {pcie_tx_n[10]}] ;# MGTYTXN1_225 GTYE4_CHANNEL_X1Y25 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AU4} [get_ports {pcie_rx_p[11]}]
#set_property -dict {LOC AU3  } [get_ports {pcie_rx_n[11]}] ;# MGTYRXN0_225 GTYE4_CHANNEL_X1Y24 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AU9} [get_ports {pcie_tx_p[11]}]
#set_property -dict {LOC AU8  } [get_ports {pcie_tx_n[11]}] ;# MGTYTXN0_225 GTYE4_CHANNEL_X1Y24 / GTYE4_COMMON_X1Y6
set_property -dict {LOC AV2} [get_ports {pcie_rx_p[12]}]
#set_property -dict {LOC AV1  } [get_ports {pcie_rx_n[12]}] ;# MGTYRXN3_224 GTYE4_CHANNEL_X1Y23 / GTYE4_COMMON_X1Y5
set_property -dict {LOC AV7} [get_ports {pcie_tx_p[12]}]
#set_property -dict {LOC AV6  } [get_ports {pcie_tx_n[12]}] ;# MGTYTXN3_224 GTYE4_CHANNEL_X1Y23 / GTYE4_COMMON_X1Y5
set_property -dict {LOC AW4} [get_ports {pcie_rx_p[13]}]
#set_property -dict {LOC AW3  } [get_ports {pcie_rx_n[13]}] ;# MGTYRXN2_224 GTYE4_CHANNEL_X1Y22 / GTYE4_COMMON_X1Y5
set_property -dict {LOC BB5} [get_ports {pcie_tx_p[13]}]
#set_property -dict {LOC BB4  } [get_ports {pcie_tx_n[13]}] ;# MGTYTXN2_224 GTYE4_CHANNEL_X1Y22 / GTYE4_COMMON_X1Y5
set_property -dict {LOC BA2} [get_ports {pcie_rx_p[14]}]
#set_property -dict {LOC BA1  } [get_ports {pcie_rx_n[14]}] ;# MGTYRXN1_224 GTYE4_CHANNEL_X1Y21 / GTYE4_COMMON_X1Y5
set_property -dict {LOC BD5} [get_ports {pcie_tx_p[14]}]
#set_property -dict {LOC BD4  } [get_ports {pcie_tx_n[14]}] ;# MGTYTXN1_224 GTYE4_CHANNEL_X1Y21 / GTYE4_COMMON_X1Y5
set_property -dict {LOC BC2} [get_ports {pcie_rx_p[15]}]
#set_property -dict {LOC BC1  } [get_ports {pcie_rx_n[15]}] ;# MGTYRXN0_224 GTYE4_CHANNEL_X1Y20 / GTYE4_COMMON_X1Y5
set_property -dict {LOC BF5} [get_ports {pcie_tx_p[15]}]
#set_property -dict {LOC BF4  } [get_ports {pcie_tx_n[15]}] ;# MGTYTXN0_224 GTYE4_CHANNEL_X1Y20 / GTYE4_COMMON_X1Y5
set_property -dict {LOC AM11} [get_ports pcie_refclk_p]
#set_property -dict {LOC AM10 } [get_ports pcie_refclk_n] ;# MGTREFCLK0N_226
set_property PACKAGE_PIN BD21 [get_ports pcie_reset_n]
set_property IOSTANDARD LVCMOS12 [get_ports pcie_reset_n]
set_property PULLUP true [get_ports pcie_reset_n]

# 100 MHz MGT reference clock
create_clock -period 10.000 -name pcie_mgt_refclk_1 [get_ports pcie_refclk_p]


create_pblock pblock_1
add_cells_to_pblock [get_pblocks pblock_1] [get_cells -quiet [list {core_inst/riscv_cores[0].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_1] -add {SLICE_X13Y0:SLICE_X39Y119}
resize_pblock [get_pblocks pblock_1] -add {DSP48E2_X1Y0:DSP48E2_X5Y47}
resize_pblock [get_pblocks pblock_1] -add {RAMB18_X1Y0:RAMB18_X2Y47}
resize_pblock [get_pblocks pblock_1] -add {RAMB36_X1Y0:RAMB36_X2Y23}
resize_pblock [get_pblocks pblock_1] -add {URAM288_X0Y0:URAM288_X0Y31}
set_property SNAPPING_MODE ON [get_pblocks pblock_1]
create_pblock pblock_2
add_cells_to_pblock [get_pblocks pblock_2] [get_cells -quiet [list {core_inst/riscv_cores[1].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_2] -add {SLICE_X51Y0:SLICE_X77Y119}
resize_pblock [get_pblocks pblock_2] -add {DSP48E2_X7Y0:DSP48E2_X8Y47}
resize_pblock [get_pblocks pblock_2] -add {RAMB18_X4Y0:RAMB18_X4Y47}
resize_pblock [get_pblocks pblock_2] -add {RAMB36_X4Y0:RAMB36_X4Y23}
resize_pblock [get_pblocks pblock_2] -add {URAM288_X1Y0:URAM288_X1Y31}
set_property SNAPPING_MODE ON [get_pblocks pblock_2]
create_pblock pblock_3
add_cells_to_pblock [get_pblocks pblock_3] [get_cells -quiet [list {core_inst/riscv_cores[2].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_3] -add {SLICE_X86Y0:SLICE_X111Y119}
resize_pblock [get_pblocks pblock_3] -add {DSP48E2_X10Y0:DSP48E2_X13Y47}
resize_pblock [get_pblocks pblock_3] -add {RAMB18_X6Y0:RAMB18_X7Y47}
resize_pblock [get_pblocks pblock_3] -add {RAMB36_X6Y0:RAMB36_X7Y23}
resize_pblock [get_pblocks pblock_3] -add {URAM288_X2Y0:URAM288_X2Y31}
set_property SNAPPING_MODE ON [get_pblocks pblock_3]
create_pblock pblock_4
add_cells_to_pblock [get_pblocks pblock_4] [get_cells -quiet [list {core_inst/riscv_cores[3].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_4] -add {SLICE_X119Y119:SLICE_X145Y0}
resize_pblock [get_pblocks pblock_4] -add {DSP48E2_X15Y0:DSP48E2_X16Y47}
resize_pblock [get_pblocks pblock_4] -add {RAMB18_X9Y0:RAMB18_X9Y47}
resize_pblock [get_pblocks pblock_4] -add {RAMB36_X9Y0:RAMB36_X9Y23}
resize_pblock [get_pblocks pblock_4] -add {URAM288_X3Y0:URAM288_X3Y31}
set_property SNAPPING_MODE ON [get_pblocks pblock_4]
create_pblock pblock_5
add_cells_to_pblock [get_pblocks pblock_5] [get_cells -quiet [list {core_inst/riscv_cores[4].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_5] -add {SLICE_X13Y180:SLICE_X42Y299}
resize_pblock [get_pblocks pblock_5] -add {DSP48E2_X1Y72:DSP48E2_X5Y119}
resize_pblock [get_pblocks pblock_5] -add {RAMB18_X1Y72:RAMB18_X2Y119}
resize_pblock [get_pblocks pblock_5] -add {RAMB36_X1Y36:RAMB36_X2Y59}
resize_pblock [get_pblocks pblock_5] -add {URAM288_X0Y48:URAM288_X0Y79}
set_property SNAPPING_MODE ON [get_pblocks pblock_5]
create_pblock pblock_6
add_cells_to_pblock [get_pblocks pblock_6] [get_cells -quiet [list {core_inst/riscv_cores[5].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_6] -add {SLICE_X50Y180:SLICE_X77Y299}
resize_pblock [get_pblocks pblock_6] -add {DSP48E2_X7Y72:DSP48E2_X8Y119}
resize_pblock [get_pblocks pblock_6] -add {RAMB18_X4Y72:RAMB18_X4Y119}
resize_pblock [get_pblocks pblock_6] -add {RAMB36_X4Y36:RAMB36_X4Y59}
resize_pblock [get_pblocks pblock_6] -add {URAM288_X1Y48:URAM288_X1Y79}
set_property SNAPPING_MODE ON [get_pblocks pblock_6]
create_pblock pblock_7
add_cells_to_pblock [get_pblocks pblock_7] [get_cells -quiet [list {core_inst/riscv_cores[6].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_7] -add {SLICE_X86Y180:SLICE_X114Y299}
resize_pblock [get_pblocks pblock_7] -add {DSP48E2_X10Y72:DSP48E2_X13Y119}
resize_pblock [get_pblocks pblock_7] -add {RAMB18_X6Y72:RAMB18_X7Y119}
resize_pblock [get_pblocks pblock_7] -add {RAMB36_X6Y36:RAMB36_X7Y59}
resize_pblock [get_pblocks pblock_7] -add {URAM288_X2Y48:URAM288_X2Y79}
set_property SNAPPING_MODE ON [get_pblocks pblock_7]
create_pblock pblock_8
add_cells_to_pblock [get_pblocks pblock_8] [get_cells -quiet [list {core_inst/riscv_cores[7].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_8] -add {SLICE_X121Y180:SLICE_X147Y299}
resize_pblock [get_pblocks pblock_8] -add {DSP48E2_X15Y72:DSP48E2_X16Y119}
resize_pblock [get_pblocks pblock_8] -add {RAMB18_X9Y72:RAMB18_X9Y119}
resize_pblock [get_pblocks pblock_8] -add {RAMB36_X9Y36:RAMB36_X9Y59}
resize_pblock [get_pblocks pblock_8] -add {URAM288_X3Y48:URAM288_X3Y79}
set_property SNAPPING_MODE ON [get_pblocks pblock_8]
create_pblock pblock_9
add_cells_to_pblock [get_pblocks pblock_9] [get_cells -quiet [list {core_inst/riscv_cores[8].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_9] -add {SLICE_X16Y360:SLICE_X41Y479}
resize_pblock [get_pblocks pblock_9] -add {DSP48E2_X1Y144:DSP48E2_X5Y191}
resize_pblock [get_pblocks pblock_9] -add {RAMB18_X2Y144:RAMB18_X2Y191}
resize_pblock [get_pblocks pblock_9] -add {RAMB36_X2Y72:RAMB36_X2Y95}
resize_pblock [get_pblocks pblock_9] -add {URAM288_X0Y96:URAM288_X0Y127}
set_property SNAPPING_MODE ON [get_pblocks pblock_9]
create_pblock pblock_10
add_cells_to_pblock [get_pblocks pblock_10] [get_cells -quiet [list {core_inst/riscv_cores[9].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_10] -add {SLICE_X50Y360:SLICE_X77Y479}
resize_pblock [get_pblocks pblock_10] -add {DSP48E2_X7Y144:DSP48E2_X8Y191}
resize_pblock [get_pblocks pblock_10] -add {RAMB18_X4Y144:RAMB18_X4Y191}
resize_pblock [get_pblocks pblock_10] -add {RAMB36_X4Y72:RAMB36_X4Y95}
resize_pblock [get_pblocks pblock_10] -add {URAM288_X1Y96:URAM288_X1Y127}
set_property SNAPPING_MODE ON [get_pblocks pblock_10]
create_pblock pblock_11
add_cells_to_pblock [get_pblocks pblock_11] [get_cells -quiet [list {core_inst/riscv_cores[10].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_11] -add {SLICE_X86Y360:SLICE_X111Y479}
resize_pblock [get_pblocks pblock_11] -add {DSP48E2_X10Y144:DSP48E2_X13Y191}
resize_pblock [get_pblocks pblock_11] -add {RAMB18_X6Y144:RAMB18_X7Y191}
resize_pblock [get_pblocks pblock_11] -add {RAMB36_X6Y72:RAMB36_X7Y95}
resize_pblock [get_pblocks pblock_11] -add {URAM288_X2Y96:URAM288_X2Y127}
set_property SNAPPING_MODE ON [get_pblocks pblock_11]
create_pblock pblock_12
add_cells_to_pblock [get_pblocks pblock_12] [get_cells -quiet [list {core_inst/riscv_cores[11].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_12] -add {SLICE_X119Y360:SLICE_X145Y479}
resize_pblock [get_pblocks pblock_12] -add {DSP48E2_X15Y144:DSP48E2_X16Y191}
resize_pblock [get_pblocks pblock_12] -add {RAMB18_X9Y144:RAMB18_X9Y191}
resize_pblock [get_pblocks pblock_12] -add {RAMB36_X9Y72:RAMB36_X9Y95}
resize_pblock [get_pblocks pblock_12] -add {URAM288_X3Y96:URAM288_X3Y127}
set_property SNAPPING_MODE ON [get_pblocks pblock_12]
create_pblock pblock_13
add_cells_to_pblock [get_pblocks pblock_13] [get_cells -quiet [list {core_inst/riscv_cores[12].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_13] -add {SLICE_X13Y600:SLICE_X41Y719}
resize_pblock [get_pblocks pblock_13] -add {DSP48E2_X1Y240:DSP48E2_X5Y287}
resize_pblock [get_pblocks pblock_13] -add {RAMB18_X1Y240:RAMB18_X2Y287}
resize_pblock [get_pblocks pblock_13] -add {RAMB36_X1Y120:RAMB36_X2Y143}
resize_pblock [get_pblocks pblock_13] -add {URAM288_X0Y160:URAM288_X0Y191}
set_property SNAPPING_MODE ON [get_pblocks pblock_13]
create_pblock pblock_14
add_cells_to_pblock [get_pblocks pblock_14] [get_cells -quiet [list {core_inst/riscv_cores[13].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_14] -add {SLICE_X50Y600:SLICE_X77Y719}
resize_pblock [get_pblocks pblock_14] -add {DSP48E2_X7Y240:DSP48E2_X8Y287}
resize_pblock [get_pblocks pblock_14] -add {RAMB18_X4Y240:RAMB18_X4Y287}
resize_pblock [get_pblocks pblock_14] -add {RAMB36_X4Y120:RAMB36_X4Y143}
resize_pblock [get_pblocks pblock_14] -add {URAM288_X1Y160:URAM288_X1Y191}
set_property SNAPPING_MODE ON [get_pblocks pblock_14]
create_pblock pblock_15
add_cells_to_pblock [get_pblocks pblock_15] [get_cells -quiet [list {core_inst/riscv_cores[14].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_15] -add {SLICE_X86Y600:SLICE_X114Y719}
resize_pblock [get_pblocks pblock_15] -add {DSP48E2_X10Y240:DSP48E2_X13Y287}
resize_pblock [get_pblocks pblock_15] -add {RAMB18_X6Y240:RAMB18_X7Y287}
resize_pblock [get_pblocks pblock_15] -add {RAMB36_X6Y120:RAMB36_X7Y143}
resize_pblock [get_pblocks pblock_15] -add {URAM288_X2Y160:URAM288_X2Y191}
set_property SNAPPING_MODE ON [get_pblocks pblock_15]
create_pblock pblock_16
add_cells_to_pblock [get_pblocks pblock_16] [get_cells -quiet [list {core_inst/riscv_cores[15].riscv_block_inst}]]
resize_pblock [get_pblocks pblock_16] -add {SLICE_X121Y600:SLICE_X147Y719}
resize_pblock [get_pblocks pblock_16] -add {DSP48E2_X15Y240:DSP48E2_X16Y287}
resize_pblock [get_pblocks pblock_16] -add {RAMB18_X9Y240:RAMB18_X9Y287}
resize_pblock [get_pblocks pblock_16] -add {RAMB36_X9Y120:RAMB36_X9Y143}
resize_pblock [get_pblocks pblock_16] -add {URAM288_X3Y160:URAM288_X3Y191}
set_property SNAPPING_MODE ON [get_pblocks pblock_16]




