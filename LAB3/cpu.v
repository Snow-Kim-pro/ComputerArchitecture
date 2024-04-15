// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire IorD, addr, mem_read, mem_write, mem_to_reg;
  wire IR_write, pc_write, pc_write_not_cond;
  wire pc_source, write_enable, is_ecall;
  //wire alu_cond_op(추후 추가, 몇비트인지를 몰라서)
  wire alu_src_A;
  wire [1:0] alu_src_B;
  wire rd_din;
  wire [31:0]dout;
  wire imm_gen_out;
  wire [3:0] alu_op;
  wire [31:0] alu_in_1, alu_in_2, alu_result;
  wire alu_bcond;
  wire [31:0]alu_in_2_01;
  wire [31:0]alu_in_2_23;
  wire is_pcUp; //pc 업데이트 할지 말지
  wire with_pc_write;

  reg [31:0] next_pc, current_pc;

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
    .is_update(is_pcUp)
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(IR[19:15]),          // input
    .rs2(IR[24:20]),          // input
    .rd(IR[11: 7]),           // input
    .rd_din(rd_din),       // input
    .write_enable(write_enable),    // input
    .rs1_dout(rs1_dout),     // output
    .rs2_dout(rs2_dout),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(addr),         // input
    .din(din),          // input
    .mem_read(mem_read),     // input
    .mem_write(mem_write),    // input
    .dout(dout)          // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .part_of_inst(IR[6:0]),  // input
    .pc_write_not_cond(pc_write_not_cond),        // output
    .pc_write(pc_write),       // output
    .IorD(Iord),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .IR_write(IR_write),     // output
    .alu_src_A(alu_src_A),       // output
    .alu_src_B(alu_src_B),       // output
    .alu_op(alu_cont_op),       // output
    .write_enable(write_enable),     // output
    .pc_source(pc_source),     // output
    .is_ecall(is_ecal)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IR),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst({IR[30], IR[14:12]}),  // input
    .alu_cont_op(alu_cont_op),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

  //assign Y = S ? D1 : D0 ; 
  assign addr = IorD ? ALUOut : current_pc ;

  assign rd_din = mem_to_reg ? MDR : ALUOut;

  assign alu_in_1 = alu_src_A ? A : current_pc;

  assign alu_in_2_01 = alu_src_B[0] ? 4 : B;
  assign alu_in_2_23 = alu_src_B[0] ? 0 : imm_gen_out;
  assign alu_in_2 = alu_src_B[1] alu_in_2_23 ? alu_in_2_01;

  assign next_pc = pc_source ? ALUOut : alu_result;

  assign with_pc_write = pc_write_not_cond & (~alu_bcond);

  assign is_pcUp = with_pc_write | pc_write




  always @(*) begin

  end
  //스테이트 업데이트 필요 (clk이 지나갈때마다 state 1->2, state2->3)
  //스테이트 고려 필요 (e.g., state 1일때, IR,MDR업데이트 state 2일때, A,B 업데이트 등등)
  always @(posedge clk) begin 
    if(IR_write) IR <= dout;
    else MDR <= dout;

  end

  always @(posedge clk) begin
    A <= rs1_dout;
  end

  always @(posedge clk) begin
    B <= rs2_dout;
  end

  always @(posedge clk) begin
    ALUOut <= alu_result;
  end



endmodule
