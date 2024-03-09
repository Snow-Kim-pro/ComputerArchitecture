// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvending_machine.h for the primary calling header

#ifndef VERILATED_VVENDING_MACHINE___024ROOT_H_
#define VERILATED_VVENDING_MACHINE___024ROOT_H_  // guard

#include "verilated.h"


class Vvending_machine__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvending_machine___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(i_input_coin,2,0);
    VL_IN8(i_select_item,3,0);
    VL_IN8(i_trigger_return,0,0);
    VL_OUT8(o_available_item,3,0);
    VL_OUT8(o_output_item,3,0);
    VL_OUT8(o_return_coin,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*2:0*/ __Vtrigprevexpr___TOP__i_input_coin__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__i_select_item__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ vending_machine__DOT__current_total;
    IData/*31:0*/ vending_machine__DOT__current_total_nxt;
    IData/*31:0*/ vending_machine__DOT__wait_time;
    IData/*31:0*/ vending_machine__DOT__check_time_and_coin_module__DOT__a;
    IData/*31:0*/ vending_machine__DOT__check_time_and_coin_module__DOT__b;
    IData/*31:0*/ vending_machine__DOT__calculate_current_state_module__DOT__input_total;
    IData/*31:0*/ vending_machine__DOT__calculate_current_state_module__DOT__output_total;
    IData/*31:0*/ vending_machine__DOT__calculate_current_state_module__DOT__return_total;
    IData/*31:0*/ vending_machine__DOT__calculate_current_state_module__DOT__i;
    IData/*31:0*/ __Vdly__vending_machine__DOT__check_time_and_coin_module__DOT__a;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4> vending_machine__DOT__item_price;
    VlUnpacked<IData/*31:0*/, 3> vending_machine__DOT__coin_value;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvending_machine__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvending_machine___024root(Vvending_machine__Syms* symsp, const char* v__name);
    ~Vvending_machine___024root();
    VL_UNCOPYABLE(Vvending_machine___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
