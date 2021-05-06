module first_filter(clk,rst,
	in_data,in_valid,in_sop,in_eop,in_empty,
    out_data,out_valid
);

input clk;
input rst;
input [255:0] in_data;
input in_valid;
input in_sop;
input in_eop;
input [4:0] in_empty;
output wire [255:0] out_data;
output reg out_valid;

wire [12:0] addr0;
wire [63:0] q0;
wire [127:0] temp_st0;
wire [12:0] addr1;
wire [63:0] q1;
wire [127:0] temp_st1;
wire [12:0] addr2;
wire [63:0] q2;
wire [127:0] temp_st2;
wire [12:0] addr3;
wire [63:0] q3;
wire [127:0] temp_st3;
wire [12:0] addr4;
wire [63:0] q4;
wire [127:0] temp_st4;
wire [12:0] addr5;
wire [63:0] q5;
wire [127:0] temp_st5;
wire [12:0] addr6;
wire [63:0] q6;
wire [127:0] temp_st6;
wire [12:0] addr7;
wire [63:0] q7;
wire [127:0] temp_st7;

reg [255:0] in_reg;
reg in_valid_reg;
wire [127:0] temp_low;
wire [127:0] temp_high;
wire [127:0] temp_high1;
wire [127:0] temp_high2;
reg [63:0] state;
wire [63:0] next_state;
wire [127:0] state_low;
wire [127:0] state_high;
wire [127:0] state_high1;
wire [127:0] state_high2;
wire new_pkt;
reg new_pkt_reg;
reg state_valid;
reg last;
reg last_r;
reg [255:0] mask;
reg [8:0] shift;

assign addr0 = in_reg[0*8+12:0*8];
assign addr1 = in_reg[1*8+12:1*8];
assign addr2 = in_reg[2*8+12:2*8];
assign addr3 = in_reg[3*8+12:3*8];
assign addr4 = in_reg[4*8+12:4*8];
assign addr5 = in_reg[5*8+12:5*8];
assign addr6 = in_reg[6*8+12:6*8];
assign addr7 = last ? {5'b0,in_reg[(7+1)*8-1:7*8]} : {in_data[4:0],in_reg[(7+1)*8-1:7*8]};

assign temp_st0 = q0 << 0*8;
assign temp_st1 = q1 << 1*8;
assign temp_st2 = q2 << 2*8;
assign temp_st3 = q3 << 3*8;
assign temp_st4 = q4 << 4*8;
assign temp_st5 = q5 << 5*8;
assign temp_st6 = q6 << 6*8;
assign temp_st7 = q7 << 7*8;
assign temp_st8 = q8 << 0*8;
assign temp_st9 = q9 << 1*8;
assign temp_st10 = q10 << 2*8;
assign temp_st11 = q11 << 3*8;
assign temp_st12 = q12 << 4*8;
assign temp_st13 = q13 << 5*8;
assign temp_st14 = q14 << 6*8;
assign temp_st15 = q15 << 7*8;
assign temp_st16 = q16 << 0*8;
assign temp_st17 = q17 << 1*8;
assign temp_st18 = q18 << 2*8;
assign temp_st19 = q19 << 3*8;
assign temp_st20 = q20 << 4*8;
assign temp_st21 = q21 << 5*8;
assign temp_st22 = q22 << 6*8;
assign temp_st23 = q23 << 7*8;
assign temp_st24 = q24 << 0*8;
assign temp_st25 = q25 << 1*8;
assign temp_st26 = q26 << 2*8;
assign temp_st27 = q27 << 3*8;
assign temp_st28 = q28 << 4*8;
assign temp_st29 = q29 << 5*8;
assign temp_st30 = q30 << 6*8;
assign temp_st31 = q31 << 7*8;



assign temp_low = temp_st0|temp_st1|temp_st2|temp_st3|temp_st4|temp_st5|temp_st6|temp_st7;     
assign temp_high = temp_st8|temp_st9|temp_st10|temp_st11|temp_st12|temp_st13|temp_st14|temp_st15;     
assign temp_high1 = temp_st16|temp_st17|temp_st18|temp_st19|temp_st20|temp_st21|temp_st22|temp_st23;     
assign temp_high2 = temp_st24|temp_st25|temp_st26|temp_st27|temp_st28|temp_st29|temp_st30|temp_st31;     
assign state_low = temp_low | state;
assign state_high = temp_high | temp_low[127:64];
assign state_high1 = temp_high1 | temp_high[127:64];
assign state_high2 = temp_high2 | temp_high1[127:64];

//assign out_data = {state_high[63:0],state_low[63:0]};
assign out_data = {state_high2[63:0],state_high1[63:0],state_high[63:0],state_low[63:0]} | mask;

assign next_state = state_high2[127:64];


always @ (posedge clk) begin
    //if(rst)begin
    //    last <= 0;
    //    shift <= 0;
    //end else begin
    shift <= (32-in_empty)*8;
    last <= in_valid & in_eop;

    //end

    if(last)begin
        mask <= {256{1'b1}} << shift;
    end else begin
        mask <= 0;
    end
end

always @ (posedge clk) begin
	//if(rst) begin
	//	in_valid_reg <= 0;
    //    out_valid <= 0;
    //    //state <= 64'h0003070f1f3f7fff;
    //    //state <= {64{1'b1}};
    //    new_pkt_reg <= 0;
    //    state_valid <= 0;
    //    //in_reg <= 0;
    //    last_r <= 0;
	//end else begin
	//end
    last_r <= last;
    in_valid_reg <= in_valid;
    out_valid <= in_valid_reg;

    //state update
    if(in_valid & in_sop)begin
        state <= 64'h0003070f1f3f7fff;
        //The boudary bytes should not generate matches
        //by themselves
        //state <= {64{1'b1}};
    end else begin
        if(out_valid)begin
            state <= next_state;
        end
    end

    in_reg <= in_data;
end

rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_0 (
	.q_a       (q0),    
	.q_b       (q1),    
	.address_a (addr0),
	.address_b (addr1),
	.clock     (clk)   
);
rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_1 (
	.q_a       (q2),    
	.q_b       (q3),    
	.address_a (addr2),
	.address_b (addr3),
	.clock     (clk)   
);
rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_2 (
	.q_a       (q4),    
	.q_b       (q5),    
	.address_a (addr4),
	.address_b (addr5),
	.clock     (clk)   
);
rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_3 (
	.q_a       (q6),    
	.q_b       (q7),    
	.address_a (addr6),
	.address_b (addr7),
	.clock     (clk)   
);
rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_4 (
	.q_a       (q8),    
	.q_b       (q9),    
	.address_a (addr8),
	.address_b (addr9),
	.clock     (clk)   
);
rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_5 (
	.q_a       (q10),    
	.q_b       (q11),    
	.address_a (addr10),
	.address_b (addr11),
	.clock     (clk)   
);
rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_6 (
	.q_a       (q12),    
	.q_b       (q13),    
	.address_a (addr12),
	.address_b (addr13),
	.clock     (clk)   
);
rom_2port_noreg #(
	.DWIDTH(64),
	.AWIDTH(13),
	.MEM_SIZE(8192),
	.INIT_FILE("./src/memory_init/match_table.mif")
)
match_table_7 (
	.q_a       (q14),    
	.q_b       (q15),    
	.address_a (addr14),
	.address_b (addr15),
	.clock     (clk)   
);

endmodule