// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  
  /***** Wire declarations *****/
  wire [31:0] pc_add4, pc_addr, pc_result;
  wire [31:0] Instr;
  wire [31:0] Imm;
  wire [31:0] write_data;
  wire [31:0] rs2_out, mem_data, read_data;

  wire [31:0] alu_in_1, alu_in_2, alu_result;
  wire [3:0] alu_op;
  wire alu_bcond;

  wire JALR, JAL, Branch, MemRead, MemtoReg, MemWrite, ALUSrc, RegWrite, PCtoReg;
  wire PCSrc1, PCSrc1_tmp;
  wire [31:0]regist_17;
  assign PCSrc1_tmp = Branch & alu_bcond;
  assign PCSrc1 = PCSrc1_tmp | JAL;
  
  /***** Register declarations *****/
  reg [31:0] next_pc, current_pc;


  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),          // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),              // input
    .next_pc(next_pc),      // input
    .current_pc(current_pc) // output
  );
  
  add_alu add4_PC(
    .alu_in_1(current_pc),  // input
    .alu_in_2(4),           // input
    .alu_result(pc_add4)    // output
  );

  add_alu addr_PC(
    .alu_in_1(current_pc),  // input
    .alu_in_2(Imm),         // input
    .alu_result(pc_addr)    // output
  );

  mux21 PCS1(
    .S(PCSrc1),   // input
    .D0(pc_add4), // input
    .D1(pc_addr), // input
    .Y(pc_result) // output
  );

  mux21 PCS2(
    .S(JALR),         // input
    .D0(pc_result),   // input
    .D1(alu_result),  // input
    .Y(next_pc)       // output
  );

  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),      // input
    .clk(clk),          // input
    .addr(current_pc),  // input
    .dout(Instr)        // output
  );


  mux21 Write_Data(
    .S(PCtoReg),    // input
    .D0(read_data), // input 
    .D1(pc_add4),   // input
    .Y(write_data)  // output
  );


  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),           // input
    .clk (clk),               // input
    .rs1 (Instr[19:15]),      // input
    .rs2 (Instr[24:20]),      // input
    .rd  (Instr[11: 7]),      // input
    .rd_din (write_data),     // input
    .write_enable (RegWrite), // input
    .rs1_dout (alu_in_1),     // output
    .rs2_dout (rs2_out),      // output
    .regist_17(regist_17),
    .print_reg (print_reg)    //DO NOT TOUCH THIS
  );

  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(Instr[6:0]),  // input
    .regist_17(regist_17), //17번 레지스터의 값을 입력으로 받음. ECALL
    .is_jal(JAL),            // output
    .is_jalr(JALR),            // output
    .branch(Branch),          // output
    .mem_read(MemRead),       // output
    .mem_to_reg(MemtoReg),    // output
    .mem_write(MemWrite),     // output
    .alu_src(ALUSrc),         // output
    .write_enable(RegWrite),  // output
    .pc_to_reg(PCtoReg),      // output
    .is_ecall(is_halted)          // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(Instr), // input
    .imm_gen_out(Imm)     // output
  );

  mux21 ALUS(
    .S(ALUSrc),   // input
    .D0(rs2_out), // input
    .D1(Imm),     // input
    .Y(alu_in_2)  // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .part_of_inst({Instr[30], Instr[14:12], Instr[6:0]}), // input
    .alu_op(alu_op)       // output
  );


  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),          // input
    .alu_in_1(alu_in_1),      // input  
    .alu_in_2(alu_in_2),      // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );


  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),         // input
    .clk (clk),             // input
    .addr (alu_result),     // input
    .din (rs2_out),         // input
    .mem_read (MemRead),    // input
    .mem_write (MemWrite),  // input
    .dout (mem_data)        // output
  );

  mux21 MemReg(
    .S(MemtoReg),    // input
    .D0(alu_result), // input
    .D1(mem_data),   // input
    .Y(read_data)    // output
  );

endmodule
