/*

Copyright 2019, The Regents of the University of California.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE REGENTS OF THE UNIVERSITY OF CALIFORNIA ''AS
IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE REGENTS OF THE UNIVERSITY OF CALIFORNIA OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of The Regents of the University of California.

*/

// Language: Verilog 2001

`timescale 1ns / 1ps
`define PR_ENABLE

/*
 * Testbench for fpga_core
 */
module test_gousheh;

parameter DATA_WIDTH       = 128;
parameter CTRL_WIDTH       = 32+4; //DON'T CHANGE
parameter DRAM_WIDTH       = 32;   //DON'T CHANGE

parameter CORE_WIDTH       = 4;
parameter PORT_WIDTH       = 3;
parameter DRAM_PORT        = 4;
parameter SLOT_COUNT       = 16;

parameter STRB_WIDTH       = DATA_WIDTH/8;
parameter SLOT_WIDTH       = $clog2(SLOT_COUNT+1);
parameter TAG_WIDTH        = (SLOT_WIDTH>5)? SLOT_WIDTH:5;
parameter ID_TAG_WIDTH     = CORE_WIDTH+TAG_WIDTH;

parameter IMEM_SIZE        = 65536;
parameter PMEM_SIZE        = 1048576;
parameter DMEM_SIZE        = 32768;
parameter BC_REGION_SIZE   = 8192;
parameter SLOW_M_B_LINES   = 4096;
parameter FAST_M_B_LINES   = 1024;
parameter BC_START_ADDR    = 32'h00800000+DMEM_SIZE-BC_REGION_SIZE;
parameter CORE_MSG_WIDTH   = 32+4+$clog2(BC_REGION_SIZE)-2;

parameter RECV_DESC_DEPTH  = SLOT_COUNT;
parameter SEND_DESC_DEPTH  = SLOT_COUNT;
parameter DRAM_DESC_DEPTH  = 8;
parameter MSG_FIFO_DEPTH   = 16;
parameter SLOT_START_ADDR  = 16'h0;
parameter SLOT_ADDR_STEP   = 22'h004000;
parameter HDR_START_ADDR   = 22'h104000;
parameter MAX_PKT_HDR_SIZE = 128;

// Testbench signals
reg  [DATA_WIDTH-1:0]     data_s_axis_tdata;
reg  [STRB_WIDTH-1:0]     data_s_axis_tkeep;
reg                       data_s_axis_tvalid;
wire                      data_s_axis_tready;
reg                       data_s_axis_tlast;
reg  [TAG_WIDTH-1:0]      data_s_axis_tdest;
reg  [PORT_WIDTH-1:0]     data_s_axis_tuser;

wire [DATA_WIDTH-1:0]     data_m_axis_tdata;
wire [STRB_WIDTH-1:0]     data_m_axis_tkeep;
wire                      data_m_axis_tvalid;
reg                       data_m_axis_tready;
wire                      data_m_axis_tlast;
wire [PORT_WIDTH-1:0]     data_m_axis_tdest;
wire [ID_TAG_WIDTH-1:0]   data_m_axis_tuser;

reg  [CTRL_WIDTH-1:0]     ctrl_s_axis_tdata;
reg                       ctrl_s_axis_tvalid;
wire                      ctrl_s_axis_tready;

wire [CTRL_WIDTH-1:0]     ctrl_m_axis_tdata;
wire                      ctrl_m_axis_tvalid;
reg                       ctrl_m_axis_tready;

reg  [DRAM_WIDTH-1:0]     dram_s_axis_tdata;
reg                       dram_s_axis_tvalid;
wire                      dram_s_axis_tready;
reg                       dram_s_axis_tlast;

wire [DRAM_WIDTH-1:0]     dram_m_axis_tdata;
wire                      dram_m_axis_tvalid;
reg                       dram_m_axis_tready;
wire                      dram_m_axis_tlast;

wire [CORE_MSG_WIDTH-1:0] core_msg_out_tdata;
wire                      core_msg_out_tvalid;
reg                       core_msg_out_tready;

reg  [CORE_MSG_WIDTH-1:0] core_msg_in_tdata;
reg  [CORE_WIDTH-1:0]     core_msg_in_tuser;
reg                       core_msg_in_tvalid;

reg  [3:0]                core_stat_addr;
wire [31:0]               core_stat_data;


// Internal wires
wire                      core_reset;

wire                      dma_cmd_wr_en;
wire [25:0]               dma_cmd_wr_addr;
wire                      dma_cmd_hdr_wr_en;
wire [23:0]               dma_cmd_hdr_wr_addr;
wire [DATA_WIDTH-1:0]     dma_cmd_wr_data;
wire [STRB_WIDTH-1:0]     dma_cmd_wr_strb;
wire                      dma_cmd_wr_last;
wire                      dma_cmd_wr_ready;
wire                      dma_cmd_rd_en;
wire [25:0]               dma_cmd_rd_addr;
wire                      dma_cmd_rd_last;
wire                      dma_cmd_rd_ready;
wire                      dma_rd_resp_valid;
wire [DATA_WIDTH-1:0]     dma_rd_resp_data;
wire                      dma_rd_resp_ready;

wire [63:0]               in_desc;
wire                      in_desc_valid;
wire                      in_desc_taken;
wire [63:0]               out_desc;
wire                      out_desc_2nd;
wire                      out_desc_valid;
wire                      out_desc_ready;

wire [CORE_MSG_WIDTH-1:0] bc_msg_out;
wire                      bc_msg_out_valid;
wire                      bc_msg_out_ready;
wire [CORE_MSG_WIDTH-1:0] bc_msg_in;
wire                      bc_msg_in_valid;

wire [31:0]               wrapper_status_data;
wire [2:0]                wrapper_status_addr;
wire [31:0]               core_status_data;
wire [1:0]                core_status_addr;

Gousheh_wrapper #(
    .DATA_WIDTH(DATA_WIDTH),
    .SLOT_COUNT(SLOT_COUNT),
    .RECV_DESC_DEPTH(RECV_DESC_DEPTH),
    .SEND_DESC_DEPTH(SEND_DESC_DEPTH),
    .DRAM_DESC_DEPTH(DRAM_DESC_DEPTH),
    .MSG_FIFO_DEPTH(MSG_FIFO_DEPTH),
    .PORT_WIDTH(PORT_WIDTH),
    .CORE_ID_WIDTH(CORE_WIDTH),
    .BC_REGION_SIZE(BC_REGION_SIZE),
    .MSG_WIDTH(CORE_MSG_WIDTH),
    .MAX_PKT_HDR_SIZE(MAX_PKT_HDR_SIZE),
    .SLOT_START_ADDR(SLOT_START_ADDR),
    .SLOT_ADDR_STEP(SLOT_ADDR_STEP),
    .HDR_START_ADDR(HDR_START_ADDR),
    .DRAM_PORT(DRAM_PORT),
    .DATA_S_REG_TYPE(2),
    .DATA_M_REG_TYPE(2),
    .DRAM_M_REG_TYPE(2)
) UUT (
    .clk(clk),
    .rst(rst),

    .core_id({CORE_WIDTH{1'b0}}),
    // ---------------- DATA CHANNEL --------------- //
    // Incoming data
    .data_s_axis_tdata(data_s_axis_tdata),
    .data_s_axis_tkeep(data_s_axis_tkeep),
    .data_s_axis_tvalid(data_s_axis_tvalid),
    .data_s_axis_tready(data_s_axis_tready),
    .data_s_axis_tlast(data_s_axis_tlast),
    .data_s_axis_tdest(data_s_axis_tdest),
    .data_s_axis_tuser(data_s_axis_tuser),

    // Outgoing data
    .data_m_axis_tdata(data_m_axis_tdata),
    .data_m_axis_tkeep(data_m_axis_tkeep),
    .data_m_axis_tvalid(data_m_axis_tvalid),
    .data_m_axis_tready(data_m_axis_tready),
    .data_m_axis_tlast(data_m_axis_tlast),
    .data_m_axis_tdest(data_m_axis_tdest),
    .data_m_axis_tuser(data_m_axis_tuser[TAG_WIDTH-1:0]),

    // ---------------- CTRL CHANNEL --------------- //
    // Incoming control
    .ctrl_s_axis_tdata(ctrl_s_axis_tdata),
    .ctrl_s_axis_tvalid(ctrl_s_axis_tvalid),
    .ctrl_s_axis_tready(ctrl_s_axis_tready),

    // Outgoing control
    .ctrl_m_axis_tdata(ctrl_m_axis_tdata),
    .ctrl_m_axis_tvalid(ctrl_m_axis_tvalid),
    .ctrl_m_axis_tready(ctrl_m_axis_tready),

    // ------------ DRAM RD REQ CHANNEL ------------- //
    // Incoming DRAM request
    .dram_s_axis_tdata(dram_s_axis_tdata),
    .dram_s_axis_tvalid(dram_s_axis_tvalid),
    .dram_s_axis_tready(dram_s_axis_tready),
    .dram_s_axis_tlast(dram_s_axis_tlast),

    // Outgoing DRAM request
    .dram_m_axis_tdata(dram_m_axis_tdata),
    .dram_m_axis_tvalid(dram_m_axis_tvalid),
    .dram_m_axis_tready(dram_m_axis_tready),
    .dram_m_axis_tlast(dram_m_axis_tlast),

    // ------------- CORE MSG CHANNEL -------------- //
    // Core messages output
    .core_msg_out(core_msg_out_tdata),
    .core_msg_out_valid(core_msg_out_tvalid),
    .core_msg_out_ready(core_msg_out_tready),

    // Core messages input
    .core_msg_in(core_msg_in_tdata),
    .core_msg_in_user(core_msg_in_tuser),
    .core_msg_in_valid(core_msg_in_tvalid),

    // ---------- STATUS READBACK CHANNEL ---------- //
    .stat_addr(core_stat_addr),
    .stat_data(core_stat_data),

    // --------------------------------------------- //
    // ------- CONNECTION TO RISCV_BLOCK ----------- //
    // --------------------------------------------- //

    .core_reset(core_reset),

    .dma_cmd_wr_en(dma_cmd_wr_en),
    .dma_cmd_wr_addr(dma_cmd_wr_addr),
    .dma_cmd_hdr_wr_en(dma_cmd_hdr_wr_en),
    .dma_cmd_hdr_wr_addr(dma_cmd_hdr_wr_addr),
    .dma_cmd_wr_data(dma_cmd_wr_data),
    .dma_cmd_wr_strb(dma_cmd_wr_strb),
    .dma_cmd_wr_last(dma_cmd_wr_last),
    .dma_cmd_wr_ready(dma_cmd_wr_ready),
    .dma_cmd_rd_en(dma_cmd_rd_en),
    .dma_cmd_rd_addr(dma_cmd_rd_addr),
    .dma_cmd_rd_last(dma_cmd_rd_last),
    .dma_cmd_rd_ready(dma_cmd_rd_ready),
    .dma_rd_resp_valid(dma_rd_resp_valid),
    .dma_rd_resp_data(dma_rd_resp_data),
    .dma_rd_resp_ready(dma_rd_resp_ready),

    .in_desc(in_desc),
    .in_desc_valid(in_desc_valid),
    .in_desc_taken(in_desc_taken),
    .out_desc(out_desc),
    .out_desc_2nd(out_desc_2nd),
    .out_desc_valid(out_desc_valid),
    .out_desc_ready(out_desc_ready),

    .bc_msg_out(bc_msg_out),
    .bc_msg_out_valid(bc_msg_out_valid),
    .bc_msg_out_ready(bc_msg_out_ready),
    .bc_msg_in(bc_msg_in),
    .bc_msg_in_user(),
    .bc_msg_in_valid(bc_msg_in_valid),

    .wrapper_status_data(wrapper_status_data),
    .wrapper_status_addr(wrapper_status_addr),
    .core_status_data(core_status_data),
    .core_status_addr(core_status_addr)
);

`ifndef PR_ENABLE
Gousheh # (
    .DATA_WIDTH(DATA_WIDTH),
    .STRB_WIDTH(STRB_WIDTH),
    .IMEM_SIZE(IMEM_SIZE),
    .PMEM_SIZE(PMEM_SIZE),
    .DMEM_SIZE(DMEM_SIZE),
    .SLOW_M_B_LINES(SLOW_M_B_LINES),
    .FAST_M_B_LINES(FAST_M_B_LINES),
    .BC_REGION_SIZE(BC_REGION_SIZE),
    .BC_START_ADDR(BC_START_ADDR),
    .MSG_WIDTH(CORE_MSG_WIDTH),
    .CORE_ID_WIDTH(CORE_WIDTH)
) Gousheh_inst (
`else
Gousheh_PR pr_wrapper (
`endif
    .clk(clk),
    .rst(rst),
    .core_reset(core_reset),

    .dma_cmd_wr_en(dma_cmd_wr_en),
    .dma_cmd_wr_addr(dma_cmd_wr_addr),
    .dma_cmd_hdr_wr_en(dma_cmd_hdr_wr_en),
    .dma_cmd_hdr_wr_addr(dma_cmd_hdr_wr_addr),
    .dma_cmd_wr_data(dma_cmd_wr_data),
    .dma_cmd_wr_strb(dma_cmd_wr_strb),
    .dma_cmd_wr_last(dma_cmd_wr_last),
    .dma_cmd_wr_ready(dma_cmd_wr_ready),
    .dma_cmd_rd_en(dma_cmd_rd_en),
    .dma_cmd_rd_addr(dma_cmd_rd_addr),
    .dma_cmd_rd_last(dma_cmd_rd_last),
    .dma_cmd_rd_ready(dma_cmd_rd_ready),
    .dma_rd_resp_valid(dma_rd_resp_valid),
    .dma_rd_resp_data(dma_rd_resp_data),
    .dma_rd_resp_ready(dma_rd_resp_ready),

    .in_desc(in_desc),
    .in_desc_valid(in_desc_valid),
    .in_desc_taken(in_desc_taken),
    .out_desc(out_desc),
    .out_desc_2nd(out_desc_2nd),
    .out_desc_valid(out_desc_valid),
    .out_desc_ready(out_desc_ready),

    .bc_msg_out(bc_msg_out),
    .bc_msg_out_valid(bc_msg_out_valid),
    .bc_msg_out_ready(bc_msg_out_ready),
    .bc_msg_in(bc_msg_in),
    .bc_msg_in_valid(bc_msg_in_valid),

    .wrapper_status_data(wrapper_status_data),
    .wrapper_status_addr(wrapper_status_addr),
    .core_status_data(core_status_data),
    .core_status_addr(core_status_addr)
);

endmodule


