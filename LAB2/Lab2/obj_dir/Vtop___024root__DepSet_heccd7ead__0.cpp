// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_h9c9156e7_0;
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__dmem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                        & vlSelf->top__DOT__cpu__DOT__dmem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__dmem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__dmem__DOT__i);
        }
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[(0x3ffU 
                                                        & vlSelf->top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_h9c9156e7_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if (vlSelf->top__DOT__cpu__DOT__MemWrite) {
        __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
            = vlSelf->top__DOT__cpu__DOT__rs2_out;
        __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
            = (0x3fffU & (vlSelf->top__DOT__cpu__DOT__alu_result 
                          >> 2U));
    }
    if (vlSelf->top__DOT__cpu__DOT__RegWrite) {
        __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__cpu__DOT__PCtoReg)
                ? ((IData)(4U) + vlSelf->top__DOT__cpu__DOT__current_pc)
                : ((IData)(vlSelf->top__DOT__cpu__DOT__MemtoReg)
                    ? ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                        ? vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem
                       [(0x3fffU & (vlSelf->top__DOT__cpu__DOT__alu_result 
                                    >> 2U))] : vlSelf->top__DOT__cpu__DOT__alu_result)
                    : vlSelf->top__DOT__cpu__DOT__alu_result));
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__cpu__DOT__Instr 
                        >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__current_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__JALR)
                                                   ? vlSelf->top__DOT__cpu__DOT__alu_result
                                                   : vlSelf->top__DOT__cpu__DOT__pc_result);
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    }
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
