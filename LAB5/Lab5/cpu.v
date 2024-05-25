// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                   // positive reset signal
           input clk,                     // clock signal
           output is_halted,              // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
           
  /***** Wire declarations *****/
  wire [31:0] curr_pc, next_pc, pc_add4, pc_addr, pc_btb, pc_src1, pc_src2, inst;
  wire [31:0] target_addr, predicted_target;
  wire [1:0] PCSrc3;
  wire pcwrite, if_id_write, control_mux, valid, taken, hit, predict_reset, prediction;
  
  wire jal, jalr, branch, pc_to_reg, PCSrc1;
  wire mem_read, mem_to_reg, mem_write, alu_src, write_enable, is_ecall, bcond;
  wire [1:0] alu_op;
  wire [31:0] write_data, rs1_dout, rs2_dout, imm_gen_out;
  wire [11:0] control_output;    

  wire [31:0] alu_in_1, alu_in_2, alu_src2_out, alu_result;
  wire [3:0] alu_control;
  wire [1:0] foward_A, foward_B;

  wire [31:0] mem_dout, wb_dout;
  wire is_input_valid, is_ready, is_output_valid, is_hit;
  wire mem_access_stall, active_mem_stage;

  assign PCSrc1 = (ID_EX_branch & bcond) | ID_EX_jal;
  assign valid = ID_EX_branch | ID_EX_jal | ID_EX_jalr;
  assign taken = PCSrc1 | ID_EX_jalr;

  /***** Register declarations *****/

  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  
  /***** IF/ID pipeline registers *****/
  reg [31:0] IF_ID_inst;     // will be used in ID stage  
  reg [31:0] IF_ID_pc; 
  reg [31:0] IF_ID_pc4; 
  reg IF_ID_prediction;

  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg [1:0] ID_EX_alu_op;   // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_jal;  
  reg ID_EX_jalr;  
  reg ID_EX_branch;  
  reg ID_EX_pc_ro_reg;
  reg ID_EX_is_ecall;
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [31:0] ID_EX_pc;
  reg [31:0] ID_EX_pc4;
  reg [3:0] ID_EX_ALU_ctrl_unit_input;  
  reg [4:0] ID_EX_rs1;                    
  reg [4:0] ID_EX_rs2;                   
  reg [4:0] ID_EX_rd;     
  reg ID_EX_prediction;   

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg EX_MEM_is_branch;     // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  reg EX_MEM_is_ecall;
  reg EX_MEM_pc_to_reg;
  // From others
  reg [31:0] EX_MEM_alu_out;
  reg [31:0] EX_MEM_dmem_data;
  reg [31:0] EX_MEM_pc4;
  reg [4:0] EX_MEM_rd;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  reg MEM_WB_is_ecall;
  reg MEM_WB_pc_to_reg;
  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_0;
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [31:0] MEM_WB_pc4;
  reg [4:0] MEM_WB_rd;


  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),           // input
    .pcwrite(pcwrite && (!mem_access_stall) && (!active_mem_stage)),   // input
    .next_pc(next_pc),   // input
    .curr_pc(curr_pc)    // output
  );

  BranchPredictor branchpredictor(
    .clk(clk),               // input
    .reset(reset),           // input
    .pc_addr(curr_pc),       // input
    .valid(valid),           // input
    .taken(taken),           // input
    .ex_addr(ID_EX_pc),      // input
    .target_addr(pc_src2),   // input
    .hit(hit),               // output
    .prediction(prediction), // output
    .predicted_target(predicted_target) // output
  );

  IsCorrect iscorrect(
    .taken(taken),                 // input
    .prediction(ID_EX_prediction), // input
    .cu_pc(pc_src2),               // input, 분기해야할 pc값
    .pre_pc(IF_ID_pc),             // input, predictor가 예측한 pc값
    .pc_mux_flag(PCSrc3),          // output
    .predict_reset(predict_reset)  // output
  );

  add_alu add4_PC(
    .alu_in_1(curr_pc),  // input
    .alu_in_2(4),        // input
    .alu_result(pc_add4) // output
  );

  add_alu addr_PC(
    .alu_in_1(ID_EX_pc),  // input
    .alu_in_2(ID_EX_imm), // input
    .alu_result(pc_addr)  // output
  );

  mux21 BTB(
    .S(hit),               // input
    .D0(pc_add4),          // input
    .D1(predicted_target), // input
    .Y(pc_btb)             // output
  );

  mux21 PCS1(
    .S(PCSrc1),   // input
    .D0(pc_btb),  // input
    .D1(pc_addr), // input
    .Y(pc_src1)   // output
  );

  mux21 PCS2(
    .S(ID_EX_jalr),  // input
    .D0(pc_src1),    // input
    .D1(alu_result), // input
    .Y(pc_src2)      // output
  );

  mux41 is_correct(
    .S (PCSrc3),    // input
    .D0(pc_src2),   // input 
    .D1(ID_EX_pc4), // input
    .D2(pc_btb),    // input 
    .D3(32'b0),     // input
    .Y (next_pc)    // output
  );
 
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),  // input
    .clk(clk),      // input
    .addr(curr_pc), // input
    .dout(inst)     // output
  );

  mux21 Write_Data(
    .S(MEM_WB_pc_to_reg), // input
    .D0(wb_dout),         // input 
    .D1(MEM_WB_pc4),      // input
    .Y(write_data)        // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin
    if (reset || predict_reset) begin
      IF_ID_inst <= 0;   
      IF_ID_pc   <= 0;  
      IF_ID_pc4  <= 0;
      IF_ID_prediction <= 0;
    end else begin
      if(if_id_write && !mem_access_stall && !active_mem_stage) begin
        IF_ID_inst <= inst;
        IF_ID_pc   <= curr_pc; 
        IF_ID_pc4  <= pc_add4;
        IF_ID_prediction <= prediction;
      end
    end  
  end

  HazardDetectoinUnit hazard_detectoin_unit(
    .opcode(IF_ID_inst[6:0]),  // input : use_rs1, use_rs2
    .rs1(IF_ID_inst[19:15]),   // input : rs1_ID
    .rs2(IF_ID_inst[24:20]),   // input : rs2_ID
    .id_ex_rd(ID_EX_rd),       // input : rd_EX
    .id_ex_memread(ID_EX_mem_read),
    .pcwrite(pcwrite),         //output
    .if_id_write(if_id_write), //output
    .control_mux(control_mux)  //output : MUX input 용도(필요시 0 연결)
  );

  // Check halted
  assign is_halted = (MEM_WB_is_ecall && (print_reg[17] == 10)) ? 1 : 0; 

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset (reset),           // input
    .clk (clk),               // input
    .rs1 (IF_ID_inst[19:15]), // input
    .rs2 (IF_ID_inst[24:20]), // input
    .rd  (MEM_WB_rd),         // input
    .rd_din (write_data),     // input
    .write_enable (MEM_WB_reg_write), // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .print_reg(print_reg)     // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit (
    .opcode(IF_ID_inst[6:0]),    // input
    .is_jal(jal),                // output
    .is_jalr(jalr),              // output
    .branch(branch),             // output
    .pc_to_reg(pc_to_reg),       // output
    .mem_read(mem_read),         // output
    .mem_to_reg(mem_to_reg),     // output
    .mem_write(mem_write),       // output
    .alu_src(alu_src),           // output
    .write_enable(write_enable), // output
    .alu_op(alu_op),             // output
    .is_ecall(is_ecall)          // output (ecall inst)
  );

  mux21 #(12) control_signal(
    .S(control_mux), 
    .D0({jal, jalr, branch, pc_to_reg, mem_read, mem_to_reg, mem_write, alu_src, write_enable, alu_op, is_ecall}), 
    .D1(12'b0), 
    .Y(control_output)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)   // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset || predict_reset || pcwrite == 0) begin
      ID_EX_alu_op     <= 0;    
      ID_EX_alu_src    <= 0;   
      ID_EX_mem_write  <= 0; 
      ID_EX_mem_read   <= 0;  
      ID_EX_mem_to_reg <= 0;
      ID_EX_reg_write  <= 0; 
      ID_EX_jal        <= 0; // 추가
      ID_EX_jalr       <= 0; // 추가
      ID_EX_branch     <= 0; // 추가
      ID_EX_pc_ro_reg  <= 0; // 추가
      ID_EX_is_ecall   <= 0;
      ID_EX_pc         <= 0; // 추가
      ID_EX_pc4        <= 0; // 추가
      ID_EX_rs1_data   <= 0;
      ID_EX_rs2_data   <= 0;
      ID_EX_imm        <= 0;
      ID_EX_ALU_ctrl_unit_input <= 0;
      ID_EX_rs1        <= 0;
      ID_EX_rs2        <= 0;
      ID_EX_rd         <= 0;
      ID_EX_prediction <= 0;
    end else begin
      if (!mem_access_stall && !active_mem_stage) begin
        {ID_EX_jal, ID_EX_jalr, ID_EX_branch, ID_EX_pc_ro_reg, ID_EX_mem_read, ID_EX_mem_to_reg, ID_EX_mem_write, ID_EX_alu_src, ID_EX_reg_write, ID_EX_alu_op, ID_EX_is_ecall} <= control_output;
        ID_EX_pc         <= IF_ID_pc; // 추가
        ID_EX_pc4        <= IF_ID_pc4; // 추가
        ID_EX_rs1_data   <= rs1_dout;
        ID_EX_rs2_data   <= rs2_dout;
        ID_EX_imm        <= imm_gen_out;
        ID_EX_ALU_ctrl_unit_input <= {IF_ID_inst[30], IF_ID_inst[14:12]};
        ID_EX_rs1        <= IF_ID_inst[19:15];
        ID_EX_rs2        <= IF_ID_inst[24:20];      
        ID_EX_rd         <= IF_ID_inst[11: 7];
        ID_EX_prediction <= IF_ID_prediction;
      end
    end
  end

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .part_of_inst(ID_EX_ALU_ctrl_unit_input),  // input
    .alu_op(ID_EX_alu_op),                     // input
    .alu_control(alu_control)                  // output
  );

  mux41 ALUSRC1(
    .S (foward_A),       // input
    .D0(ID_EX_rs1_data), // input 
    .D1(EX_MEM_alu_out), // input
    .D2(write_data),        // input 수정
    .D3(32'b0),          // input
    .Y (alu_in_1)        // output
  );

  mux41 ALUSRC2(
    .S (foward_B),       // input
    .D0(ID_EX_rs2_data), // input 
    .D1(EX_MEM_alu_out), // input
    .D2(write_data),        // input 수정
    .D3(32'b0),          // input
    .Y (alu_src2_out)    // output
  );

  mux21 ALUSRC_IMM(
    .S (ID_EX_alu_src), // input
    .D0(alu_src2_out),  // input 
    .D1(ID_EX_imm),     // input
    .Y (alu_in_2)       // output
  );

  // ---------- ALU ----------
  ALU alu (
    .in_1(alu_in_1),       // input  
    .in_2(alu_in_2),       // input
    .control(alu_control), // input
    .bcond(bcond),         // output
    .result(alu_result)    // output
  );

  ForwardingUnit forwarding_unit(
    .ex_mem_rd(EX_MEM_rd),        // input
    .mem_wb_rd(MEM_WB_rd),        // input
    .rs1(ID_EX_rs1),              // input
    .rs2(ID_EX_rs2),              // input
    .ex_mem_RW(EX_MEM_reg_write), // input
    .mem_wb_RW(MEM_WB_reg_write), // input
    .mux_forward_A(foward_A),     // output : 2bit(default : 2'b00)
    .mux_forward_B(foward_B)      // output : 2bit(default : 2'b00)
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      EX_MEM_mem_write  <= 0; 
      EX_MEM_mem_read   <= 0;  
      EX_MEM_is_branch  <= 0; 
      EX_MEM_mem_to_reg <= 0;
      EX_MEM_reg_write  <= 0; 
      EX_MEM_is_ecall   <= 0;
      EX_MEM_pc_to_reg  <= 0; 
      EX_MEM_pc4        <= 0; 
      EX_MEM_alu_out    <= 0;
      EX_MEM_dmem_data  <= 0;
      EX_MEM_rd         <= 0;
    end else begin
      if(!mem_access_stall && !active_mem_stage) begin
        EX_MEM_mem_write  <= ID_EX_mem_write; 
        EX_MEM_mem_read   <= ID_EX_mem_read;  
        EX_MEM_is_branch  <= bcond; 
        EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;
        EX_MEM_reg_write  <= ID_EX_reg_write;
        EX_MEM_is_ecall   <= ID_EX_is_ecall;
        EX_MEM_pc_to_reg  <= ID_EX_pc_ro_reg; 
        EX_MEM_pc4        <= ID_EX_pc4;  
        EX_MEM_alu_out    <= alu_result;
        EX_MEM_dmem_data  <= alu_src2_out;
        EX_MEM_rd         <= ID_EX_rd;
      end
    end
  end

  assign is_input_valid = EX_MEM_mem_write | EX_MEM_mem_read;
  assign mem_access_stall = (ID_EX_mem_read | ID_EX_mem_write) && !is_ready;
  assign active_mem_stage = is_input_valid ? !is_output_valid : 0;
  // ---------- Data Memory ----------
  Cache cache(
    .reset (reset),                     // input
    .clk (clk),                         // input
    .is_input_valid(is_input_valid),    // input
    .addr (EX_MEM_alu_out),             // input
    .mem_rw(EX_MEM_mem_write),          // input
    .din (EX_MEM_dmem_data),            // input

    .is_ready (is_ready),               // output : 요청할 때 -> True면 pipelined 정상 시행
    .is_output_valid (is_output_valid), // output : 받을 때 -> True면 pipelined 정상 시행
    .dout (mem_dout),                   // output :
    .is_hit (is_hit)                    // output : 
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_mem_to_reg <= 0;    
      MEM_WB_reg_write  <= 0;     
      MEM_WB_pc_to_reg  <= 0; 
      MEM_WB_pc4        <= 0; 
      MEM_WB_is_ecall   <= 0;
      MEM_WB_mem_to_reg_src_0 <= 0;
      MEM_WB_mem_to_reg_src_1 <= 0;
      MEM_WB_rd <= 0;
    end else begin
      if(!active_mem_stage) begin
        MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;    
        MEM_WB_reg_write  <= EX_MEM_reg_write; 
        MEM_WB_pc_to_reg  <= EX_MEM_pc_to_reg; 
        MEM_WB_pc4        <= EX_MEM_pc4; 
        MEM_WB_is_ecall   <= EX_MEM_is_ecall;  
        MEM_WB_mem_to_reg_src_0 <= EX_MEM_alu_out;
        MEM_WB_mem_to_reg_src_1 <= mem_dout;
        MEM_WB_rd <= EX_MEM_rd;
      end
    end
  end

  mux21 WBSRC(
    .S (MEM_WB_mem_to_reg),       // input
    .D0(MEM_WB_mem_to_reg_src_0), // input 
    .D1(MEM_WB_mem_to_reg_src_1), // input
    .Y (wb_dout)                  // output
  );

  
endmodule
