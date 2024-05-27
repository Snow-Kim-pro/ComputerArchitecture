// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__clk;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_h79137a98_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtop__ConstPool__TABLE_h4098eea6_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v0;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32;
    __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v0;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32 = 0;
    IData/*24:0*/ __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32;
    __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v0;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32;
    __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 = 0;
    CData/*4:0*/ __Vdly__top__DOT__cpu__DOT__branchpredictor__DOT__BHSR;
    __Vdly__top__DOT__cpu__DOT__branchpredictor__DOT__BHSR = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__total_accesses;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__total_accesses = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v0 = 0;
    CData/*1:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__state;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__state = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag__v16 = 0;
    CData/*1:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__tag__v16;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__tag__v16 = 0;
    IData/*25:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag__v16;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v16 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v16 = 0;
    CData/*2:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v16;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v16 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v17;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v17 = 0;
    CData/*2:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v17;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v17 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v17;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v17 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v18;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v18 = 0;
    CData/*2:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v18;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v18 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v18;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v18 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v19;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v19 = 0;
    CData/*2:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v19;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v19 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v19;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v19 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v20;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v20 = 0;
    CData/*1:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__lru__v20;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__lru__v20 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v20;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v20 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v16 = 0;
    CData/*1:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v16;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v16 = 0;
    CData/*6:0*/ __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__data__v16;
    __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__data__v16 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v16;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v16 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v17;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v17 = 0;
    CData/*1:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v17;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v17 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17);
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v17;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v17 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0;
    CData/*1:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__valid__v16;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0;
    CData/*1:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v16;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v16;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v17;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v17 = 0;
    CData/*1:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v17;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v17 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v17;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v17 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v0 = 0U;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_count;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__total_accesses 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__total_accesses;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0U;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__state = vlSelf->top__DOT__cpu__DOT__cache__DOT__state;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v16 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32 = 0U;
    __Vdly__top__DOT__cpu__DOT__branchpredictor__DOT__BHSR 
        = vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__BHSR;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v16 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v17 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v18 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v19 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v20 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v17 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v16 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v17 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__i = 0x20U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__j = 4U;
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[(0x3fffU 
                                                        & vlSelf->top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_h79137a98_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
        if (((IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid) 
             & (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__m = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__m = 2U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__m = 3U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__m = 4U;
            if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [0U] < vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index])) {
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v16 
                    = (7U & ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                             [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                             [0U]));
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v16 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            }
            if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [1U] < vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index])) {
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v17 
                    = (7U & ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                             [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                             [1U]));
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v17 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v17 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            }
            if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [2U] < vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index])) {
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v18 
                    = (7U & ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                             [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                             [2U]));
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v18 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v18 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            }
            if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [3U] < vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index])) {
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v19 
                    = (7U & ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                             [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                             [3U]));
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v19 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v19 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            }
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v20 = 1U;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__lru__v20 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v20 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            if (vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write) {
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 1U;
                __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v16 
                    = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v16 = 1U;
                __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__data__v16 
                    = (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset), 5U));
                __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            }
        }
    } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
        if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid) {
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v17 = 1U;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v17 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v17 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[0U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[1U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[2U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[3U];
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v17 = 1U;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v17 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v17 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
        if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
            if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid) {
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 1U;
                __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__valid__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__input_tag;
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v16 = 1U;
                __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__tag__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag__v16 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write) 
             & (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U];
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 
                = (0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr);
        }
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__predict_reset))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_jalr = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_jal = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_branch = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_prediction = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_prediction = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))))) {
            vlSelf->top__DOT__cpu__DOT__ID_EX_jalr 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 0xaU));
            vlSelf->top__DOT__cpu__DOT__ID_EX_jal = 
                (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                       >> 0xbU));
            vlSelf->top__DOT__cpu__DOT__ID_EX_branch 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 9U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
                = vlSelf->top__DOT__cpu__DOT__rs1_dout;
            vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 4U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data 
                = vlSelf->top__DOT__cpu__DOT__rs2_dout;
            vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op 
                = (3U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 1U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_prediction 
                = vlSelf->top__DOT__cpu__DOT__IF_ID_prediction;
            vlSelf->top__DOT__cpu__DOT__ID_EX_imm = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
            vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = 
                (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                          >> 0xfU));
            vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = 
                (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                          >> 0x14U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_pc = vlSelf->top__DOT__cpu__DOT__IF_ID_pc;
            vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
                = ((8U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                          >> 0x1bU)) | (7U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0xcU)));
        }
        if ((((IData)(vlSelf->top__DOT__cpu__DOT__if_id_write) 
              & (~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall))) 
             & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage)))) {
            vlSelf->top__DOT__cpu__DOT__IF_ID_prediction 
                = vlSelf->top__DOT__cpu__DOT__prediction;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][0U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][1U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][2U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][3U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i);
        }
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__state = 0U;
        __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__branchpredictor__DOT__BHSR = 0U;
        __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v0 = 1U;
        __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__total_accesses = 0U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count = 0U;
        vlSelf->hit_ratio = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_is_branch = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = 0U;
    } else {
        if ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
            if (((IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid) 
                 & (~ (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid)))) {
                __Vdly__top__DOT__cpu__DOT__cache__DOT__state 
                    = (vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty
                       [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                       [vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index]
                        ? 2U : 3U);
            }
            if (((IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid) 
                 & (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid))) {
                __Vdly__top__DOT__cpu__DOT__cache__DOT__total_accesses 
                    = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__total_accesses);
            }
        } else {
            if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
                if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_write_done) {
                    __Vdly__top__DOT__cpu__DOT__cache__DOT__state = 3U;
                }
            } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
                if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid) {
                    __Vdly__top__DOT__cpu__DOT__cache__DOT__state = 0U;
                }
            } else {
                __Vdly__top__DOT__cpu__DOT__cache__DOT__state = 0U;
            }
            if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state))) {
                if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid) {
                    __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count 
                        = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_count);
                }
            }
        }
        if (vlSelf->top__DOT__cpu__DOT__valid) {
            if (vlSelf->top__DOT__cpu__DOT__taken) {
                __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32 
                    = vlSelf->top__DOT__cpu__DOT__pc_src2;
                __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32 
                    = vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__exidx;
                __Vdly__top__DOT__cpu__DOT__branchpredictor__DOT__BHSR 
                    = (0x1fU & (1U | VL_SHIFTL_III(5,32,32, (IData)(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__BHSR), 1U)));
                __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32 
                    = vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__extag;
                __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32 
                    = vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__exidx;
                __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 
                    = (3U & ((3U > vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht
                              [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx])
                              ? ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht
                                 [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx])
                              : vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht
                             [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx]));
            } else {
                __Vdly__top__DOT__cpu__DOT__branchpredictor__DOT__BHSR 
                    = (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__BHSR), 1U));
                __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 
                    = (3U & ((0U < vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht
                              [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx])
                              ? (vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht
                                 [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx] 
                                 - (IData)(1U)) : vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht
                             [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx]));
            }
            __Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32 
                = vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx;
        }
        if ((0U < vlSelf->top__DOT__cpu__DOT__cache__DOT__total_accesses)) {
            vlSelf->hit_ratio = VL_DIV_III(32, ((IData)(0x64U) 
                                                * (vlSelf->top__DOT__cpu__DOT__cache__DOT__total_accesses 
                                                   - vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_count)), vlSelf->top__DOT__cpu__DOT__cache__DOT__total_accesses);
        }
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))))) {
            vlSelf->top__DOT__cpu__DOT__EX_MEM_is_branch 
                = vlSelf->top__DOT__cpu__DOT__bcond;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
        }
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__predict_reset))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_pc = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))))) {
            vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 7U));
        }
        if ((((IData)(vlSelf->top__DOT__cpu__DOT__if_id_write) 
              & (~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall))) 
             & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage)))) {
            vlSelf->top__DOT__cpu__DOT__IF_ID_pc = vlSelf->top__DOT__cpu__DOT__curr_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_pc4 = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0 = 0U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_pc4 = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = 0U;
        vlSelf->top__DOT__cpu__DOT__curr_pc = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage)))) {
            vlSelf->top__DOT__cpu__DOT__MEM_WB_is_ecall 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_is_ecall;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
                = vlSelf->top__DOT__cpu__DOT__mem_dout;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_pc4 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_pc4;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
        }
        if (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived) 
             & (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0x32U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr 
                = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__cache__DOT__write_addr, 4U);
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[0U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[1U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[2U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[3U];
        } else if ((0U < vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter)) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                = (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                   - (IData)(1U));
        } else {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))))) {
            vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data 
                = vlSelf->top__DOT__cpu__DOT__alu_src2_out;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_is_ecall 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_is_ecall;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_pc_ro_reg;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_pc4 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_pc4;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                = vlSelf->top__DOT__cpu__DOT__alu_result;
        }
        if (vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__pcwrite) {
            vlSelf->top__DOT__cpu__DOT__curr_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
        }
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__predict_reset))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc_ro_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc4 = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_pc4 = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))))) {
            vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 5U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_is_ecall 
                = (1U & (IData)(vlSelf->top__DOT__cpu__DOT__control_output));
            vlSelf->top__DOT__cpu__DOT__ID_EX_pc_ro_reg 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 8U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 6U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_pc4 = vlSelf->top__DOT__cpu__DOT__IF_ID_pc4;
        }
        if ((((IData)(vlSelf->top__DOT__cpu__DOT__if_id_write) 
              & (~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall))) 
             & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage)))) {
            vlSelf->top__DOT__cpu__DOT__IF_ID_pc4 = vlSelf->top__DOT__cpu__DOT__pc_add4;
        }
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[3U][3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__valid__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__valid__v16][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__valid__v16] = 1U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[3U][3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__tag__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__tag[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__tag__v16][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__tag__v16] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__tag__v16;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v0) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table[__Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__btb_table__v32;
    }
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__BHSR 
        = __Vdly__top__DOT__cpu__DOT__branchpredictor__DOT__BHSR;
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[0U][0U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[0U][1U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[0U][2U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[0U][3U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[1U][0U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[1U][1U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[1U][2U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[1U][3U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[2U][0U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[2U][1U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[2U][2U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[2U][3U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[3U][0U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[3U][1U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[3U][2U] = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[3U][3U] = 4U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v16][0U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v16;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v17) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v17][1U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v17;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v18) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v18][2U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v18;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v19) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v19][3U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__lru__v19;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__lru__v20) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__lru[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__lru__v20][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__lru__v20] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[3U][3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v16) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v16] = 1U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__dirty__v17) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__dirty__v17][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__dirty__v17] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v0) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[1U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[2U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[3U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[4U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[5U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[6U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[7U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[8U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[9U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0xaU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0xbU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0xcU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0xdU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0xeU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0xfU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x10U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x11U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x12U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x13U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x14U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x15U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x16U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x17U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x18U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x19U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x1aU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x1bU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x1cU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x1dU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x1eU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[0x1fU] = 0x1ffffffU;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table[__Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__tag_table__v32;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v0) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[1U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[2U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[3U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[4U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[5U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[6U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[7U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[8U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[9U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0xaU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0xbU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0xcU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0xdU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0xeU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0xfU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x10U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x11U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x12U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x13U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x14U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x15U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x16U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x17U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x18U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x19U] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x1aU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x1bU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x1cU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x1dU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x1eU] = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[0x1fU] = 1U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht[__Vdlyvdim0__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__branchpredictor__DOT__pht__v32;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][0U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][1U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][2U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][3U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[0U][3U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[1U][3U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[2U][3U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][2U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][2U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][3U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[3U][3U][3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v16) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__data__v16), 
                        vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                        [__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v16]
                        [__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v16], __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v16);
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data__v17) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v17][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v17][0U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v17][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v17][1U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v17][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v17][2U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data__v17][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__data__v17][3U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data__v17[3U];
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__total_accesses 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__total_accesses;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_count 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__state = __Vdly__top__DOT__cpu__DOT__cache__DOT__state;
    vlSelf->top__DOT__hit_ratio = vlSelf->hit_ratio;
    vlSelf->top__DOT__cpu__DOT__is_ready = (0U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state));
    vlSelf->top__DOT__cpu__DOT__PCS2__DOT__S = vlSelf->top__DOT__cpu__DOT__ID_EX_jalr;
    vlSelf->top__DOT__cpu__DOT__valid = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch) 
                                         | ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_jal) 
                                            | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_jalr)));
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D0 = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__S 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D0 = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op;
    vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__prediction 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_prediction;
    vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__D1 = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__S 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg;
    vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__S = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D1 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_pc4;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__rs2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__ex_addr 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__extag 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_pc >> 7U);
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__exidx 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__ID_EX_pc 
                    >> 2U));
    vlSelf->top__DOT__cpu__DOT__pc_addr = (vlSelf->top__DOT__cpu__DOT__ID_EX_imm 
                                           + vlSelf->top__DOT__cpu__DOT__ID_EX_pc);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not 
        = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input) 
                 >> 3U));
    vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__D0 = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0;
    vlSelf->top__DOT__cpu__DOT__wb_dout = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                            ? vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1
                                            : vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    vlSelf->top__DOT__cpu__DOT__hit_ratio = vlSelf->top__DOT__hit_ratio;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_ready 
        = vlSelf->top__DOT__cpu__DOT__is_ready;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__valid 
        = vlSelf->top__DOT__cpu__DOT__valid;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht_idx 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__exidx) 
           ^ (IData)(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__BHSR));
    vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__pc_addr;
    vlSelf->top__DOT__cpu__DOT__PCS1__DOT__D1 = vlSelf->top__DOT__cpu__DOT__pc_addr;
    __Vtableidx2 = ((((IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not)
                       ? 1U : 0U) << 5U) | (((IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3) 
                                             << 2U) 
                                            | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op)));
    vlSelf->top__DOT__cpu__DOT__alu_control = Vtop__ConstPool__TABLE_h4098eea6_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D0 
        = vlSelf->top__DOT__cpu__DOT__wb_dout;
    vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__Y = vlSelf->top__DOT__cpu__DOT__wb_dout;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready 
        = (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelf->top__DOT__cpu__DOT__is_input_valid = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read) 
                                                  | (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_ratio 
        = vlSelf->top__DOT__cpu__DOT__hit_ratio;
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_memread 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__pre_pc 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_pc;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control 
        = vlSelf->top__DOT__cpu__DOT__alu_control;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__control = vlSelf->top__DOT__cpu__DOT__alu_control;
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D1 = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D1 = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset 
        = (3U & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                 >> 2U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__input_tag 
        = (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
           >> 6U);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index 
        = (3U & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                 >> 4U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_write_done 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_input_valid 
        = ((0U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__is_input_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__check_change_index = 4U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__all_valid = 1U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__l = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelf->top__DOT__cpu__DOT__cache__DOT__l)) {
            if ((1U & (~ vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
                       [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                       [(3U & vlSelf->top__DOT__cpu__DOT__cache__DOT__l)]))) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__check_change_index 
                    = (7U & vlSelf->top__DOT__cpu__DOT__cache__DOT__l);
                vlSelf->top__DOT__cpu__DOT__cache__DOT__all_valid = 0U;
                goto __Vlabel1;
            }
            vlSelf->top__DOT__cpu__DOT__cache__DOT__l 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__l);
        }
        __Vlabel1: ;
    }
    if (vlSelf->top__DOT__cpu__DOT__cache__DOT__all_valid) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__l = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelf->top__DOT__cpu__DOT__cache__DOT__l)) {
                if ((3U == vlSelf->top__DOT__cpu__DOT__cache__DOT__lru
                     [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                     [(3U & vlSelf->top__DOT__cpu__DOT__cache__DOT__l)])) {
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__check_change_index 
                        = (7U & vlSelf->top__DOT__cpu__DOT__cache__DOT__l);
                    goto __Vlabel2;
                }
                vlSelf->top__DOT__cpu__DOT__cache__DOT__l 
                    = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__l);
            }
            __Vlabel2: ;
        }
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index = 4U;
    if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
         [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
         [0U] & (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [0U] == vlSelf->top__DOT__cpu__DOT__cache__DOT__input_tag))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index = 0U;
    }
    if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
         [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
         [1U] & (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [1U] == vlSelf->top__DOT__cpu__DOT__cache__DOT__input_tag))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index = 1U;
    }
    if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
         [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
         [2U] & (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [2U] == vlSelf->top__DOT__cpu__DOT__cache__DOT__input_tag))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index = 2U;
    }
    if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__valid
         [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
         [3U] & (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                 [3U] == vlSelf->top__DOT__cpu__DOT__cache__DOT__input_tag))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index = 3U;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_write_done 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_write_done;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_input_valid;
    if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[0U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[1U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[2U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[3U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][3U];
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[3U] = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read 
        = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid)) 
           & (3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state)));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write 
        = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_output_valid)) 
           & (2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__state)));
    vlSelf->top__DOT__cpu__DOT__is_correct__DOT__D1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc4;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__curr_pc = vlSelf->top__DOT__cpu__DOT__curr_pc;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pc_addr 
        = vlSelf->top__DOT__cpu__DOT__curr_pc;
    vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__curr_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = vlSelf->top__DOT__cpu__DOT__curr_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__curr_pc, 2U);
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__index 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__curr_pc 
                    >> 2U));
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag 
        = (vlSelf->top__DOT__cpu__DOT__curr_pc >> 7U);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index 
        = ((4U > (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__check_change_index))
            ? (3U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__check_change_index))
            : 0U);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index 
        = ((4U > (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index))
            ? (3U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index))
            : 0U);
    vlSelf->top__DOT__cpu__DOT__is_output_valid = (4U 
                                                   != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit_index));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_dout[3U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read) 
            | (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write)) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_mem_input_valid));
    vlSelf->top__DOT__cpu__DOT__pc_add4 = ((IData)(4U) 
                                           + vlSelf->top__DOT__cpu__DOT__curr_pc);
    if (((vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag_table
          [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__index] 
          == vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__tag) 
         & (1U < vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__pht
            [((IData)(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__index) 
              ^ (IData)(vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__BHSR))]))) {
        vlSelf->top__DOT__cpu__DOT__prediction = 1U;
        vlSelf->top__DOT__cpu__DOT__hit = 1U;
        vlSelf->top__DOT__cpu__DOT__predicted_target 
            = vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__btb_table
            [vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__index];
    } else {
        vlSelf->top__DOT__cpu__DOT__prediction = 0U;
        vlSelf->top__DOT__cpu__DOT__hit = 0U;
        vlSelf->top__DOT__cpu__DOT__predicted_target = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index][0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index][1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index][2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
        [vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index][3U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__write_addr 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write)
            ? ((vlSelf->top__DOT__cpu__DOT__cache__DOT__tag
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__change_index] 
                << 6U) | ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index) 
                          << 4U)) : vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out);
    if (vlSelf->top__DOT__cpu__DOT__is_output_valid) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit = 1U;
        vlSelf->top__DOT__cpu__DOT__is_hit = 1U;
        vlSelf->top__DOT__cpu__DOT__mem_dout = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset), 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                                                  [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                                                  [vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index][
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset), 5U))))) 
                                                | (vlSelf->top__DOT__cpu__DOT__cache__DOT__data
                                                   [vlSelf->top__DOT__cpu__DOT__cache__DOT__set_index]
                                                   [vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_index][
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__block_offset), 5U))));
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit = 0U;
        vlSelf->top__DOT__cpu__DOT__is_hit = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_dout = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__pc_add4;
    vlSelf->top__DOT__cpu__DOT__BTB__DOT__D0 = vlSelf->top__DOT__cpu__DOT__pc_add4;
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__prediction 
        = vlSelf->top__DOT__cpu__DOT__prediction;
    if (vlSelf->top__DOT__cpu__DOT__hit) {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__hit = 1U;
        vlSelf->top__DOT__cpu__DOT__BTB__DOT__S = 1U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__predicted_target 
            = vlSelf->top__DOT__cpu__DOT__predicted_target;
        vlSelf->top__DOT__cpu__DOT__BTB__DOT__D1 = vlSelf->top__DOT__cpu__DOT__predicted_target;
        vlSelf->top__DOT__cpu__DOT__pc_btb = vlSelf->top__DOT__cpu__DOT__predicted_target;
    } else {
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__hit = 0U;
        vlSelf->top__DOT__cpu__DOT__BTB__DOT__S = 0U;
        vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__predicted_target 
            = vlSelf->top__DOT__cpu__DOT__predicted_target;
        vlSelf->top__DOT__cpu__DOT__BTB__DOT__D1 = vlSelf->top__DOT__cpu__DOT__predicted_target;
        vlSelf->top__DOT__cpu__DOT__pc_btb = vlSelf->top__DOT__cpu__DOT__pc_add4;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din[3U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__cache__DOT__write_addr, 4U);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = vlSelf->top__DOT__cpu__DOT__mem_dout;
    vlSelf->top__DOT__cpu__DOT__BTB__DOT__Y = vlSelf->top__DOT__cpu__DOT__pc_btb;
    vlSelf->top__DOT__cpu__DOT__PCS1__DOT__D0 = vlSelf->top__DOT__cpu__DOT__pc_btb;
    vlSelf->top__DOT__cpu__DOT__is_correct__DOT__D2 
        = vlSelf->top__DOT__cpu__DOT__pc_btb;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0U;
    if (vlSelf->clk) {
        if (vlSelf->reset) {
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
            __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    } else if (((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write) 
                & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd)))) {
        __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__write_data;
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
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
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
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
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf1f34e79_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4390399c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hbd434190_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h0c2f5105_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4cbea720_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hcf214628_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hae1c4c1c_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    SData/*11:0*/ top__DOT__cpu__DOT____Vcellinp__control_signal__D0;
    top__DOT__cpu__DOT____Vcellinp__control_signal__D0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__write_data = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg)
                                               ? vlSelf->top__DOT__cpu__DOT__MEM_WB_pc4
                                               : vlSelf->top__DOT__cpu__DOT__wb_dout);
    vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__Y 
        = vlSelf->top__DOT__cpu__DOT__write_data;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__write_data;
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D2 = vlSelf->top__DOT__cpu__DOT__write_data;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D2 = vlSelf->top__DOT__cpu__DOT__write_data;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage)))) {
            vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
        }
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))))) {
            vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
        }
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_RW 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_rd 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__predict_reset))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_inst = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall)) 
                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))))) {
            vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write 
                = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__control_output) 
                         >> 3U));
            vlSelf->top__DOT__cpu__DOT__ID_EX_rd = 
                (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                          >> 7U));
        }
        if ((((IData)(vlSelf->top__DOT__cpu__DOT__if_id_write) 
              & (~ (IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall))) 
             & (~ (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage)))) {
            vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                = vlSelf->top__DOT__cpu__DOT__inst;
        }
    }
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_RW 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__foward_A = ((((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
                                              & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
                                             & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write))
                                             ? 1U : 
                                            ((((0U 
                                                != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
                                               & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write))
                                              ? 2U : 0U));
    vlSelf->top__DOT__cpu__DOT__foward_B = ((((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
                                              & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
                                             & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write))
                                             ? 1U : 
                                            ((((0U 
                                                != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
                                               & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write))
                                              ? 2U : 0U));
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__S = vlSelf->top__DOT__cpu__DOT__foward_A;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_A 
        = vlSelf->top__DOT__cpu__DOT__foward_A;
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__foward_A))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__foward_A))
                                                 ? 0U
                                                 : vlSelf->top__DOT__cpu__DOT__write_data)
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__foward_A))
                                                 ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
                                                 : vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data));
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__S = vlSelf->top__DOT__cpu__DOT__foward_B;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_B 
        = vlSelf->top__DOT__cpu__DOT__foward_B;
    vlSelf->top__DOT__cpu__DOT__alu_src2_out = ((2U 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__foward_B))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__foward_B))
                                                  ? 0U
                                                  : vlSelf->top__DOT__cpu__DOT__write_data)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__foward_B))
                                                  ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
                                                  : vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data));
    vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__Y = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__in_1 = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__Y = vlSelf->top__DOT__cpu__DOT__alu_src2_out;
    vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D0 
        = vlSelf->top__DOT__cpu__DOT__alu_src2_out;
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src)
                                             ? vlSelf->top__DOT__cpu__DOT__ID_EX_imm
                                             : vlSelf->top__DOT__cpu__DOT__alu_src2_out);
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_rd 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__Y 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__in_2 = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__alu_result = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                               ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  + vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                   - vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                    ? 
                                                   (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                    & vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                     | vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      ^ vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                       ? 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                        ? 
                                                       VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                        : 0U)))))));
    vlSelf->top__DOT__cpu__DOT__bcond = (1U & ((7U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                ? (
                                                   (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                    == vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                    ? 
                                                   ((vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                     != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control))
                                                     ? 
                                                    ((vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                      < vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__alu_control)) 
                                                     && ((vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                          >= vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                          ? 1U
                                                          : 0U))))));
    vlSelf->top__DOT__cpu__DOT__inst = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelf->top__DOT__cpu__DOT__mem_access_stall = 
        ((~ (IData)(vlSelf->top__DOT__cpu__DOT__is_ready)) 
         & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read) 
            | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write)));
    vlSelf->top__DOT__cpu__DOT__active_mem_stage = 
        ((~ (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid)) 
         & (IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid));
    vlSelf->top__DOT__cpu__DOT__PCS2__DOT__D1 = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__result = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__PCSrc1 = (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch) 
                                           & (IData)(vlSelf->top__DOT__cpu__DOT__bcond)) 
                                          | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_jal));
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = vlSelf->top__DOT__cpu__DOT__inst;
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                 >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs1 
        = (0x6fU != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst));
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs2 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)) 
           | ((0x63U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)) 
              | (0x23U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))));
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
    vlSelf->top__DOT__cpu__DOT__jal = Vtop__ConstPool__TABLE_hf1f34e79_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__jalr = Vtop__ConstPool__TABLE_h4390399c_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__branch = Vtop__ConstPool__TABLE_he4685dc5_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = Vtop__ConstPool__TABLE_hbd434190_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__write_enable = Vtop__ConstPool__TABLE_h0c2f5105_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_ha96ed2bf_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_src = Vtop__ConstPool__TABLE_h4cbea720_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_hcf214628_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_op = Vtop__ConstPool__TABLE_hae1c4c1c_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__PCS1__DOT__S = vlSelf->top__DOT__cpu__DOT__PCSrc1;
    vlSelf->top__DOT__cpu__DOT__taken = ((IData)(vlSelf->top__DOT__cpu__DOT__PCSrc1) 
                                         | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_jalr));
    vlSelf->top__DOT__cpu__DOT__pc_src1 = ((IData)(vlSelf->top__DOT__cpu__DOT__PCSrc1)
                                            ? vlSelf->top__DOT__cpu__DOT__pc_addr
                                            : vlSelf->top__DOT__cpu__DOT__pc_btb);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((0x40U 
                                                & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | ((0xff000U 
                                                             & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x14U)))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 7U)))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((1U 
                                                           == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3)) 
                                                          || (5U 
                                                              == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3)))
                                                          ? 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                             >> 0x14U))
                                                          : 
                                                         (((- (IData)(
                                                                      (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                       >> 0x1fU))) 
                                                           << 0xbU) 
                                                          | (0x7ffU 
                                                             & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                >> 0x14U))))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__cpu__DOT__IF_ID_inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U))))));
    vlSelf->top__DOT__cpu__DOT__if_id_write = (1U & 
                                               (~ (
                                                   ((((0x1fU 
                                                       & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs1)) 
                                                    | (((0x1fU 
                                                         & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                            >> 0x14U)) 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs2))) 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read))));
    vlSelf->top__DOT__cpu__DOT__pcwrite = (1U & (~ 
                                                 (((((0x1fU 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs1)) 
                                                   | (((0x1fU 
                                                        & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U)) 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs2))) 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read))));
    vlSelf->top__DOT__cpu__DOT__control_mux = (((((0x1fU 
                                                   & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs1)) 
                                                | (((0x1fU 
                                                     & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs2))) 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal 
        = vlSelf->top__DOT__cpu__DOT__jal;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr 
        = vlSelf->top__DOT__cpu__DOT__jalr;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch 
        = vlSelf->top__DOT__cpu__DOT__branch;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg 
        = vlSelf->top__DOT__cpu__DOT__pc_to_reg;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__write_enable;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__mem_read;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg 
        = vlSelf->top__DOT__cpu__DOT__mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
        = vlSelf->top__DOT__cpu__DOT__alu_src;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    top__DOT__cpu__DOT____Vcellinp__control_signal__D0 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__jal) 
            << 0xbU) | (((IData)(vlSelf->top__DOT__cpu__DOT__jalr) 
                         << 0xaU) | (((IData)(vlSelf->top__DOT__cpu__DOT__branch) 
                                      << 9U) | (((IData)(vlSelf->top__DOT__cpu__DOT__pc_to_reg) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->top__DOT__cpu__DOT__mem_read) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT__cpu__DOT__mem_to_reg) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT__cpu__DOT__mem_write) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT__cpu__DOT__alu_src) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->top__DOT__cpu__DOT__write_enable) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT__cpu__DOT__is_ecall)))))))))));
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__taken 
        = vlSelf->top__DOT__cpu__DOT__taken;
    vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__taken 
        = vlSelf->top__DOT__cpu__DOT__taken;
    vlSelf->top__DOT__cpu__DOT__PCS1__DOT__Y = vlSelf->top__DOT__cpu__DOT__pc_src1;
    vlSelf->top__DOT__cpu__DOT__PCS2__DOT__D0 = vlSelf->top__DOT__cpu__DOT__pc_src1;
    vlSelf->top__DOT__cpu__DOT__pc_src2 = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_jalr)
                                            ? vlSelf->top__DOT__cpu__DOT__alu_result
                                            : vlSelf->top__DOT__cpu__DOT__pc_src1);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__if_id_write 
        = vlSelf->top__DOT__cpu__DOT__if_id_write;
    vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__pcwrite 
        = vlSelf->top__DOT__cpu__DOT__pcwrite;
    vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__pcwrite 
        = ((~ ((IData)(vlSelf->top__DOT__cpu__DOT__mem_access_stall) 
               | (IData)(vlSelf->top__DOT__cpu__DOT__active_mem_stage))) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__pcwrite));
    if (vlSelf->top__DOT__cpu__DOT__control_mux) {
        vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__control_mux = 1U;
        vlSelf->top__DOT__cpu__DOT__control_signal__DOT__S = 1U;
        vlSelf->top__DOT__cpu__DOT__control_signal__DOT__D0 
            = top__DOT__cpu__DOT____Vcellinp__control_signal__D0;
        vlSelf->top__DOT__cpu__DOT__control_output = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__control_mux = 0U;
        vlSelf->top__DOT__cpu__DOT__control_signal__DOT__S = 0U;
        vlSelf->top__DOT__cpu__DOT__control_signal__DOT__D0 
            = top__DOT__cpu__DOT____Vcellinp__control_signal__D0;
        vlSelf->top__DOT__cpu__DOT__control_output 
            = top__DOT__cpu__DOT____Vcellinp__control_signal__D0;
    }
    vlSelf->top__DOT__cpu__DOT__branchpredictor__DOT__target_addr 
        = vlSelf->top__DOT__cpu__DOT__pc_src2;
    vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__cu_pc 
        = vlSelf->top__DOT__cpu__DOT__pc_src2;
    vlSelf->top__DOT__cpu__DOT__PCS2__DOT__Y = vlSelf->top__DOT__cpu__DOT__pc_src2;
    vlSelf->top__DOT__cpu__DOT__is_correct__DOT__D0 
        = vlSelf->top__DOT__cpu__DOT__pc_src2;
    vlSelf->top__DOT__cpu__DOT__predict_reset = ((0U 
                                                  != 
                                                  (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_prediction) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT__cpu__DOT__taken))) 
                                                 && ((1U 
                                                      == 
                                                      (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_prediction) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__cpu__DOT__taken))) 
                                                     || ((2U 
                                                          == 
                                                          (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_prediction) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT__cpu__DOT__taken))) 
                                                         || (vlSelf->top__DOT__cpu__DOT__pc_src2 
                                                             != vlSelf->top__DOT__cpu__DOT__IF_ID_pc))));
    vlSelf->top__DOT__cpu__DOT__PCSrc3 = ((0U == (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_prediction) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT__cpu__DOT__taken)))
                                           ? 0U : (
                                                   (1U 
                                                    == 
                                                    (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_prediction) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT__cpu__DOT__taken)))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_prediction) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT__cpu__DOT__taken)))
                                                     ? 1U
                                                     : 
                                                    ((vlSelf->top__DOT__cpu__DOT__pc_src2 
                                                      == vlSelf->top__DOT__cpu__DOT__IF_ID_pc)
                                                      ? 2U
                                                      : 0U))));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pcwrite = vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__pcwrite;
    vlSelf->top__DOT__cpu__DOT__control_signal__DOT__Y 
        = vlSelf->top__DOT__cpu__DOT__control_output;
    vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__predict_reset 
        = vlSelf->top__DOT__cpu__DOT__predict_reset;
    vlSelf->top__DOT__cpu__DOT__iscorrect__DOT__pc_mux_flag 
        = vlSelf->top__DOT__cpu__DOT__PCSrc3;
    vlSelf->top__DOT__cpu__DOT__is_correct__DOT__S 
        = vlSelf->top__DOT__cpu__DOT__PCSrc3;
    vlSelf->top__DOT__cpu__DOT__next_pc = ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__PCSrc3))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__PCSrc3))
                                                ? 0U
                                                : vlSelf->top__DOT__cpu__DOT__pc_btb)
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__PCSrc3))
                                                ? vlSelf->top__DOT__cpu__DOT__ID_EX_pc4
                                                : vlSelf->top__DOT__cpu__DOT__pc_src2));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__is_correct__DOT__Y 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->is_halted = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_is_ecall) 
                         & (0xaU == vlSelf->print_reg
                            [0x11U]));
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0xfU))];
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top.v", 4, "", "Active region did not converge.");
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
