// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__curr_pc = 0U;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D1 = 4U;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D3 = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*14:0*/, 16> Vtop__ConstPool__TABLE_h18cd29ea_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtop__ConstPool__TABLE_h4098eea6_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__pc__DOT__curr_pc = vlSelf->top__DOT__cpu__DOT__curr_pc;
    vlSelf->top__DOT__cpu__DOT__Address__DOT__D0 = vlSelf->top__DOT__cpu__DOT__curr_pc;
    vlSelf->top__DOT__cpu__DOT__Address__DOT__D1 = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__IR 
        = vlSelf->top__DOT__cpu__DOT__IR;
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__MDR 
        = vlSelf->top__DOT__cpu__DOT__MDR;
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D0 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D1 
        = vlSelf->top__DOT__cpu__DOT__MDR;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 7U));
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D0 = vlSelf->top__DOT__cpu__DOT__curr_pc;
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D1 = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D0 = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__ALUOut 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__D1 = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__regist_17 = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0xfU))];
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U))];
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not 
        = (1U & (vlSelf->top__DOT__cpu__DOT__IR >> 0x1eU));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__instr = vlSelf->top__DOT__cpu__DOT__IR;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__IR >> 0xcU));
    __Vtableidx1 = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord 
        = Vtop__ConstPool__TABLE_h18cd29ea_0[__Vtableidx1];
    vlSelf->print_reg[0U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelf->print_reg[1U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelf->print_reg[2U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelf->print_reg[3U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelf->print_reg[4U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelf->print_reg[5U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelf->print_reg[6U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelf->print_reg[7U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelf->print_reg[8U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelf->print_reg[9U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelf->print_reg[0xaU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelf->print_reg[0xbU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelf->print_reg[0xcU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelf->print_reg[0xdU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelf->print_reg[0xeU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelf->print_reg[0xfU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelf->print_reg[0x10U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelf->print_reg[0x11U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelf->print_reg[0x12U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelf->print_reg[0x13U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelf->print_reg[0x14U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelf->print_reg[0x15U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelf->print_reg[0x16U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelf->print_reg[0x17U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelf->print_reg[0x18U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelf->print_reg[0x19U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelf->print_reg[0x1aU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelf->print_reg[0x1bU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelf->print_reg[0x1cU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelf->print_reg[0x1dU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelf->print_reg[0x1eU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelf->print_reg[0x1fU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__regist_17 
        = vlSelf->top__DOT__cpu__DOT__regist_17;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__regist_17 
        = vlSelf->top__DOT__cpu__DOT__regist_17;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__instr 
        = vlSelf->top__DOT__cpu__DOT__instr;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__instr;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not) 
            << 3U) | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3));
    vlSelf->top__DOT__cpu__DOT__Imm = ((0x40U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                        ? ((0x20U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                            ? ((0x10U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((0x400000U 
                                                        & (vlSelf->top__DOT__cpu__DOT__instr 
                                                           >> 9U)) 
                                                       | ((0x3ff000U 
                                                           & vlSelf->top__DOT__cpu__DOT__instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__instr 
                                                                 >> 0xbU)) 
                                                             | (0x7f8U 
                                                                & (vlSelf->top__DOT__cpu__DOT__instr 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSelf->top__DOT__cpu__DOT__instr 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__cpu__DOT__instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__cpu__DOT__instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__cpu__DOT__instr 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))))
                                            : 0U) : 
                                       ((0x20U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                         ? ((0x10U 
                                             & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__instr 
                                                                 >> 0x1fU))) 
                                                     << 0xbU) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->top__DOT__cpu__DOT__instr 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->top__DOT__cpu__DOT__instr 
                                                             >> 7U))))
                                                    : 0U)
                                                   : 0U))))
                                         : ((0x10U 
                                             & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                             ? ((8U 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   (((1U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3)) 
                                                     || (5U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3)))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__cpu__DOT__instr 
                                                        >> 0x14U))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__instr 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->top__DOT__cpu__DOT__instr 
                                                           >> 0x14U))))
                                                    : 0U)
                                                   : 0U)))
                                             : ((8U 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__instr 
                                                                 >> 0x1fU))) 
                                                     << 0xbU) 
                                                    | (0x7ffU 
                                                       & (vlSelf->top__DOT__cpu__DOT__instr 
                                                          >> 0x14U)))
                                                    : 0U)
                                                   : 0U))))));
    vlSelf->top__DOT__cpu__DOT__IRWrite = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                 >> 8U));
    vlSelf->top__DOT__cpu__DOT__MemWrite = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                  >> 0xaU));
    vlSelf->top__DOT__cpu__DOT__RegWrite = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                  >> 1U));
    vlSelf->is_halted = (1U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord));
    vlSelf->top__DOT__cpu__DOT__PCwriteCond = (1U & 
                                               ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                >> 0xeU));
    vlSelf->top__DOT__cpu__DOT__PCWrite = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                 >> 0xdU));
    vlSelf->top__DOT__cpu__DOT__MemtoReg = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                  >> 9U));
    vlSelf->top__DOT__cpu__DOT__PCSource = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                  >> 7U));
    vlSelf->top__DOT__cpu__DOT__MemRead = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                 >> 0xbU));
    vlSelf->top__DOT__cpu__DOT__IorD = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                              >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__ALUSrcB = (3U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                 >> 3U));
    vlSelf->top__DOT__cpu__DOT__ALUSrcA = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                                 >> 2U));
    vlSelf->top__DOT__cpu__DOT__ALUOp = (3U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord) 
                                               >> 5U));
    vlSelf->top__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__print_reg[0x10U] = vlSelf->print_reg
        [0x10U];
    vlSelf->top__DOT__print_reg[0x11U] = vlSelf->print_reg
        [0x11U];
    vlSelf->top__DOT__print_reg[0x12U] = vlSelf->print_reg
        [0x12U];
    vlSelf->top__DOT__print_reg[0x13U] = vlSelf->print_reg
        [0x13U];
    vlSelf->top__DOT__print_reg[0x14U] = vlSelf->print_reg
        [0x14U];
    vlSelf->top__DOT__print_reg[0x15U] = vlSelf->print_reg
        [0x15U];
    vlSelf->top__DOT__print_reg[0x16U] = vlSelf->print_reg
        [0x16U];
    vlSelf->top__DOT__print_reg[0x17U] = vlSelf->print_reg
        [0x17U];
    vlSelf->top__DOT__print_reg[0x18U] = vlSelf->print_reg
        [0x18U];
    vlSelf->top__DOT__print_reg[0x19U] = vlSelf->print_reg
        [0x19U];
    vlSelf->top__DOT__print_reg[0x1aU] = vlSelf->print_reg
        [0x1aU];
    vlSelf->top__DOT__print_reg[0x1bU] = vlSelf->print_reg
        [0x1bU];
    vlSelf->top__DOT__print_reg[0x1cU] = vlSelf->print_reg
        [0x1cU];
    vlSelf->top__DOT__print_reg[0x1dU] = vlSelf->print_reg
        [0x1dU];
    vlSelf->top__DOT__print_reg[0x1eU] = vlSelf->print_reg
        [0x1eU];
    vlSelf->top__DOT__print_reg[0x1fU] = vlSelf->print_reg
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__cpu__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__cpu__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__cpu__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__cpu__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__cpu__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__cpu__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__cpu__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__cpu__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__cpu__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x10U] = 
        vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x11U] = 
        vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x12U] = 
        vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x13U] = 
        vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x14U] = 
        vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x15U] = 
        vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x16U] = 
        vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x17U] = 
        vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x18U] = 
        vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x19U] = 
        vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1aU] = 
        vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1bU] = 
        vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1cU] = 
        vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1dU] = 
        vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1eU] = 
        vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1fU] = 
        vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelf->print_reg[0U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelf->print_reg[1U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelf->print_reg[2U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelf->print_reg[3U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelf->print_reg[4U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelf->print_reg[5U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelf->print_reg[6U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelf->print_reg[7U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelf->print_reg[8U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelf->print_reg[9U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelf->print_reg[0xaU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelf->print_reg[0xbU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelf->print_reg[0xcU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelf->print_reg[0xdU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelf->print_reg[0xeU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelf->print_reg[0xfU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__Imm;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D2 = vlSelf->top__DOT__cpu__DOT__Imm;
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__irwrite 
        = vlSelf->top__DOT__cpu__DOT__IRWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__irwrite 
        = vlSelf->top__DOT__cpu__DOT__IRWrite;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__memwrite 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__regwrite 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pcwritecond 
        = vlSelf->top__DOT__cpu__DOT__PCwriteCond;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pcwrite 
        = vlSelf->top__DOT__cpu__DOT__PCWrite;
    if (vlSelf->top__DOT__cpu__DOT__MemtoReg) {
        vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__S = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__memtoreg = 1U;
        vlSelf->top__DOT__cpu__DOT__write_data = vlSelf->top__DOT__cpu__DOT__MDR;
    } else {
        vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__S = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__memtoreg = 0U;
        vlSelf->top__DOT__cpu__DOT__write_data = vlSelf->top__DOT__cpu__DOT__ALUOut;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pcsource 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__S = vlSelf->top__DOT__cpu__DOT__PCSource;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__memread 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    if (vlSelf->top__DOT__cpu__DOT__IorD) {
        vlSelf->top__DOT__cpu__DOT__Address__DOT__S = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__iord = 1U;
        vlSelf->top__DOT__cpu__DOT__address = vlSelf->top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelf->top__DOT__cpu__DOT__Address__DOT__S = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__iord = 0U;
        vlSelf->top__DOT__cpu__DOT__address = vlSelf->top__DOT__cpu__DOT__curr_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__S = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alusrcB 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    vlSelf->top__DOT__cpu__DOT__alu_src2 = ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                 ? 0U
                                                 : vlSelf->top__DOT__cpu__DOT__Imm)
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                 ? 4U
                                                 : vlSelf->top__DOT__cpu__DOT__B));
    if (vlSelf->top__DOT__cpu__DOT__ALUSrcA) {
        vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__S = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alusrcA = 1U;
        vlSelf->top__DOT__cpu__DOT__alu_src1 = vlSelf->top__DOT__cpu__DOT__A;
    } else {
        vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__S = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alusrcA = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_src1 = vlSelf->top__DOT__cpu__DOT__curr_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__aluop 
        = vlSelf->top__DOT__cpu__DOT__ALUOp;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control_op 
        = vlSelf->top__DOT__cpu__DOT__ALUOp;
    __Vtableidx2 = ((((IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not)
                       ? 1U : 0U) << 5U) | (((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3) 
                                             << 2U) 
                                            | (IData)(vlSelf->top__DOT__cpu__DOT__ALUOp)));
    vlSelf->top__DOT__cpu__DOT__alu_control = Vtop__ConstPool__TABLE_h4098eea6_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__Y 
        = vlSelf->top__DOT__cpu__DOT__write_data;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__write_data;
    vlSelf->top__DOT__cpu__DOT__Address__DOT__Y = vlSelf->top__DOT__cpu__DOT__address;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = vlSelf->top__DOT__cpu__DOT__address;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__address, 2U);
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__Y = vlSelf->top__DOT__cpu__DOT__alu_src2;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__in_2 = vlSelf->top__DOT__cpu__DOT__alu_src2;
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__Y = vlSelf->top__DOT__cpu__DOT__alu_src1;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__in_1 = vlSelf->top__DOT__cpu__DOT__alu_src1;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_control;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__control = vlSelf->top__DOT__cpu__DOT__alu_control;
    vlSelf->top__DOT__cpu__DOT__bcond = ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                          ? (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                             == vlSelf->top__DOT__cpu__DOT__alu_src2)
                                          : ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                              ? (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                 != vlSelf->top__DOT__cpu__DOT__alu_src2)
                                              : ((9U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                  ? 
                                                 (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                  < vlSelf->top__DOT__cpu__DOT__alu_src2)
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control)) 
                                                  && (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                      >= vlSelf->top__DOT__cpu__DOT__alu_src2)))));
    vlSelf->top__DOT__cpu__DOT__alu_result = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                               ? (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                  + vlSelf->top__DOT__cpu__DOT__alu_src2)
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                   - vlSelf->top__DOT__cpu__DOT__alu_src2)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                    ? 
                                                   (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                    & vlSelf->top__DOT__cpu__DOT__alu_src2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                     | vlSelf->top__DOT__cpu__DOT__alu_src2)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_src1 
                                                      ^ vlSelf->top__DOT__cpu__DOT__alu_src2)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                       ? 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_src1, vlSelf->top__DOT__cpu__DOT__alu_src2)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                        ? 
                                                       VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_src1, vlSelf->top__DOT__cpu__DOT__alu_src2)
                                                        : 0U)))))));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__mem_data = ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                             ? vlSelf->top__DOT__cpu__DOT__memory__DOT__mem
                                            [(0x3fffU 
                                              & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                             : 0U);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__bcond 
        = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__clkPC = (((~ (IData)(vlSelf->top__DOT__cpu__DOT__bcond)) 
                                          & (IData)(vlSelf->top__DOT__cpu__DOT__PCwriteCond)) 
                                         | (IData)(vlSelf->top__DOT__cpu__DOT__PCWrite));
    vlSelf->top__DOT__cpu__DOT__alu__DOT__result = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__D0 = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__next_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__PCSource)
                                            ? vlSelf->top__DOT__cpu__DOT__ALUOut
                                            : vlSelf->top__DOT__cpu__DOT__alu_result);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = vlSelf->top__DOT__cpu__DOT__mem_data;
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__memdata 
        = vlSelf->top__DOT__cpu__DOT__mem_data;
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__memdata 
        = vlSelf->top__DOT__cpu__DOT__mem_data;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clkPC = vlSelf->top__DOT__cpu__DOT__clkPC;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__Y = vlSelf->top__DOT__cpu__DOT__next_pc;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__clkPC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__curr_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regist_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__PCwriteCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCSource = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clkPC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__curr_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Address__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Address__DOT__D0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Address__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Address__DOT__Y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__irwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__memdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__inst_register__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__memdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_data_register__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__Y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__regist_17 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_buffer__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__Y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__S = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__Y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__regist_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pcwritecond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pcwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__iord = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__memread = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__memtoreg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__irwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pcsource = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alusrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alusrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control_op = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__control = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_out__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__D0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PCSRC__DOT__Y = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
