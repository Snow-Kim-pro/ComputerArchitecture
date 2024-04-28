// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted, // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [31:0] curr_pc, next_pc, inst;
  wire pcwrite, if_id_write, control_mux;
  
  wire mem_read, mem_to_reg, mem_write, alu_src, write_enable, pc_to_reg, alu_op, is_ecall, bcond;
  wire [31:0] rs1_dout, rs2_dout, imm_gen_out;
  wire [8:0] control_output;

  wire [31:0] alu_in_1, alu_in_2, alu_result;
  wire [3:0] alu_control;
  wire [1:0] foward_A, foward_B;

  wire [31:0] mem_dout, wb_dout;

  /***** Register declarations *****/

  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  
  /***** IF/ID pipeline registers *****/
  reg [31:0]IF_ID_inst;     // will be used in ID stage  

  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg [1:0] ID_EX_alu_op;   // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_is_ecall;
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [3:0] ID_EX_ALU_ctrl_unit_input;  
  reg [4:0] ID_EX_rs1;                    
  reg [4:0] ID_EX_rs2;                   
  reg [4:0] ID_EX_rd;                    
  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg EX_MEM_is_branch;     // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] EX_MEM_alu_out;
  reg [31:0] EX_MEM_dmem_data;
  reg [4:0] EX_MEM_rd;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_0;
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [4:0] MEM_WB_rd;

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),           // input
    .pcwrite(pcwrite),   // input
    .next_pc(next_pc),   // input
    .curr_pc(curr_pc)    // output
  );

  add_alu add4_PC(
    .alu_in_1(curr_pc),  // input
    .alu_in_2(4),        // input
    .alu_result(next_pc) // output
  );
 
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),  // input
    .clk(clk),      // input
    .addr(curr_pc), // input
    .dout(inst)     // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin
    if (reset)
      IF_ID_inst <= 0;   
    else 
      if(if_id_write == 1)
        IF_ID_inst <= inst;   
  end

  HazardDetectoinUnit hazard_detectoin_unit(
    .opcode(IF_ID_inst[6:0]),       // input : use_rs1, use_rs2
    .rs1(IF_ID_inst[19:15]),        // input : rs1_ID
    .rs2(IF_ID_inst[24:20]),        // input : rs2_ID
    .id_ex_rd(ID_EX_rd),            // input : rd_EX
    .id_ex_memread(ID_EX_mem_read), // input 
    .pcwrite(pcwrite),              //output
    .if_id_write(if_id_write),      //output
    .control_mux(control_mux)       //output : MUX input 용도(필요시 0 연결)
  );

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset (reset),           // input
    .clk (clk),               // input
    .rs1 (IF_ID_inst[19:15]), // input
    .rs2 (IF_ID_inst[24:20]), // input
    .rd  (IF_ID_inst[11: 7]), // input
    .rd_din (wb_dout),        // input
    .write_enable (MEM_WB_reg_write), // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .print_reg(print_reg)     // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit (
    .opcode(IF_ID_inst[6:0]),    // input
    .mem_read(mem_read),         // output
    .mem_to_reg(mem_to_reg),     // output
    .mem_write(mem_write),       // output
    .alu_src(alu_src),           // output
    .write_enable(write_enable), // output
    .alu_op(alu_op),             // output
    .is_ecall(is_ecall)          // output (ecall inst)
  );

  mux21 #(8) control_signal(
    .S(control_mux), 
    .D0({mem_read, mem_to_reg, mem_write, alu_src, write_enable, alu_op, is_ecall}), 
    .D1(8'b0), 
    .Y(control_output)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)   // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      ID_EX_alu_op     <= 0;    
      ID_EX_alu_src    <= 0;   
      ID_EX_mem_write  <= 0; 
      ID_EX_mem_read   <= 0;  
      ID_EX_mem_to_reg <= 0;
      ID_EX_reg_write  <= 0; 
      ID_EX_is_ecall   <= 0;
      ID_EX_rs1_data   <= 0;
      ID_EX_rs2_data   <= 0;
      ID_EX_imm        <= 0;
      ID_EX_ALU_ctrl_unit_input <= 0;
      ID_EX_rs1        <= 0;
      ID_EX_rs2        <= 0;
      ID_EX_rd         <= 0;
    end else begin
      {ID_EX_mem_read, ID_EX_mem_to_reg, ID_EX_mem_write, ID_EX_alu_src, ID_EX_reg_write, ID_EX_alu_op, ID_EX_is_ecall} = control_output;
      ID_EX_rs1_data   <= rs1_dout;
      ID_EX_rs2_data   <= rs2_dout;
      ID_EX_imm        <= imm_gen_out;
      ID_EX_ALU_ctrl_unit_input <= {IF_ID_inst[30], IF_ID_inst[14:12]};
      ID_EX_rs1        <= IF_ID_inst[19:15];
      ID_EX_rs2        <= IF_ID_inst[24:20];      
      ID_EX_rd         <= IF_ID_inst[11: 7];
    end
  end

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .part_of_inst(ID_EX_ALU_ctrl_unit_input), // input
    .alu_op(ID_EX_alu_op),                    // input
    .alu_control(alu_control)                 // output
  );

  mux41 ALUSRC1(
    .S (foward_A),       // input
    .D0(ID_EX_rs1_data), // input 
    .D1(32'b0),          // input
    .D2(EX_MEM_alu_out), // input 
    .D3(wb_dout),        // input
    .Y (alu_in_1)        // output
  );

  mux41 ALUSRC2(
    .S (foward_B),       // input
    .D0(ID_EX_rs2_data), // input 
    .D1(ID_EX_imm),      // input
    .D2(EX_MEM_alu_out), // input 
    .D3(wb_dout),        // input
    .Y (alu_in_2)        // output
  );

  // ---------- ALU ----------
  ALU alu (
    .alu_control(alu_control), // input
    .alu_in_1(alu_in_1),       // input  
    .alu_in_2(alu_in_2),       // input
    .alu_result(alu_result),   // output
    .alu_zero(bcond)           // output
  );

  ForwardingUnit forwarding_unit(
    .ex_mem_rd(EX_MEM_rd),        // input
    .mem_wb_rd(MEM_WB_rd),        // input
    .rs1(ID_EX_rs1),              // input
    .rs2(ID_EX_rs2),              // input
    .ex_mem_RW(EX_MEM_reg_write), // input
    .mem_wb_RW(MEM_WB_reg_write), // input    
    .alusrc(ID_EX_alu_src),       // input
    .mux_forward_A(foward_A),     //output : 2bit(default : 2'b00)
    .mux_forward_B(foward_B)      //output : 2bit(default : 2'b00)
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      EX_MEM_mem_write  <= 0; 
      EX_MEM_mem_read   <= 0;  
      EX_MEM_mem_to_reg <= 0;
      EX_MEM_reg_write  <= 0; 
      EX_MEM_alu_out    <= 0;
      EX_MEM_dmem_data  <= 0;
      EX_MEM_rd         <= 0;
    end else begin
      EX_MEM_mem_write  <= ID_EX_mem_write; 
      EX_MEM_mem_read   <= ID_EX_mem_read;  
      EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;
      EX_MEM_reg_write  <= ID_EX_reg_write; 
      EX_MEM_alu_out    <= alu_result;
      EX_MEM_dmem_data  <= ID_EX_rs2_data;
      EX_MEM_rd         <= ID_EX_rd;
    end
  end

  // ---------- Data Memory ----------
  DataMemory dmem(
    .reset (reset),                // input
    .clk (clk),                    // input
    .addr (EX_MEM_alu_out),        //  input
    .din (EX_MEM_dmem_data),       // input
    .mem_read (EX_MEM_mem_read),   // input
    .mem_write (EX_MEM_mem_write), // input
    .dout (mem_dout)               // output
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_mem_to_reg <= 0;    
      MEM_WB_reg_write <= 0;     
      MEM_WB_mem_to_reg_src_0 <= 0;
      MEM_WB_mem_to_reg_src_1 <= 0;
      MEM_WB_rd <= 0;
    end else begin
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;    
      MEM_WB_reg_write <= EX_MEM_reg_write;     
      MEM_WB_mem_to_reg_src_0 <= EX_MEM_alu_out;
      MEM_WB_mem_to_reg_src_1 <= mem_dout;
      MEM_WB_rd <= EX_MEM_rd;
    end
  end

  mux21 WBSRC(
    .S (MEM_WB_mem_to_reg),       // input
    .D0(MEM_WB_mem_to_reg_src_0), // input 
    .D1(MEM_WB_mem_to_reg_src_1), // input
    .Y (wb_dout)                  // output
  );

  
endmodule
