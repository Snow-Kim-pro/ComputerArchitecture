// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvending_machine__Syms.h"


void Vvending_machine___024root__trace_chg_0_sub_0(Vvending_machine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vvending_machine___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_chg_0\n"); );
    // Init
    Vvending_machine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvending_machine___024root*>(voidSelf);
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvending_machine___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vvending_machine___024root__trace_chg_0_sub_0(Vvending_machine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->vending_machine__DOT__item_price[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->vending_machine__DOT__item_price[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->vending_machine__DOT__item_price[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->vending_machine__DOT__item_price[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->vending_machine__DOT__coin_value[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->vending_machine__DOT__coin_value[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->vending_machine__DOT__coin_value[2]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+7,(vlSelf->vending_machine__DOT__return_total),32);
        bufp->chgIData(oldp+8,(vlSelf->vending_machine__DOT__current_total_nxt),32);
        bufp->chgIData(oldp+9,(vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__input_total),32);
        bufp->chgIData(oldp+10,(vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__output_total),32);
        bufp->chgIData(oldp+11,(vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__a),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+12,(vlSelf->vending_machine__DOT__current_total),32);
        bufp->chgIData(oldp+13,(vlSelf->vending_machine__DOT__wait_time),32);
        bufp->chgCData(oldp+14,(vlSelf->vending_machine__DOT__statea),3);
        bufp->chgIData(oldp+15,(vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i),32);
        bufp->chgCData(oldp+16,(vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__prev_i_input_coin),3);
        bufp->chgCData(oldp+17,(vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__prev_i_select_item),4);
    }
    bufp->chgBit(oldp+18,(vlSelf->clk));
    bufp->chgBit(oldp+19,(vlSelf->reset_n));
    bufp->chgCData(oldp+20,(vlSelf->i_input_coin),3);
    bufp->chgCData(oldp+21,(vlSelf->i_select_item),4);
    bufp->chgBit(oldp+22,(vlSelf->i_trigger_return));
    bufp->chgCData(oldp+23,(vlSelf->o_available_item),4);
    bufp->chgCData(oldp+24,(vlSelf->o_output_item),4);
    bufp->chgCData(oldp+25,(vlSelf->o_return_coin),3);
}

void Vvending_machine___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_cleanup\n"); );
    // Init
    Vvending_machine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvending_machine___024root*>(voidSelf);
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
