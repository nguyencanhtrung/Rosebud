module test_mul_hash (
  input  clk,
  input  [63:0] a,
  output [63:0] p
);

parameter MSK_BYTES = 0;
localparam ANDMSK   = {{(8-MSK_BYTES)*8{1'b1}},{MSK_BYTES*8{1'b0}}};

wire [23:0] a0b0;
wire [23:0] a0b1;
wire [23:0] a0b2;
wire [23:0] a0b3;
wire [23:0] a1b0;
wire [23:0] a1b1;
wire [23:0] a1b2;
wire [23:0] a1b3;
wire [23:0] a2b0;
wire [23:0] a2b1;
wire [23:0] a2b2;
wire [23:0] a2b3;
wire [23:0] a3b0;
wire [23:0] a3b1;
wire [23:0] a3b2;
wire [23:0] a3b3;
wire [23:0] a4b0;
wire [23:0] a4b1;
wire [23:0] a4b2;
wire [23:0] a4b3;
wire [23:0] a5b0;
wire [23:0] a5b1;
wire [23:0] a5b2;
wire [23:0] a5b3;
wire [23:0] a6b0;
wire [23:0] a6b1;
wire [23:0] a6b2;
wire [23:0] a6b3;
wire [23:0] a7b0;
wire [23:0] a7b1;
wire [23:0] a7b2;
wire [23:0] a7b3;

mul_hash dut_mul_0 (
  .clk(clk),
  .a(a[0*8+:8]), 
  .ab0(a0b0),                 
  .ab1(a0b1), 
  .ab2(a0b2),                 
  .ab3(a0b3)
);

mul_hash dut_mul_1 (
  .clk(clk),
  .a(a[1*8+:8]), 
  .ab0(a1b0),                 
  .ab1(a1b1), 
  .ab2(a1b2),                 
  .ab3(a1b3)
);

mul_hash dut_mul_2 (
  .clk(clk),
  .a(a[2*8+:8]), 
  .ab0(a2b0),                 
  .ab1(a2b1), 
  .ab2(a2b2),                 
  .ab3(a2b3)
);

mul_hash dut_mul_3 (
  .clk(clk),
  .a(a[3*8+:8]), 
  .ab0(a3b0),                 
  .ab1(a3b1), 
  .ab2(a3b2),                 
  .ab3(a3b3)
);

mul_hash dut_mul_4 (
  .clk(clk),
  .a(a[4*8+:8]), 
  .ab0(a4b0),                 
  .ab1(a4b1), 
  .ab2(a4b2),                 
  .ab3(a4b3)
);

mul_hash dut_mul_5 (
  .clk(clk),
  .a(a[5*8+:8]), 
  .ab0(a5b0),                 
  .ab1(a5b1), 
  .ab2(a5b2),                 
  .ab3(a5b3)
);

mul_hash dut_mul_6 (
  .clk(clk),
  .a(a[6*8+:8]), 
  .ab0(a6b0),                 
  .ab1(a6b1), 
  .ab2(a6b2),                 
  .ab3(a6b3)
);

mul_hash dut_mul_7 (
  .clk(clk),
  .a(a[7*8+:8]), 
  .ab0(a7b0),                 
  .ab1(a7b1), 
  .ab2(a7b2),                 
  .ab3(a7b3)
);

acc_hash # (
	.ANDMSK(ANDMSK),
	.NBITS(64)
) dut_acc_hash (
  .clk(clk), .p(p),

  .a0b0(a0b0), .a0b1(a0b1), .a0b2(a0b2), .a0b3(a0b3),
  .a1b0(a1b0), .a1b1(a1b1), .a1b2(a1b2), .a1b3(a1b3),
  .a2b0(a2b0), .a2b1(a2b1), .a2b2(a2b2),
  .a3b0(a3b0), .a3b1(a3b1), .a3b2(a3b2),
  .a4b0(a4b0), .a4b1(a4b1),
  .a5b0(a5b0), .a5b1(a5b1),
  .a6b0(a6b0),
  .a7b0(a7b0)
);
  
initial begin
  $dumpfile ("sim_build/mul_hash_waveform.fst");
  $dumpvars (0,test_mul_hash);
  #1;
end

endmodule
