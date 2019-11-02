module slot_keeper # (
  parameter SLOT_COUNT = 8,
  parameter SLOT_WIDTH = $clog2(SLOT_COUNT+1)
)(
  input                   clk,
  input                   rst,

  input [SLOT_WIDTH-1:0]  init_slots,
  input                   init_valid,

  input  [SLOT_WIDTH-1:0] slot_in,
  input                		slot_in_valid,
 
  output [SLOT_WIDTH-1:0] slot_out,
  output               		slot_out_valid,
  input                		slot_out_pop,

  output [SLOT_WIDTH-1:0] slot_count,
  // enq_err is asserted 2 cycles later after the wrong slot enq
  output                  enq_err 
);

  wire enque = slot_in_valid && (slot_in!=0);
  wire deque = slot_out_valid && slot_out_pop;

  reg [SLOT_COUNT:1]   occupied;
  reg [SLOT_WIDTH-1:0] selected_slot;
  
  integer i;
  always@(*) begin
    selected_slot = {{(SLOT_WIDTH-1){1'b0}},1'b1};
    for (i=SLOT_COUNT;i>=1;i=i-1)
      if (occupied[i])
        selected_slot = i;
  end
  
  reg [SLOT_COUNT:1] slot_err;
  //counts enq error to know when output is not valid
  reg [SLOT_WIDTH:0] last_valid_count; 

  always @ (posedge clk) begin
    if (enque) begin 
      if (occupied[slot_in]) begin
        slot_err[slot_in] <= 1'b1;
        last_valid_count  <= last_valid_count + {{(SLOT_WIDTH-1){1'b0}},1'b1};
      end
      occupied[slot_in] <= 1'b1;
    end
  
    if (deque)
       occupied[selected_slot] <= 1'b0;

    if (init_valid) begin 
       occupied         <= ({SLOT_COUNT{1'b1}} >> (SLOT_COUNT-init_slots));
       slot_err         <= {SLOT_COUNT{1'b0}};
       last_valid_count <= {{(SLOT_WIDTH-1){1'b0}},1'b1};
    end

    if (rst) begin
       occupied         <= {SLOT_COUNT{1'b0}};
       slot_err         <= {SLOT_COUNT{1'b0}};
       last_valid_count <= {{(SLOT_WIDTH-1){1'b0}},1'b1};
    end
  end

  reg [SLOT_WIDTH:0] slot_count_r;
  reg                valid_r;  
  always @ (posedge clk)
  	if (rst) begin
      slot_count_r <= {SLOT_WIDTH{1'b0}};
      valid_r      <= 1'b0;
    end else begin
      if (init_valid) begin
        slot_count_r <= init_slots;
        valid_r      <= (init_slots!=0);
      end if (enque && !deque) begin
        slot_count_r <= slot_count_r + {{(SLOT_WIDTH-1){1'b0}},1'b1};
        valid_r      <= 1'b1;
      end else if (!enque && deque) begin
        slot_count_r <= slot_count_r - {{(SLOT_WIDTH-1){1'b0}},1'b1};
        if (slot_count_r == last_valid_count)
          valid_r <= 1'b0;
      end
    end
  
  reg enq_err_r;
  always @ (posedge clk)
    if (rst)
      enq_err_r <= 1'b0;
    else
      enq_err_r <= |slot_err;

  assign slot_out_valid = valid_r;
  assign slot_out       = selected_slot;
  assign enq_err        = enq_err_r; 
  assign slot_count     = slot_count_r;

endmodule
