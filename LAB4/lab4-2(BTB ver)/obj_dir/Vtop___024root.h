// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(is_halted,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__is_halted;
        CData/*1:0*/ top__DOT__cpu__DOT__PCSrc3;
        CData/*0:0*/ top__DOT__cpu__DOT__pcwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__if_id_write;
        CData/*0:0*/ top__DOT__cpu__DOT__control_mux;
        CData/*0:0*/ top__DOT__cpu__DOT__valid;
        CData/*0:0*/ top__DOT__cpu__DOT__taken;
        CData/*0:0*/ top__DOT__cpu__DOT__hit;
        CData/*0:0*/ top__DOT__cpu__DOT__is_incorrect;
        CData/*0:0*/ top__DOT__cpu__DOT__prediction;
        CData/*0:0*/ top__DOT__cpu__DOT__jal;
        CData/*0:0*/ top__DOT__cpu__DOT__jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__branch;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__PCSrc1;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__bcond;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_op;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_control;
        CData/*1:0*/ top__DOT__cpu__DOT__foward_A;
        CData/*1:0*/ top__DOT__cpu__DOT__foward_B;
        CData/*0:0*/ top__DOT__cpu__DOT__IF_ID_prediction;
        CData/*1:0*/ top__DOT__cpu__DOT__ID_EX_alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_pc_ro_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_ecall;
        CData/*3:0*/ top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_prediction;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_pc_to_reg;
        CData/*4:0*/ top__DOT__cpu__DOT__EX_MEM_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_pc_to_reg;
        CData/*4:0*/ top__DOT__cpu__DOT__MEM_WB_rd;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__pcwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__valid;
        CData/*0:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__taken;
        CData/*0:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__hit;
        CData/*0:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__prediction;
        CData/*4:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__index;
        CData/*4:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__exidx;
        CData/*0:0*/ top__DOT__cpu__DOT__iscorrect__DOT__taken;
        CData/*0:0*/ top__DOT__cpu__DOT__iscorrect__DOT__prediction;
        CData/*1:0*/ top__DOT__cpu__DOT__iscorrect__DOT__pc_mux_flag;
        CData/*0:0*/ top__DOT__cpu__DOT__iscorrect__DOT__is_incorrect;
        CData/*0:0*/ top__DOT__cpu__DOT__BTB__DOT__S;
        CData/*0:0*/ top__DOT__cpu__DOT__PCS1__DOT__S;
        CData/*0:0*/ top__DOT__cpu__DOT__PCS2__DOT__S;
        CData/*1:0*/ top__DOT__cpu__DOT__is_correct__DOT__S;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__Write_Data__DOT__S;
        CData/*6:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__opcode;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_memread;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__pcwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__if_id_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__control_mux;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs1;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs2;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__branch;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__control_signal__DOT__S;
        CData/*2:0*/ top__DOT__cpu__DOT__imm_gen__DOT__funct3;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not;
        CData/*2:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__S;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__S;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSRC_IMM__DOT__S;
        CData/*3:0*/ top__DOT__cpu__DOT__alu__DOT__control;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__bcond;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_rd;
    };
    struct {
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__rs2;
        CData/*0:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_RW;
        CData/*0:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_RW;
        CData/*1:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_A;
        CData/*1:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_B;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__WBSRC__DOT__S;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__cpu__DOT__control_output;
        SData/*11:0*/ top__DOT__cpu__DOT__control_signal__DOT__D0;
        SData/*11:0*/ top__DOT__cpu__DOT__control_signal__DOT__D1;
        SData/*11:0*/ top__DOT__cpu__DOT__control_signal__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__curr_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_add4;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_btb;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_src1;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_src2;
        IData/*31:0*/ top__DOT__cpu__DOT__inst;
        IData/*31:0*/ top__DOT__cpu__DOT__target_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__predicted_target;
        IData/*31:0*/ top__DOT__cpu__DOT__write_data;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src2_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__wb_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_pc4;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_pc4;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_dmem_data;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_pc4;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_pc4;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__curr_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__pc_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__ex_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__target_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__predicted_target;
        IData/*24:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__tag;
        IData/*24:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__extag;
        IData/*31:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__i;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__add4_PC__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__add4_PC__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__add4_PC__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__addr_PC__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__addr_PC__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__addr_PC__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__BTB__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__BTB__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__BTB__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__PCS1__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__PCS1__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__PCS1__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__PCS2__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__PCS2__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__PCS2__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__is_correct__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__is_correct__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__is_correct__DOT__D2;
        IData/*31:0*/ top__DOT__cpu__DOT__is_correct__DOT__D3;
        IData/*31:0*/ top__DOT__cpu__DOT__is_correct__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__imem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__D2;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__D3;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D2;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D3;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC_IMM__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__result;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__dmem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__WBSRC__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__WBSRC__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__WBSRC__DOT__Y;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__branchpredictor__DOT__btb_table;
        VlUnpacked<IData/*24:0*/, 32> top__DOT__cpu__DOT__branchpredictor__DOT__tag_table;
        VlUnpacked<CData/*1:0*/, 32> top__DOT__cpu__DOT__branchpredictor__DOT__pht;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 1024> top__DOT__cpu__DOT__imem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__dmem__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__branchpredictor__DOT__ENTRIES = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__BTB__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__PCS1__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__PCS2__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__is_correct__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH = 0x00000400U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__control_signal__DOT__data_width = 0x0000000cU;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC_IMM__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__WBSRC__DOT__data_width = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
