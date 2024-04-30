// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__PCWRITECOND;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__PCWRITE;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__IORD;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__MEMREAD;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__MEMWRITE;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__MEMTOREG;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__IRWRITE;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__PCSOURCE;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP0;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP1;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP2;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP3;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCB0;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCB1;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCB2;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCA;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__REGWRITE;
constexpr SData/*14:0*/ Vtop___024root::top__DOT__cpu__DOT__ctrl_unit__DOT__IS_ECALL;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__Address__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__memory__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__Write_Data__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSRC1__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSRC2__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__PCSRC__DOT__data_width;


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
