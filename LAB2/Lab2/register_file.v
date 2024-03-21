module register_file(input	reset,
                     input clk,
                     input [4:0] rs1,          // source register 1
                     input [4:0] rs2,          // source register 2
                     input [4:0] rd,           // destination register
                     input [31:0] rd_din,      // input data for rd
                     input write_enable,       // RegWrite signal

                     output reg [31:0] rs1_dout,   // output of rs 1
                     output reg [31:0] rs2_dout,   // output of rs 2
                     output [31:0] print_reg [0:31]);
  integer i;
  // Register file
  reg [31:0] rf[0:31];
  // Do not touch or use print_reg
  assign print_reg = rf;

  // TODO
  // Asynchronously read register file
  always @(*) begin

    /* rs1의 값에 따라 rf에서 값을 불러와 rs1_dout에 저장. */
    if(rs1!=0) 
      rs1_dout = rf[rs1];
    else       
      rs1_dout = 0;
      
    /* rs2의 값에 따라 rf에서 값을 불러와 rs2_dout에 저장. */
    if(rs2!=0) 
      rs2_dout = rf[rs2];
    else       
      rs2_dout = 0;

  end

  // Synchronously write data to the register file
  always @(posedge clk) begin
      if (write_enable) rf[rd] <= rd_din;
  end

  // Initialize register file (do not touch)
  always @(posedge clk) begin
    // Reset register file
    if (reset) begin
      for (i = 0; i < 32; i = i + 1)
        // DO NOT TOUCH COMMENT BELOW
        /* verilator lint_off BLKSEQ */
        rf[i] = 32'b0;
        /* verilator lint_on BLKSEQ */
        // DO NOT TOUCH COMMENT ABOVE

      // DO NOT TOUCH COMMENT BELOW
      /* verilator lint_off BLKSEQ */
      rf[2] = 32'h2ffc; // stack pointer
      /* verilator lint_on BLKSEQ */
      // DO NOT TOUCH COMMENT ABOVE
    end
  end

endmodule
