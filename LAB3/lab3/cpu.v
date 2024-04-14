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
  wire clkPC;
  wire PCwriteCond, PCWrite, IorD, MemRead, MemWrite, MemtoReg, IRWrite;
  wire PCSource, ALUOp, ALUSrcA, RegWrite, bcond;
  wire [1:0] ALUSrcB;

  wire [31:0] next_pc, mux_Address_0, mux_Address_1;
  wire [31:0] memory_address, Mem_Data;
  wire [6:0] op;
  wire [4:0] rs1, rs2, rd;
  wire [31:0] reg_Write_Data;
  wire [31:0] IMM, ALU_src1, ALU_src2, alu_result;
  wire [3:0] alu_op;


  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  // ---------- Update program counter ----------
    
  // PC must be updated on the rising edge (positive edge) of the clock.
  assign clkPC = (bcond & PCwriteCond) | PCWrite;
  PC pc(
    .reset(reset),   // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),       // input
    .pcWrite(clkPC), // input
    .next_pc(next_pc),      // input
    .current_pc(mux_Address_0)  // output
  );

  mux21 Address(
    .S(IorD),           // input
    .D0(mux_Address_0), // input 
    .D1(mux_Address_1), // input
    .Y(memory_address)  // output
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),         // input
    .clk(clk),             // input
    .addr(memory_address), // input
    .din(B),               // input
    .mem_read(MemRead),    // input
    .mem_write(MemWrite),  // input
    .dout(Mem_Data)        // output
  );

  InstRegister inst_register(
    .reset(reset),      // input
    .clk(clk),          // input
    .irwrite(IRWrite),  // input
    .memdata(Mem_Data), // input
    .op_out(opcode),    // output
    .rs1_out(rs1),      // output
    .rs2_out(rs2),      // output
    .rd_out(rd),        // output
    .IR(IR)             // output
  );

  MemDataRegister mem_data_register(
    .reset(reset),      // input
    .clk(clk),          // input
    .memdata(Mem_Data), // input
    .MDR(MDR)           // output
  );

  mux21 Write_Data(
    .S(MemtoReg), // input
    .D0(ALUOut), // input 
    .D1(MDR),   // input
    .Y(reg_Write_Data)  // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),           // input
    .clk(clk),               // input
    .rs1(rs1),               // input
    .rs2(rs2),               // input
    .rd(rd),                 // input
    .rd_din(reg_Write_Data), // input
    .write_enable(RegWrite), // input
    .rs1_dout(A),            // output
    .rs2_dout(B),            // output
    .print_reg(print_reg)    // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(),  // input
    .imm_gen_out(IMM) // output
  );

  mux21 ALUSRC1(
    .S(ALUSrcA),        // input
    .D0(mux_Address_0), // input 
    .D1(A),             // input
    .Y(ALU_src1)        // output
  );

  mux41 ALUSRC2(
    .S(ALUSrcB),  // input
    .D0(B),       // input 
    .D1(32'b4),   // input
    .D2(IMM),     // input 
    .D3(32'b0),   // input
    .Y(ALU_src2)  // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .reset(reset),           // input
    .clk(clk),               // input
    .part_of_inst(opcode),   // input
    .is_pc_write_cond(PCwriteCond), // output
    .is_pc_write(PCWrite),          // output
    .is_iord(IorD),                 // output
    .is_mem_read(MemRead),          // output
    .is_mem_write(MemWrite),        // output
    .is_mem_to_reg(MemtoReg),       // output
    .is_ir_write(IRWrite),          // output
    .is_pc_source(PCSource),        // output
    .is_alu_op(ALUOp),              // output
    .is_alu_srcB(ALUSrcA),          // output
    .is_alu_srcA(ALUSrcA),          // output
    .is_reg_write(RegWrite),        // output
    .is_ecall(is_halted)   // output (ecall inst)
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst(),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(alu_op),         // input
    .alu_in_1(ALU_src1),     // input  
    .alu_in_2(ALU_src2),     // input
    .alu_result(alu_result), // output
    .alu_bcond(bcond)        // output
  );

  ALUOut alu_out(
    .reset(reset),           // input
    .clk(clk),               // input
    .alu_result(alu_result), // input
    .ALUOut(ALUOut)          // output
  );

  mux21 PCSRC(
    .S(PCSource),    // input
    .D0(alu_result), // input 
    .D1(ALUOut),   // input
    .Y(next_pc)  // output
  );

endmodule
