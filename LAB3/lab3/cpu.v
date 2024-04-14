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
  wire [31:0] next_pc, curr_pc;
  wire [31:0] address, mem_data;

  wire [31:0] instr, write_data, rs1_dout, rs2_dout;

  wire [31:0] Imm, alu_src1, alu_src2, alu_result;
  wire [2:0] alu_control

  wire PCwriteCond, PCWrite, IorD, MemRead, MemWrite, MemtoReg, IRWrite;
  wire PCSource, ALUSrcA, RegWrite, bcond;
  wire [1:0] ALUSrcB;

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
    .reset(reset),     // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .clkPC(clkPC),     // input
    .next_pc(next_pc), // input
    .curr_pc(curr_pc)  // output
  );

  mux21 Address(
    .S (IorD),    // input
    .D0(curr_pc), // input 
    .D1(ALUOut),  // input
    .Y (address)  // output
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),         // input
    .clk(clk),             // input
    .addr(address),        // input
    .din(B),               // input
    .mem_read(MemRead),    // input
    .mem_write(MemWrite),  // input
    .dout(mem_data)        // output
  );

  InstRegister inst_register(
    .reset(reset),      // input
    .clk(clk),          // input
    .irwrite(IRWrite),  // input
    .memdata(mem_data), // input
    .instr(instr)       // output
    .IR(IR)             // output
  );

  MemDataRegister mem_data_register(
    .reset(reset),      // input
    .clk(clk),          // input
    .memdata(mem_data), // input
    .MDR(MDR)           // output
  );

  mux21 Write_Data(
    .S (MemtoReg),  // input
    .D0(ALUOut),    // input 
    .D1(MDR),       // input
    .Y (write_data) // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),           // input
    .clk(clk),               // input
    .rs1(instr[19:15]),      // input
    .rs2(instr[24:20]),      // input
    .rd (instr[11: 7]),      // input
    .rd_din(write_data),     // input
    .write_enable(RegWrite), // input
    .rs1_dout(rs1_dout),     // output
    .rs2_dout(rs2_dout),     // output
    .print_reg(print_reg)    // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  RegisterBuffer reg_buffer(
    .reset(reset),       // input
    .clk(clk),           // input
    .rs1_dout(rs1_dout), // input
    .rs2_dout(rs2_dout), // input
    .A(A),               // output
    .B(B)                // output
  )

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(instr), // input  : 32bit
    .imm_gen_out(Imm)     // output : 32bit
  );

  mux21 ALUSRC1(
    .S (ALUSrcA),   // input
    .D0(curr_pc),   // input 
    .D1(A),         // input
    .Y (alu_src1)   // output
  );

  mux41 ALUSRC2(
    .S (ALUSrcB), // input
    .D0(B),       // input 
    .D1(32'b4),   // input
    .D2(Imm),     // input 
    .D3(32'b0),   // input
    .Y (alu_src2) // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .reset(reset),             // input
    .clk(clk),                 // input
    .part_of_inst(instr[6:0]), // input
    .pcwritecond(PCwriteCond), // output
    .pcwrite(PCWrite),         // output
    .iord(IorD),               // output
    .memread(MemRead),         // output
    .memwrite(MemWrite),       // output
    .memtoreg(MemtoReg),       // output
    .irwrite(IRWrite),         // output
    .pcsource(PCSource),       // output
    .alusrcB(ALUSrcB),         // output : 2bit
    .alusrcA(ALUSrcA),         // output
    .regwrite(RegWrite),       // output
    .is_ecall(is_halted)   // output (ecall inst)
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst({instr[30], instr[14:12], instr[6:0]}), // input : 10bit
    .alu_control(alu_control) // output : 3bit
  );

  // ---------- ALU ----------
  ALU alu(
    .in_1(alu_src1),       // input  
    .in_2(alu_src2),       // input
    .control(alu_control), // input
    .bcond(bcond)          // output
    .result(alu_result),   // output
  );

  ALUOut alu_out(
    .reset(reset),           // input
    .clk(clk),               // input
    .alu_result(alu_result), // input
    .ALUOut(ALUOut)          // output
  );

  mux21 PCSRC(
    .S (PCSource),   // input
    .D0(alu_result), // input 
    .D1(ALUOut),     // input
    .Y (next_pc)     // output
  );

endmodule
