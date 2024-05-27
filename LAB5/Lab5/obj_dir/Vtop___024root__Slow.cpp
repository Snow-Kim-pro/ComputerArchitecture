// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__BASE;
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__MEM_WRITE;
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__MEM_READ;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branchpredictor__DOT__ENTRIES;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__BTB__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__PCS1__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__PCS2__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__is_correct__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__Write_Data__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__control_signal__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSRC1__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSRC2__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSRC_IMM__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__LINE_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__NUM_SETS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__NUM_WAYS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__OFFSET_BITS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__SET_BITS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__WAY_BITS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__TAG_BITS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__DELAY;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__BLOCK_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__WBSRC__DOT__data_width;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
