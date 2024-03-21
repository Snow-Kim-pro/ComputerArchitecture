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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
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

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_haaa80d96_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf1f34e79_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4390399c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h75b8279d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4608f605_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hbd434190_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hcf214628_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    vlSelf->top__DOT__cpu__DOT__Instr = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3ffU & (vlSelf->top__DOT__cpu__DOT__current_pc 
                    >> 2U))];
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                 >> 0xfU))]
                                             : 0U);
    __Vtableidx2 = (((0x13U == (0x7fU & vlSelf->top__DOT__cpu__DOT__Instr)) 
                     << 6U) | ((0x20U & (vlSelf->top__DOT__cpu__DOT__Instr 
                                         >> 0x19U)) 
                               | (((0x33U == (0x7fU 
                                              & vlSelf->top__DOT__cpu__DOT__Instr)) 
                                   << 4U) | ((0xeU 
                                              & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                 >> 0xbU)) 
                                             | (0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__Instr))))));
    vlSelf->top__DOT__cpu__DOT__alu_op = Vtop__ConstPool__TABLE_haaa80d96_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__rs2_out = ((0U != (0x1fU 
                                                   & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                      >> 0x14U)))
                                            ? vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                >> 0x14U))]
                                            : 0U);
    vlSelf->top__DOT__cpu__DOT__Imm = ((0x40U & vlSelf->top__DOT__cpu__DOT__Instr)
                                        ? ((0x20U & vlSelf->top__DOT__cpu__DOT__Instr)
                                            ? ((0x10U 
                                                & vlSelf->top__DOT__cpu__DOT__Instr)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlSelf->top__DOT__cpu__DOT__Instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->top__DOT__cpu__DOT__Instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__cpu__DOT__Instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__cpu__DOT__Instr)
                                                       ? 
                                                      ((0x400000U 
                                                        & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                           >> 9U)) 
                                                       | ((0x3ff000U 
                                                           & vlSelf->top__DOT__cpu__DOT__Instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                 >> 0xbU)) 
                                                             | (0x7f8U 
                                                                & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__cpu__DOT__Instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__cpu__DOT__Instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__cpu__DOT__Instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__cpu__DOT__Instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__cpu__DOT__Instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))))
                                            : 0U) : 
                                       ((0x20U & vlSelf->top__DOT__cpu__DOT__Instr)
                                         ? ((0x10U 
                                             & vlSelf->top__DOT__cpu__DOT__Instr)
                                             ? 0U : 
                                            ((8U & vlSelf->top__DOT__cpu__DOT__Instr)
                                              ? 0U : 
                                             ((4U & vlSelf->top__DOT__cpu__DOT__Instr)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->top__DOT__cpu__DOT__Instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__cpu__DOT__Instr)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                 >> 0x1fU))) 
                                                     << 0xbU) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                             >> 7U))))
                                                    : 0U)
                                                   : 0U))))
                                         : ((0x10U 
                                             & vlSelf->top__DOT__cpu__DOT__Instr)
                                             ? ((8U 
                                                 & vlSelf->top__DOT__cpu__DOT__Instr)
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & vlSelf->top__DOT__cpu__DOT__Instr)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__cpu__DOT__Instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__cpu__DOT__Instr)
                                                    ? 
                                                   (((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                          >> 0xcU))) 
                                                     || (5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                             >> 0xcU))))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                        >> 0x14U))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                           >> 0x14U))))
                                                    : 0U)
                                                   : 0U)))
                                             : ((8U 
                                                 & vlSelf->top__DOT__cpu__DOT__Instr)
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & vlSelf->top__DOT__cpu__DOT__Instr)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__cpu__DOT__Instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__cpu__DOT__Instr)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__Instr 
                                                                 >> 0x1fU))) 
                                                     << 0xbU) 
                                                    | (0x7ffU 
                                                       & (vlSelf->top__DOT__cpu__DOT__Instr 
                                                          >> 0x14U)))
                                                    : 0U)
                                                   : 0U))))));
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__cpu__DOT__Instr);
    vlSelf->top__DOT__cpu__DOT__JAL = Vtop__ConstPool__TABLE_hf1f34e79_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__JALR = Vtop__ConstPool__TABLE_h4390399c_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__Branch = Vtop__ConstPool__TABLE_he4685dc5_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__MemRead = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__MemtoReg = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__MemWrite = Vtop__ConstPool__TABLE_ha96ed2bf_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__ALUSrc = Vtop__ConstPool__TABLE_h75b8279d_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__RegWrite = Vtop__ConstPool__TABLE_h4608f605_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__PCtoReg = Vtop__ConstPool__TABLE_hbd434190_0
        [__Vtableidx1];
    vlSelf->is_halted = Vtop__ConstPool__TABLE_hcf214628_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelf->top__DOT__cpu__DOT__ALUSrc)
                                             ? vlSelf->top__DOT__cpu__DOT__Imm
                                             : vlSelf->top__DOT__cpu__DOT__rs2_out);
    vlSelf->top__DOT__cpu__DOT__alu_result = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                               ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  + vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                   - vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                    & vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                     | vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      ^ vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                       ? 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                        ? 
                                                       VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                        : 0U)))))));
    vlSelf->top__DOT__cpu__DOT__pc_result = ((((IData)(vlSelf->top__DOT__cpu__DOT__Branch) 
                                               & ((7U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                   == vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                    != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                     < vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)) 
                                                     && (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                         >= vlSelf->top__DOT__cpu__DOT__alu_in_2)))))) 
                                              | (IData)(vlSelf->top__DOT__cpu__DOT__JAL))
                                              ? (vlSelf->top__DOT__cpu__DOT__Imm 
                                                 + vlSelf->top__DOT__cpu__DOT__current_pc)
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__cpu__DOT__current_pc));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->top__DOT__cpu__DOT__pc_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__JALR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__JAL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
