// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"hit_ratio",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+37,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"hit_ratio",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+73,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"hit_ratio",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+77+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+109,0,"curr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"pc_add4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"pc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"pc_btb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"pc_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"pc_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"target_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"PCSrc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+120,0,"pcwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"if_id_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"control_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"predict_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"PCSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bcond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"rs1_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"rs2_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"imm_gen_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"control_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+146,0,"alu_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"alu_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"alu_src2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+151,0,"foward_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"foward_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+153,0,"mem_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"wb_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,0,"is_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"is_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"is_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"is_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"mem_access_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"active_mem_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"IF_ID_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"IF_ID_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"IF_ID_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"IF_ID_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"ID_EX_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+166,0,"ID_EX_alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"ID_EX_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"ID_EX_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"ID_EX_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"ID_EX_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"ID_EX_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"ID_EX_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"ID_EX_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ID_EX_pc_ro_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"ID_EX_is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"ID_EX_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"ID_EX_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"ID_EX_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"ID_EX_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"ID_EX_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"ID_EX_ALU_ctrl_unit_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+182,0,"ID_EX_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+183,0,"ID_EX_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+184,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+185,0,"ID_EX_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"EX_MEM_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"EX_MEM_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"EX_MEM_is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"EX_MEM_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"EX_MEM_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"EX_MEM_is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"EX_MEM_pc_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"EX_MEM_alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"EX_MEM_dmem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"EX_MEM_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+197,0,"MEM_WB_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"MEM_WB_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"MEM_WB_is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"MEM_WB_pc_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"MEM_WB_mem_to_reg_src_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"MEM_WB_mem_to_reg_src_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"MEM_WB_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"MEM_WB_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("ALUSRC1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+206,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALUSRC2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+212,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALUSRC_IMM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("BTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+221,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCS1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCS2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WBSRC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+233,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Write_Data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("add4_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"alu_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"alu_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("addr_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+244,0,"alu_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"alu_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"bcond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+252,0,"part_of_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+253,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+254,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+255,0,"sub_or_not",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("branchpredictor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+257,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"pc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+260,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"ex_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"target_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,0,"hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("btb_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+267+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tag_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 24,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pht", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+331+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+363,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+364,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+365,0,"exidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+366,0,"extag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+367,0,"pht_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+368,0,"BHSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+369,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+696,0,"LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"is_input_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"mem_rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"is_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"is_output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+379,0,"is_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"hit_ratio",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"total_accesses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"miss_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+698,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+698,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"input_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+384,0,"set_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+385,0,"block_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("lru", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+386,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+387,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+388,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+389,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+390,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+391,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+392,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+393,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+394,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+395,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+396,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+397,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+398,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+399,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+400,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+401,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dirty", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+402,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+403,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+404,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+405,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+406,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+407,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+408,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+409,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+410,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+411,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+412,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+413,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+414,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+415,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+416,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+417,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+418,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+419,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+420,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+421,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+422,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+423,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+424,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+425,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+426,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+427,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+428,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+429,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+430,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+431,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+432,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+433,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+434,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+435,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+436,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+437,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+438,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+439,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+440,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+441,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+442,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+443,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+444,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+445,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+446,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+447,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+448,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+449,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+450,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+454,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+458,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+462,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+466,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+470,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+474,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+478,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+482,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+486,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+490,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+494,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+498,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+502,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+506,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+510,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+514,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+515,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+700,0,"BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+701,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+702,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+516,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+517,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+518,0,"check_hit_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+519,0,"check_change_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+520,0,"hit_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+521,0,"change_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+522,0,"all_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+523,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+524,0,"l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declArray(c+525,0,"mem_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+529,0,"mem_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+533,0,"is_mem_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"is_mem_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"is_data_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"is_mem_write_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+703,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+704,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+540,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"is_input_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+544,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+546,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+550,0,"is_output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"is_write_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+552,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+556,0,"mem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+558,0,"delay_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+559,0,"request_arrived",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("control_signal", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+705,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+561,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+562,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+563,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+564,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+565,0,"is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"pc_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+575,0,"is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("forwarding_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+576,0,"ex_mem_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+577,0,"mem_wb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+578,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+579,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+580,0,"ex_mem_RW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"mem_wb_RW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+582,0,"mux_forward_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+583,0,"mux_forward_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("hazard_detectoin_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+584,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+585,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+586,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+587,0,"id_ex_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+588,0,"id_ex_memread",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"pcwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"if_id_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"control_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"use_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"use_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+703,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+594,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+597,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+599,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+600,0,"part_of_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"imm_gen_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+603,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("is_correct", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+605,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+606,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("iscorrect", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+610,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"prediction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+612,0,"cu_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+613,0,"pre_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+614,0,"pc_mux_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+615,0,"predict_reset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+616,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"pcwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+619,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"curr_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+621,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+623,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+624,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+625,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+626,0,"rd_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+627,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+628,0,"rs1_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"rs2_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+630+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+662,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+663+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+695,(0x20U),32);
    bufp->fullIData(oldp+696,(0x10U),32);
    bufp->fullIData(oldp+697,(4U),32);
    bufp->fullIData(oldp+698,(2U),32);
    bufp->fullIData(oldp+699,(0x1aU),32);
    bufp->fullCData(oldp+700,(0U),2);
    bufp->fullCData(oldp+701,(2U),2);
    bufp->fullCData(oldp+702,(3U),2);
    bufp->fullIData(oldp+703,(0x4000U),32);
    bufp->fullIData(oldp+704,(0x32U),32);
    bufp->fullIData(oldp+705,(0xcU),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->reset));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->is_halted));
    bufp->fullIData(oldp+4,(vlSelf->hit_ratio),32);
    bufp->fullIData(oldp+5,(vlSelf->print_reg[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->print_reg[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->print_reg[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->print_reg[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->print_reg[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->print_reg[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->print_reg[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->print_reg[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->print_reg[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->print_reg[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->print_reg[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->print_reg[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->print_reg[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->print_reg[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->print_reg[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->print_reg[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->print_reg[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->print_reg[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->print_reg[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->print_reg[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->print_reg[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->print_reg[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->print_reg[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->print_reg[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->print_reg[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->print_reg[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->print_reg[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->print_reg[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->print_reg[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->print_reg[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->print_reg[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->print_reg[31]),32);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__reset));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__clk));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__is_halted));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__hit_ratio),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__cpu__DOT__reset));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__cpu__DOT__clk));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__cpu__DOT__is_halted));
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__cpu__DOT__hit_ratio),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__cpu__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__cpu__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__cpu__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__cpu__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__cpu__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__cpu__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__cpu__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__cpu__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__cpu__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__cpu__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__cpu__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__cpu__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__cpu__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__cpu__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__cpu__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__cpu__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__cpu__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__cpu__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__cpu__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__cpu__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__cpu__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__cpu__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__cpu__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__cpu__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__cpu__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__cpu__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__cpu__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__cpu__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__cpu__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__cpu__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__cpu__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__cpu__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__cpu__DOT__curr_pc),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__cpu__DOT__pc_add4),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__cpu__DOT__pc_addr),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__cpu__DOT__pc_btb),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__cpu__DOT__pc_src1),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__cpu__DOT__pc_src2),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__cpu__DOT__inst),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__cpu__DOT__target_addr),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__cpu__DOT__predicted_target),32);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__cpu__DOT__PCSrc3),2);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__cpu__DOT__pcwrite));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__cpu__DOT__if_id_write));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__cpu__DOT__control_mux));
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__cpu__DOT__valid));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__cpu__DOT__taken));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__cpu__DOT__hit));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__cpu__DOT__predict_reset));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__cpu__DOT__prediction));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__cpu__DOT__jal));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__cpu__DOT__jalr));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__cpu__DOT__branch));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__cpu__DOT__pc_to_reg));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__cpu__DOT__PCSrc1));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__cpu__DOT__mem_read));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__cpu__DOT__mem_to_reg));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__cpu__DOT__mem_write));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__cpu__DOT__alu_src));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__cpu__DOT__write_enable));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__cpu__DOT__bcond));
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__cpu__DOT__alu_op),2);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__cpu__DOT__write_data),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__cpu__DOT__rs1_dout),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__cpu__DOT__rs2_dout),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__cpu__DOT__imm_gen_out),32);
    bufp->fullSData(oldp+145,(vlSelf->top__DOT__cpu__DOT__control_output),12);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__cpu__DOT__alu_in_1),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__cpu__DOT__alu_in_2),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__cpu__DOT__alu_src2_out),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__cpu__DOT__alu_result),32);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__cpu__DOT__alu_control),4);
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__cpu__DOT__foward_A),2);
    bufp->fullCData(oldp+152,(vlSelf->top__DOT__cpu__DOT__foward_B),2);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__cpu__DOT__mem_dout),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__cpu__DOT__wb_dout),32);
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__cpu__DOT__is_input_valid));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__cpu__DOT__is_ready));
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__cpu__DOT__is_output_valid));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__cpu__DOT__is_hit));
    bufp->fullBit(oldp+159,(vlSelf->top__DOT__cpu__DOT__mem_access_stall));
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__cpu__DOT__active_mem_stage));
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__cpu__DOT__IF_ID_pc4),32);
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__cpu__DOT__IF_ID_prediction));
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op),2);
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write));
    bufp->fullBit(oldp+168,(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read));
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg));
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__cpu__DOT__ID_EX_jal));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__cpu__DOT__ID_EX_jalr));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__cpu__DOT__ID_EX_branch));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__cpu__DOT__ID_EX_pc_ro_reg));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__cpu__DOT__ID_EX_is_ecall));
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__cpu__DOT__ID_EX_imm),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__cpu__DOT__ID_EX_pc),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__cpu__DOT__ID_EX_pc4),32);
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input),4);
    bufp->fullCData(oldp+182,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1),5);
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2),5);
    bufp->fullCData(oldp+184,(vlSelf->top__DOT__cpu__DOT__ID_EX_rd),5);
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__cpu__DOT__ID_EX_prediction));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read));
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__cpu__DOT__EX_MEM_is_branch));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__cpu__DOT__EX_MEM_is_ecall));
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg));
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__cpu__DOT__EX_MEM_pc4),32);
    bufp->fullCData(oldp+196,(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd),5);
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg));
    bufp->fullBit(oldp+198,(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write));
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__cpu__DOT__MEM_WB_is_ecall));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg));
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__cpu__DOT__MEM_WB_pc4),32);
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd),5);
    bufp->fullCData(oldp+205,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__S),2);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D0),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D1),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D2),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D3),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__Y),32);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__S),2);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D0),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D1),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D2),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D3),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__Y),32);
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__S));
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D0),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D1),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__Y),32);
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__cpu__DOT__BTB__DOT__S));
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__cpu__DOT__BTB__DOT__D0),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__cpu__DOT__BTB__DOT__D1),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__cpu__DOT__BTB__DOT__Y),32);
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__S));
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__D0),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__D1),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__Y),32);
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__S));
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__D0),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__D1),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__Y),32);
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__S));
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__D0),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__D1),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__Y),32);
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__S));
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D0),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D1),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__Y),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_in_1),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_in_2),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_result),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_in_1),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_in_2),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_result),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__cpu__DOT__alu__DOT__in_1),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__cpu__DOT__alu__DOT__in_2),32);
    bufp->fullCData(oldp+249,(vlSelf->top__DOT__cpu__DOT__alu__DOT__control),4);
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond));
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__cpu__DOT__alu__DOT__result),32);
    bufp->fullCData(oldp+252,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst),4);
    bufp->fullCData(oldp+253,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op),2);
    bufp->fullCData(oldp+254,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control),4);
    bufp->fullBit(oldp+255,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not));
    bufp->fullCData(oldp+256,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3),3);
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__clk));
    bufp->fullBit(oldp+258,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__reset));
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pc_addr),32);
    bufp->fullBit(oldp+260,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__valid));
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__taken));
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__ex_addr),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__target_addr),32);
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__hit));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__prediction));
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__predicted_target),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[1]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[2]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[3]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[4]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[5]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[6]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[7]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[8]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[9]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[10]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[11]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[12]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[13]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[14]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[15]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[16]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[17]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[18]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[19]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[20]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[21]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[22]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[23]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[24]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[25]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[26]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[27]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[28]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[29]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[30]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[31]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0]),25);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[1]),25);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[2]),25);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[3]),25);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[4]),25);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[5]),25);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[6]),25);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[7]),25);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[8]),25);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[9]),25);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[10]),25);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[11]),25);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[12]),25);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[13]),25);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[14]),25);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[15]),25);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[16]),25);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[17]),25);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[18]),25);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[19]),25);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[20]),25);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[21]),25);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[22]),25);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[23]),25);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[24]),25);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[25]),25);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[26]),25);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[27]),25);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[28]),25);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[29]),25);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[30]),25);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[31]),25);
    bufp->fullCData(oldp+331,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0]),2);
    bufp->fullCData(oldp+332,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[1]),2);
    bufp->fullCData(oldp+333,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[2]),2);
    bufp->fullCData(oldp+334,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[3]),2);
    bufp->fullCData(oldp+335,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[4]),2);
    bufp->fullCData(oldp+336,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[5]),2);
    bufp->fullCData(oldp+337,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[6]),2);
    bufp->fullCData(oldp+338,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[7]),2);
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[8]),2);
    bufp->fullCData(oldp+340,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[9]),2);
    bufp->fullCData(oldp+341,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[10]),2);
    bufp->fullCData(oldp+342,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[11]),2);
    bufp->fullCData(oldp+343,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[12]),2);
    bufp->fullCData(oldp+344,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[13]),2);
    bufp->fullCData(oldp+345,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[14]),2);
    bufp->fullCData(oldp+346,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[15]),2);
    bufp->fullCData(oldp+347,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[16]),2);
    bufp->fullCData(oldp+348,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[17]),2);
    bufp->fullCData(oldp+349,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[18]),2);
    bufp->fullCData(oldp+350,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[19]),2);
    bufp->fullCData(oldp+351,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[20]),2);
    bufp->fullCData(oldp+352,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[21]),2);
    bufp->fullCData(oldp+353,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[22]),2);
    bufp->fullCData(oldp+354,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[23]),2);
    bufp->fullCData(oldp+355,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[24]),2);
    bufp->fullCData(oldp+356,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[25]),2);
    bufp->fullCData(oldp+357,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[26]),2);
    bufp->fullCData(oldp+358,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[27]),2);
    bufp->fullCData(oldp+359,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[28]),2);
    bufp->fullCData(oldp+360,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[29]),2);
    bufp->fullCData(oldp+361,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[30]),2);
    bufp->fullCData(oldp+362,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[31]),2);
    bufp->fullCData(oldp+363,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__index),5);
    bufp->fullIData(oldp+364,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag),25);
    bufp->fullCData(oldp+365,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__exidx),5);
    bufp->fullIData(oldp+366,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__extag),25);
    bufp->fullCData(oldp+367,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx),5);
    bufp->fullCData(oldp+368,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__BHSR),5);
    bufp->fullIData(oldp+369,(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i),32);
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__cpu__DOT__cache__DOT__reset));
    bufp->fullBit(oldp+371,(vlSelf->top__DOT__cpu__DOT__cache__DOT__clk));
    bufp->fullBit(oldp+372,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid));
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__cpu__DOT__cache__DOT__addr),32);
    bufp->fullBit(oldp+374,(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw));
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__cpu__DOT__cache__DOT__din),32);
    bufp->fullBit(oldp+376,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_ready));
    bufp->fullBit(oldp+377,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid));
    bufp->fullIData(oldp+378,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dout),32);
    bufp->fullBit(oldp+379,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit));
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_ratio),32);
    bufp->fullIData(oldp+381,(vlSelf->top__DOT__cpu__DOT__cache__DOT__total_accesses),32);
    bufp->fullIData(oldp+382,(vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_count),32);
    bufp->fullIData(oldp+383,(vlSelf->top__DOT__cpu__DOT__cache__DOT__input_tag),26);
    bufp->fullCData(oldp+384,(vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index),2);
    bufp->fullCData(oldp+385,(vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset),2);
    bufp->fullCData(oldp+386,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [0U][0U]),3);
    bufp->fullCData(oldp+387,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [0U][1U]),3);
    bufp->fullCData(oldp+388,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [0U][2U]),3);
    bufp->fullCData(oldp+389,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [0U][3U]),3);
    bufp->fullCData(oldp+390,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [1U][0U]),3);
    bufp->fullCData(oldp+391,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [1U][1U]),3);
    bufp->fullCData(oldp+392,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [1U][2U]),3);
    bufp->fullCData(oldp+393,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [1U][3U]),3);
    bufp->fullCData(oldp+394,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [2U][0U]),3);
    bufp->fullCData(oldp+395,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [2U][1U]),3);
    bufp->fullCData(oldp+396,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [2U][2U]),3);
    bufp->fullCData(oldp+397,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [2U][3U]),3);
    bufp->fullCData(oldp+398,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [3U][0U]),3);
    bufp->fullCData(oldp+399,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [3U][1U]),3);
    bufp->fullCData(oldp+400,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [3U][2U]),3);
    bufp->fullCData(oldp+401,(vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                              [3U][3U]),3);
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][0U]));
    bufp->fullBit(oldp+403,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][1U]));
    bufp->fullBit(oldp+404,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][2U]));
    bufp->fullBit(oldp+405,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][3U]));
    bufp->fullBit(oldp+406,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][0U]));
    bufp->fullBit(oldp+407,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][1U]));
    bufp->fullBit(oldp+408,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][2U]));
    bufp->fullBit(oldp+409,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][3U]));
    bufp->fullBit(oldp+410,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][0U]));
    bufp->fullBit(oldp+411,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][1U]));
    bufp->fullBit(oldp+412,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][2U]));
    bufp->fullBit(oldp+413,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][3U]));
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][0U]));
    bufp->fullBit(oldp+415,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][1U]));
    bufp->fullBit(oldp+416,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][2U]));
    bufp->fullBit(oldp+417,(vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][3U]));
    bufp->fullBit(oldp+418,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][0U]));
    bufp->fullBit(oldp+419,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][1U]));
    bufp->fullBit(oldp+420,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][2U]));
    bufp->fullBit(oldp+421,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][3U]));
    bufp->fullBit(oldp+422,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][0U]));
    bufp->fullBit(oldp+423,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][1U]));
    bufp->fullBit(oldp+424,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][2U]));
    bufp->fullBit(oldp+425,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][3U]));
    bufp->fullBit(oldp+426,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][0U]));
    bufp->fullBit(oldp+427,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][1U]));
    bufp->fullBit(oldp+428,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][2U]));
    bufp->fullBit(oldp+429,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][3U]));
    bufp->fullBit(oldp+430,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][0U]));
    bufp->fullBit(oldp+431,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][1U]));
    bufp->fullBit(oldp+432,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][2U]));
    bufp->fullBit(oldp+433,(vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][3U]));
    bufp->fullIData(oldp+434,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [0U][0U]),26);
    bufp->fullIData(oldp+435,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [0U][1U]),26);
    bufp->fullIData(oldp+436,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [0U][2U]),26);
    bufp->fullIData(oldp+437,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [0U][3U]),26);
    bufp->fullIData(oldp+438,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [1U][0U]),26);
    bufp->fullIData(oldp+439,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [1U][1U]),26);
    bufp->fullIData(oldp+440,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [1U][2U]),26);
    bufp->fullIData(oldp+441,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [1U][3U]),26);
    bufp->fullIData(oldp+442,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [2U][0U]),26);
    bufp->fullIData(oldp+443,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [2U][1U]),26);
    bufp->fullIData(oldp+444,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [2U][2U]),26);
    bufp->fullIData(oldp+445,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [2U][3U]),26);
    bufp->fullIData(oldp+446,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [3U][0U]),26);
    bufp->fullIData(oldp+447,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [3U][1U]),26);
    bufp->fullIData(oldp+448,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [3U][2U]),26);
    bufp->fullIData(oldp+449,(vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                              [3U][3U]),26);
    bufp->fullWData(oldp+450,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [0U][0U]),128);
    bufp->fullWData(oldp+454,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [0U][1U]),128);
    bufp->fullWData(oldp+458,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [0U][2U]),128);
    bufp->fullWData(oldp+462,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [0U][3U]),128);
    bufp->fullWData(oldp+466,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [1U][0U]),128);
    bufp->fullWData(oldp+470,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [1U][1U]),128);
    bufp->fullWData(oldp+474,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [1U][2U]),128);
    bufp->fullWData(oldp+478,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [1U][3U]),128);
    bufp->fullWData(oldp+482,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [2U][0U]),128);
    bufp->fullWData(oldp+486,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [2U][1U]),128);
    bufp->fullWData(oldp+490,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [2U][2U]),128);
    bufp->fullWData(oldp+494,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [2U][3U]),128);
    bufp->fullWData(oldp+498,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [3U][0U]),128);
    bufp->fullWData(oldp+502,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [3U][1U]),128);
    bufp->fullWData(oldp+506,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [3U][2U]),128);
    bufp->fullWData(oldp+510,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                              [3U][3U]),128);
    bufp->fullIData(oldp+514,(vlSelf->top__DOT__cpu__DOT__cache__DOT__i),32);
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__cpu__DOT__cache__DOT__j),32);
    bufp->fullCData(oldp+516,(vlSelf->top__DOT__cpu__DOT__cache__DOT__state),2);
    bufp->fullIData(oldp+517,(vlSelf->top__DOT__cpu__DOT__cache__DOT__m),32);
    bufp->fullCData(oldp+518,(vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index),3);
    bufp->fullCData(oldp+519,(vlSelf->top__DOT__cpu__DOT__cache__DOT__check_change_index),3);
    bufp->fullCData(oldp+520,(vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index),2);
    bufp->fullCData(oldp+521,(vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index),2);
    bufp->fullBit(oldp+522,(vlSelf->top__DOT__cpu__DOT__cache__DOT__all_valid));
    bufp->fullIData(oldp+523,(vlSelf->top__DOT__cpu__DOT__cache__DOT__k),32);
    bufp->fullIData(oldp+524,(vlSelf->top__DOT__cpu__DOT__cache__DOT__l),32);
    bufp->fullWData(oldp+525,(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din),128);
    bufp->fullWData(oldp+529,(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout),128);
    bufp->fullBit(oldp+533,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_input_valid));
    bufp->fullBit(oldp+534,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid));
    bufp->fullBit(oldp+535,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready));
    bufp->fullBit(oldp+536,(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read));
    bufp->fullBit(oldp+537,(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write));
    bufp->fullBit(oldp+538,(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_write_done));
    bufp->fullIData(oldp+539,(vlSelf->top__DOT__cpu__DOT__cache__DOT__write_addr),32);
    bufp->fullBit(oldp+540,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset));
    bufp->fullBit(oldp+541,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk));
    bufp->fullBit(oldp+542,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid));
    bufp->fullIData(oldp+543,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr),32);
    bufp->fullBit(oldp+544,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read));
    bufp->fullBit(oldp+545,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write));
    bufp->fullWData(oldp+546,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din),128);
    bufp->fullBit(oldp+550,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid));
    bufp->fullBit(oldp+551,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_write_done));
    bufp->fullWData(oldp+552,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout),128);
    bufp->fullBit(oldp+556,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready));
    bufp->fullIData(oldp+557,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i),32);
    bufp->fullIData(oldp+558,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter),32);
    bufp->fullBit(oldp+559,(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived));
    bufp->fullBit(oldp+560,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__S));
    bufp->fullSData(oldp+561,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__D0),12);
    bufp->fullSData(oldp+562,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__D1),12);
    bufp->fullSData(oldp+563,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__Y),12);
    bufp->fullCData(oldp+564,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode),7);
    bufp->fullBit(oldp+565,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal));
    bufp->fullBit(oldp+566,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr));
    bufp->fullBit(oldp+567,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch));
    bufp->fullBit(oldp+568,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg));
    bufp->fullBit(oldp+569,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read));
    bufp->fullBit(oldp+570,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg));
    bufp->fullBit(oldp+571,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write));
    bufp->fullBit(oldp+572,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src));
    bufp->fullBit(oldp+573,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable));
    bufp->fullCData(oldp+574,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op),2);
    bufp->fullBit(oldp+575,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall));
    bufp->fullCData(oldp+576,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_rd),5);
    bufp->fullCData(oldp+577,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_rd),5);
    bufp->fullCData(oldp+578,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__rs1),5);
    bufp->fullCData(oldp+579,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__rs2),5);
    bufp->fullBit(oldp+580,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_RW));
    bufp->fullBit(oldp+581,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_RW));
    bufp->fullCData(oldp+582,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_A),2);
    bufp->fullCData(oldp+583,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_B),2);
    bufp->fullCData(oldp+584,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__opcode),7);
    bufp->fullCData(oldp+585,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs1),5);
    bufp->fullCData(oldp+586,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs2),5);
    bufp->fullCData(oldp+587,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_rd),5);
    bufp->fullBit(oldp+588,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_memread));
    bufp->fullBit(oldp+589,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__pcwrite));
    bufp->fullBit(oldp+590,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__if_id_write));
    bufp->fullBit(oldp+591,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__control_mux));
    bufp->fullBit(oldp+592,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs1));
    bufp->fullBit(oldp+593,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs2));
    bufp->fullBit(oldp+594,(vlSelf->top__DOT__cpu__DOT__imem__DOT__reset));
    bufp->fullBit(oldp+595,(vlSelf->top__DOT__cpu__DOT__imem__DOT__clk));
    bufp->fullIData(oldp+596,(vlSelf->top__DOT__cpu__DOT__imem__DOT__addr),32);
    bufp->fullIData(oldp+597,(vlSelf->top__DOT__cpu__DOT__imem__DOT__dout),32);
    bufp->fullIData(oldp+598,(vlSelf->top__DOT__cpu__DOT__imem__DOT__i),32);
    bufp->fullIData(oldp+599,(vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr),32);
    bufp->fullIData(oldp+600,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst),32);
    bufp->fullIData(oldp+601,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out),32);
    bufp->fullCData(oldp+602,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3),3);
    bufp->fullCData(oldp+603,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode),7);
    bufp->fullCData(oldp+604,(vlSelf->top__DOT__cpu__DOT__is_correct__DOT__S),2);
    bufp->fullIData(oldp+605,(vlSelf->top__DOT__cpu__DOT__is_correct__DOT__D0),32);
    bufp->fullIData(oldp+606,(vlSelf->top__DOT__cpu__DOT__is_correct__DOT__D1),32);
    bufp->fullIData(oldp+607,(vlSelf->top__DOT__cpu__DOT__is_correct__DOT__D2),32);
    bufp->fullIData(oldp+608,(vlSelf->top__DOT__cpu__DOT__is_correct__DOT__D3),32);
    bufp->fullIData(oldp+609,(vlSelf->top__DOT__cpu__DOT__is_correct__DOT__Y),32);
    bufp->fullBit(oldp+610,(vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__taken));
    bufp->fullBit(oldp+611,(vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__prediction));
    bufp->fullIData(oldp+612,(vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__cu_pc),32);
    bufp->fullIData(oldp+613,(vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__pre_pc),32);
    bufp->fullCData(oldp+614,(vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__pc_mux_flag),2);
    bufp->fullBit(oldp+615,(vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__predict_reset));
    bufp->fullBit(oldp+616,(vlSelf->top__DOT__cpu__DOT__pc__DOT__reset));
    bufp->fullBit(oldp+617,(vlSelf->top__DOT__cpu__DOT__pc__DOT__clk));
    bufp->fullBit(oldp+618,(vlSelf->top__DOT__cpu__DOT__pc__DOT__pcwrite));
    bufp->fullIData(oldp+619,(vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc),32);
    bufp->fullIData(oldp+620,(vlSelf->top__DOT__cpu__DOT__pc__DOT__curr_pc),32);
    bufp->fullBit(oldp+621,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset));
    bufp->fullBit(oldp+622,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk));
    bufp->fullCData(oldp+623,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1),5);
    bufp->fullCData(oldp+624,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2),5);
    bufp->fullCData(oldp+625,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd),5);
    bufp->fullIData(oldp+626,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din),32);
    bufp->fullBit(oldp+627,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable));
    bufp->fullIData(oldp+628,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout),32);
    bufp->fullIData(oldp+629,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout),32);
    bufp->fullIData(oldp+630,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+631,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+632,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+633,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+634,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+635,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+636,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+637,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+638,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+639,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+640,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+641,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+642,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+643,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+644,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+645,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+646,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+647,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+648,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+649,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+650,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+651,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+652,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+653,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+654,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+655,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+656,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+657,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+658,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+659,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+660,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+661,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+662,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i),32);
    bufp->fullIData(oldp+663,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+664,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+665,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+666,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+667,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+668,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+669,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+670,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+671,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+672,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+673,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+674,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+675,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+676,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+677,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+678,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+679,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+680,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+681,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+682,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+683,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+684,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+685,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+686,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+687,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+688,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+689,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+690,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+691,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+692,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+693,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+694,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[31]),32);
}
