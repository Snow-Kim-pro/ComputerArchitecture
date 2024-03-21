// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((IData)(4U) + vlSelf->top__DOT__cpu__DOT__current_pc)),32);
        bufp->chgIData(oldp+1,((vlSelf->top__DOT__cpu__DOT__Imm 
                                + vlSelf->top__DOT__cpu__DOT__current_pc)),32);
        bufp->chgIData(oldp+2,(((((IData)(vlSelf->top__DOT__cpu__DOT__Branch) 
                                  & ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                      ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                         == vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                      : ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                          ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                             != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                          : ((9U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                              ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                 < vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                              : ((0xaU 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)) 
                                                 && (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                     >= vlSelf->top__DOT__cpu__DOT__alu_in_2)))))) 
                                 | (IData)(vlSelf->top__DOT__cpu__DOT__JAL))
                                 ? (vlSelf->top__DOT__cpu__DOT__Imm 
                                    + vlSelf->top__DOT__cpu__DOT__current_pc)
                                 : ((IData)(4U) + vlSelf->top__DOT__cpu__DOT__current_pc))),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__cpu__DOT__Instr),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__cpu__DOT__Imm),32);
        bufp->chgIData(oldp+5,(((IData)(vlSelf->top__DOT__cpu__DOT__PCtoReg)
                                 ? ((IData)(4U) + vlSelf->top__DOT__cpu__DOT__current_pc)
                                 : ((IData)(vlSelf->top__DOT__cpu__DOT__MemtoReg)
                                     ? ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                         ? vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem
                                        [(0x3fffU & 
                                          (vlSelf->top__DOT__cpu__DOT__alu_result 
                                           >> 2U))]
                                         : vlSelf->top__DOT__cpu__DOT__alu_result)
                                     : vlSelf->top__DOT__cpu__DOT__alu_result))),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__cpu__DOT__rs2_out),32);
        bufp->chgIData(oldp+7,(((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                 ? vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem
                                [(0x3fffU & (vlSelf->top__DOT__cpu__DOT__alu_result 
                                             >> 2U))]
                                 : vlSelf->top__DOT__cpu__DOT__alu_result)),32);
        bufp->chgIData(oldp+8,(((IData)(vlSelf->top__DOT__cpu__DOT__MemtoReg)
                                 ? ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                     ? vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem
                                    [(0x3fffU & (vlSelf->top__DOT__cpu__DOT__alu_result 
                                                 >> 2U))]
                                     : vlSelf->top__DOT__cpu__DOT__alu_result)
                                 : vlSelf->top__DOT__cpu__DOT__alu_result)),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__cpu__DOT__alu_in_1),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__cpu__DOT__alu_in_2),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__cpu__DOT__alu_result),32);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__cpu__DOT__alu_op),4);
        bufp->chgBit(oldp+13,(((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                   == vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                : ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                    ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                       != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                    : ((9U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                        ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                           < vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                        : ((0xaU == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)) 
                                           && (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                               >= vlSelf->top__DOT__cpu__DOT__alu_in_2)))))));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__cpu__DOT__JALR));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__cpu__DOT__JAL));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__cpu__DOT__Branch));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__cpu__DOT__MemRead));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__cpu__DOT__MemtoReg));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__cpu__DOT__MemWrite));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__cpu__DOT__ALUSrc));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__cpu__DOT__RegWrite));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__cpu__DOT__PCtoReg));
        bufp->chgBit(oldp+23,((((IData)(vlSelf->top__DOT__cpu__DOT__Branch) 
                                & ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                    ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                       == vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                    : ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                        ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                           != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                        : ((9U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                            ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                               < vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                            : ((0xaU 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)) 
                                               && (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                   >= vlSelf->top__DOT__cpu__DOT__alu_in_2)))))) 
                               | (IData)(vlSelf->top__DOT__cpu__DOT__JAL))));
        bufp->chgBit(oldp+24,(((IData)(vlSelf->top__DOT__cpu__DOT__Branch) 
                               & ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                   ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                      == vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                   : ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                       ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                          != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                       : ((9U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                           ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                              < vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                           : ((0xaU 
                                               == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)) 
                                              && (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  >= vlSelf->top__DOT__cpu__DOT__alu_in_2))))))));
        bufp->chgIData(oldp+25,(((IData)(vlSelf->top__DOT__cpu__DOT__JALR)
                                  ? vlSelf->top__DOT__cpu__DOT__alu_result
                                  : ((((IData)(vlSelf->top__DOT__cpu__DOT__Branch) 
                                       & ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                           ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                              == vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                           : ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                               ? (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                               : ((9U 
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
                                         + vlSelf->top__DOT__cpu__DOT__current_pc)))),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__cpu__DOT__current_pc),32);
        bufp->chgSData(oldp+27,(((0x400U & (vlSelf->top__DOT__cpu__DOT__Instr 
                                            >> 0x14U)) 
                                 | ((0x380U & (vlSelf->top__DOT__cpu__DOT__Instr 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->top__DOT__cpu__DOT__Instr)))),11);
        bufp->chgBit(oldp+28,((1U & (vlSelf->top__DOT__cpu__DOT__Instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+29,((7U & (vlSelf->top__DOT__cpu__DOT__Instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+30,((0x7fU & vlSelf->top__DOT__cpu__DOT__Instr)),7);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__i),32);
        bufp->chgSData(oldp+32,((0x3fffU & (vlSelf->top__DOT__cpu__DOT__alu_result 
                                            >> 2U))),14);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__cpu__DOT__imem__DOT__i),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[0]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[2]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[3]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[4]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[5]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[6]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[7]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[8]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[9]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[10]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[11]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[12]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[13]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[14]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[15]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[16]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[17]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[18]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[19]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[20]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[21]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[22]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[23]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[24]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[25]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[26]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[27]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[28]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[29]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[30]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[31]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[32]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[33]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[34]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[35]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[36]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[37]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[38]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[39]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[40]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[41]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[42]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[43]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[44]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[45]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[46]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[47]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[48]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[49]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[50]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[51]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[52]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[53]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[54]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[55]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[56]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[57]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[58]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[59]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[60]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[61]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[62]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[63]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[64]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[65]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[66]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[67]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[68]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[69]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[70]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[71]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[72]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[73]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[74]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[75]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[76]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[77]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[78]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[79]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[80]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[81]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[82]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[83]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[84]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[85]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[86]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[87]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[88]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[89]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[90]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[91]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[92]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[93]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[94]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[95]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[96]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[97]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[98]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[99]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[100]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[101]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[102]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[103]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[104]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[105]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[106]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[107]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[108]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[109]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[110]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[111]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[112]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[113]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[114]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[115]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[116]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[117]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[118]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[119]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[120]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[121]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[122]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[123]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[124]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[125]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[126]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[127]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[128]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[129]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[130]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[131]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[132]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[133]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[134]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[135]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[136]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[137]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[138]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[139]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[140]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[141]),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[142]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[143]),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[144]),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[145]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[146]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[147]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[148]),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[149]),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[150]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[151]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[152]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[153]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[154]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[155]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[156]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[157]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[158]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[159]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[160]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[161]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[162]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[163]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[164]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[165]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[166]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[167]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[168]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[169]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[170]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[171]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[172]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[173]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[174]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[175]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[176]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[177]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[178]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[179]),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[180]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[181]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[182]),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[183]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[184]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[185]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[186]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[187]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[188]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[189]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[190]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[191]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[192]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[193]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[194]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[195]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[196]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[197]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[198]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[199]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[200]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[201]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[202]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[203]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[204]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[205]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[206]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[207]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[208]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[209]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[210]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[211]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[212]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[213]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[214]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[215]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[216]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[217]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[218]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[219]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[220]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[221]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[222]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[223]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[224]),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[225]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[226]),32);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[227]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[228]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[229]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[230]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[231]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[232]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[233]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[234]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[235]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[236]),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[237]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[238]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[239]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[240]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[241]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[242]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[243]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[244]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[245]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[246]),32);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[247]),32);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[248]),32);
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[249]),32);
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[250]),32);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[251]),32);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[252]),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[253]),32);
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[254]),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[255]),32);
        bufp->chgIData(oldp+290,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[256]),32);
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[257]),32);
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[258]),32);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[259]),32);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[260]),32);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[261]),32);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[262]),32);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[263]),32);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[264]),32);
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[265]),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[266]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[267]),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[268]),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[269]),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[270]),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[271]),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[272]),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[273]),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[274]),32);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[275]),32);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[276]),32);
        bufp->chgIData(oldp+311,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[277]),32);
        bufp->chgIData(oldp+312,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[278]),32);
        bufp->chgIData(oldp+313,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[279]),32);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[280]),32);
        bufp->chgIData(oldp+315,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[281]),32);
        bufp->chgIData(oldp+316,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[282]),32);
        bufp->chgIData(oldp+317,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[283]),32);
        bufp->chgIData(oldp+318,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[284]),32);
        bufp->chgIData(oldp+319,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[285]),32);
        bufp->chgIData(oldp+320,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[286]),32);
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[287]),32);
        bufp->chgIData(oldp+322,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[288]),32);
        bufp->chgIData(oldp+323,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[289]),32);
        bufp->chgIData(oldp+324,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[290]),32);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[291]),32);
        bufp->chgIData(oldp+326,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[292]),32);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[293]),32);
        bufp->chgIData(oldp+328,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[294]),32);
        bufp->chgIData(oldp+329,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[295]),32);
        bufp->chgIData(oldp+330,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[296]),32);
        bufp->chgIData(oldp+331,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[297]),32);
        bufp->chgIData(oldp+332,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[298]),32);
        bufp->chgIData(oldp+333,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[299]),32);
        bufp->chgIData(oldp+334,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[300]),32);
        bufp->chgIData(oldp+335,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[301]),32);
        bufp->chgIData(oldp+336,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[302]),32);
        bufp->chgIData(oldp+337,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[303]),32);
        bufp->chgIData(oldp+338,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[304]),32);
        bufp->chgIData(oldp+339,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[305]),32);
        bufp->chgIData(oldp+340,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[306]),32);
        bufp->chgIData(oldp+341,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[307]),32);
        bufp->chgIData(oldp+342,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[308]),32);
        bufp->chgIData(oldp+343,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[309]),32);
        bufp->chgIData(oldp+344,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[310]),32);
        bufp->chgIData(oldp+345,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[311]),32);
        bufp->chgIData(oldp+346,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[312]),32);
        bufp->chgIData(oldp+347,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[313]),32);
        bufp->chgIData(oldp+348,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[314]),32);
        bufp->chgIData(oldp+349,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[315]),32);
        bufp->chgIData(oldp+350,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[316]),32);
        bufp->chgIData(oldp+351,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[317]),32);
        bufp->chgIData(oldp+352,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[318]),32);
        bufp->chgIData(oldp+353,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[319]),32);
        bufp->chgIData(oldp+354,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[320]),32);
        bufp->chgIData(oldp+355,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[321]),32);
        bufp->chgIData(oldp+356,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[322]),32);
        bufp->chgIData(oldp+357,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[323]),32);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[324]),32);
        bufp->chgIData(oldp+359,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[325]),32);
        bufp->chgIData(oldp+360,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[326]),32);
        bufp->chgIData(oldp+361,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[327]),32);
        bufp->chgIData(oldp+362,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[328]),32);
        bufp->chgIData(oldp+363,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[329]),32);
        bufp->chgIData(oldp+364,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[330]),32);
        bufp->chgIData(oldp+365,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[331]),32);
        bufp->chgIData(oldp+366,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[332]),32);
        bufp->chgIData(oldp+367,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[333]),32);
        bufp->chgIData(oldp+368,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[334]),32);
        bufp->chgIData(oldp+369,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[335]),32);
        bufp->chgIData(oldp+370,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[336]),32);
        bufp->chgIData(oldp+371,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[337]),32);
        bufp->chgIData(oldp+372,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[338]),32);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[339]),32);
        bufp->chgIData(oldp+374,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[340]),32);
        bufp->chgIData(oldp+375,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[341]),32);
        bufp->chgIData(oldp+376,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[342]),32);
        bufp->chgIData(oldp+377,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[343]),32);
        bufp->chgIData(oldp+378,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[344]),32);
        bufp->chgIData(oldp+379,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[345]),32);
        bufp->chgIData(oldp+380,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[346]),32);
        bufp->chgIData(oldp+381,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[347]),32);
        bufp->chgIData(oldp+382,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[348]),32);
        bufp->chgIData(oldp+383,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[349]),32);
        bufp->chgIData(oldp+384,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[350]),32);
        bufp->chgIData(oldp+385,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[351]),32);
        bufp->chgIData(oldp+386,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[352]),32);
        bufp->chgIData(oldp+387,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[353]),32);
        bufp->chgIData(oldp+388,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[354]),32);
        bufp->chgIData(oldp+389,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[355]),32);
        bufp->chgIData(oldp+390,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[356]),32);
        bufp->chgIData(oldp+391,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[357]),32);
        bufp->chgIData(oldp+392,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[358]),32);
        bufp->chgIData(oldp+393,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[359]),32);
        bufp->chgIData(oldp+394,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[360]),32);
        bufp->chgIData(oldp+395,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[361]),32);
        bufp->chgIData(oldp+396,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[362]),32);
        bufp->chgIData(oldp+397,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[363]),32);
        bufp->chgIData(oldp+398,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[364]),32);
        bufp->chgIData(oldp+399,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[365]),32);
        bufp->chgIData(oldp+400,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[366]),32);
        bufp->chgIData(oldp+401,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[367]),32);
        bufp->chgIData(oldp+402,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[368]),32);
        bufp->chgIData(oldp+403,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[369]),32);
        bufp->chgIData(oldp+404,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[370]),32);
        bufp->chgIData(oldp+405,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[371]),32);
        bufp->chgIData(oldp+406,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[372]),32);
        bufp->chgIData(oldp+407,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[373]),32);
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[374]),32);
        bufp->chgIData(oldp+409,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[375]),32);
        bufp->chgIData(oldp+410,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[376]),32);
        bufp->chgIData(oldp+411,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[377]),32);
        bufp->chgIData(oldp+412,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[378]),32);
        bufp->chgIData(oldp+413,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[379]),32);
        bufp->chgIData(oldp+414,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[380]),32);
        bufp->chgIData(oldp+415,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[381]),32);
        bufp->chgIData(oldp+416,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[382]),32);
        bufp->chgIData(oldp+417,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[383]),32);
        bufp->chgIData(oldp+418,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[384]),32);
        bufp->chgIData(oldp+419,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[385]),32);
        bufp->chgIData(oldp+420,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[386]),32);
        bufp->chgIData(oldp+421,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[387]),32);
        bufp->chgIData(oldp+422,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[388]),32);
        bufp->chgIData(oldp+423,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[389]),32);
        bufp->chgIData(oldp+424,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[390]),32);
        bufp->chgIData(oldp+425,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[391]),32);
        bufp->chgIData(oldp+426,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[392]),32);
        bufp->chgIData(oldp+427,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[393]),32);
        bufp->chgIData(oldp+428,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[394]),32);
        bufp->chgIData(oldp+429,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[395]),32);
        bufp->chgIData(oldp+430,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[396]),32);
        bufp->chgIData(oldp+431,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[397]),32);
        bufp->chgIData(oldp+432,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[398]),32);
        bufp->chgIData(oldp+433,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[399]),32);
        bufp->chgIData(oldp+434,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[400]),32);
        bufp->chgIData(oldp+435,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[401]),32);
        bufp->chgIData(oldp+436,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[402]),32);
        bufp->chgIData(oldp+437,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[403]),32);
        bufp->chgIData(oldp+438,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[404]),32);
        bufp->chgIData(oldp+439,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[405]),32);
        bufp->chgIData(oldp+440,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[406]),32);
        bufp->chgIData(oldp+441,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[407]),32);
        bufp->chgIData(oldp+442,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[408]),32);
        bufp->chgIData(oldp+443,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[409]),32);
        bufp->chgIData(oldp+444,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[410]),32);
        bufp->chgIData(oldp+445,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[411]),32);
        bufp->chgIData(oldp+446,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[412]),32);
        bufp->chgIData(oldp+447,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[413]),32);
        bufp->chgIData(oldp+448,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[414]),32);
        bufp->chgIData(oldp+449,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[415]),32);
        bufp->chgIData(oldp+450,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[416]),32);
        bufp->chgIData(oldp+451,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[417]),32);
        bufp->chgIData(oldp+452,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[418]),32);
        bufp->chgIData(oldp+453,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[419]),32);
        bufp->chgIData(oldp+454,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[420]),32);
        bufp->chgIData(oldp+455,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[421]),32);
        bufp->chgIData(oldp+456,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[422]),32);
        bufp->chgIData(oldp+457,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[423]),32);
        bufp->chgIData(oldp+458,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[424]),32);
        bufp->chgIData(oldp+459,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[425]),32);
        bufp->chgIData(oldp+460,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[426]),32);
        bufp->chgIData(oldp+461,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[427]),32);
        bufp->chgIData(oldp+462,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[428]),32);
        bufp->chgIData(oldp+463,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[429]),32);
        bufp->chgIData(oldp+464,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[430]),32);
        bufp->chgIData(oldp+465,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[431]),32);
        bufp->chgIData(oldp+466,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[432]),32);
        bufp->chgIData(oldp+467,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[433]),32);
        bufp->chgIData(oldp+468,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[434]),32);
        bufp->chgIData(oldp+469,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[435]),32);
        bufp->chgIData(oldp+470,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[436]),32);
        bufp->chgIData(oldp+471,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[437]),32);
        bufp->chgIData(oldp+472,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[438]),32);
        bufp->chgIData(oldp+473,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[439]),32);
        bufp->chgIData(oldp+474,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[440]),32);
        bufp->chgIData(oldp+475,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[441]),32);
        bufp->chgIData(oldp+476,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[442]),32);
        bufp->chgIData(oldp+477,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[443]),32);
        bufp->chgIData(oldp+478,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[444]),32);
        bufp->chgIData(oldp+479,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[445]),32);
        bufp->chgIData(oldp+480,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[446]),32);
        bufp->chgIData(oldp+481,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[447]),32);
        bufp->chgIData(oldp+482,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[448]),32);
        bufp->chgIData(oldp+483,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[449]),32);
        bufp->chgIData(oldp+484,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[450]),32);
        bufp->chgIData(oldp+485,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[451]),32);
        bufp->chgIData(oldp+486,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[452]),32);
        bufp->chgIData(oldp+487,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[453]),32);
        bufp->chgIData(oldp+488,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[454]),32);
        bufp->chgIData(oldp+489,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[455]),32);
        bufp->chgIData(oldp+490,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[456]),32);
        bufp->chgIData(oldp+491,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[457]),32);
        bufp->chgIData(oldp+492,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[458]),32);
        bufp->chgIData(oldp+493,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[459]),32);
        bufp->chgIData(oldp+494,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[460]),32);
        bufp->chgIData(oldp+495,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[461]),32);
        bufp->chgIData(oldp+496,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[462]),32);
        bufp->chgIData(oldp+497,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[463]),32);
        bufp->chgIData(oldp+498,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[464]),32);
        bufp->chgIData(oldp+499,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[465]),32);
        bufp->chgIData(oldp+500,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[466]),32);
        bufp->chgIData(oldp+501,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[467]),32);
        bufp->chgIData(oldp+502,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[468]),32);
        bufp->chgIData(oldp+503,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[469]),32);
        bufp->chgIData(oldp+504,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[470]),32);
        bufp->chgIData(oldp+505,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[471]),32);
        bufp->chgIData(oldp+506,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[472]),32);
        bufp->chgIData(oldp+507,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[473]),32);
        bufp->chgIData(oldp+508,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[474]),32);
        bufp->chgIData(oldp+509,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[475]),32);
        bufp->chgIData(oldp+510,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[476]),32);
        bufp->chgIData(oldp+511,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[477]),32);
        bufp->chgIData(oldp+512,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[478]),32);
        bufp->chgIData(oldp+513,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[479]),32);
        bufp->chgIData(oldp+514,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[480]),32);
        bufp->chgIData(oldp+515,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[481]),32);
        bufp->chgIData(oldp+516,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[482]),32);
        bufp->chgIData(oldp+517,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[483]),32);
        bufp->chgIData(oldp+518,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[484]),32);
        bufp->chgIData(oldp+519,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[485]),32);
        bufp->chgIData(oldp+520,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[486]),32);
        bufp->chgIData(oldp+521,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[487]),32);
        bufp->chgIData(oldp+522,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[488]),32);
        bufp->chgIData(oldp+523,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[489]),32);
        bufp->chgIData(oldp+524,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[490]),32);
        bufp->chgIData(oldp+525,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[491]),32);
        bufp->chgIData(oldp+526,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[492]),32);
        bufp->chgIData(oldp+527,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[493]),32);
        bufp->chgIData(oldp+528,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[494]),32);
        bufp->chgIData(oldp+529,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[495]),32);
        bufp->chgIData(oldp+530,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[496]),32);
        bufp->chgIData(oldp+531,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[497]),32);
        bufp->chgIData(oldp+532,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[498]),32);
        bufp->chgIData(oldp+533,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[499]),32);
        bufp->chgIData(oldp+534,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[500]),32);
        bufp->chgIData(oldp+535,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[501]),32);
        bufp->chgIData(oldp+536,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[502]),32);
        bufp->chgIData(oldp+537,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[503]),32);
        bufp->chgIData(oldp+538,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[504]),32);
        bufp->chgIData(oldp+539,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[505]),32);
        bufp->chgIData(oldp+540,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[506]),32);
        bufp->chgIData(oldp+541,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[507]),32);
        bufp->chgIData(oldp+542,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[508]),32);
        bufp->chgIData(oldp+543,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[509]),32);
        bufp->chgIData(oldp+544,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[510]),32);
        bufp->chgIData(oldp+545,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[511]),32);
        bufp->chgIData(oldp+546,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[512]),32);
        bufp->chgIData(oldp+547,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[513]),32);
        bufp->chgIData(oldp+548,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[514]),32);
        bufp->chgIData(oldp+549,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[515]),32);
        bufp->chgIData(oldp+550,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[516]),32);
        bufp->chgIData(oldp+551,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[517]),32);
        bufp->chgIData(oldp+552,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[518]),32);
        bufp->chgIData(oldp+553,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[519]),32);
        bufp->chgIData(oldp+554,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[520]),32);
        bufp->chgIData(oldp+555,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[521]),32);
        bufp->chgIData(oldp+556,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[522]),32);
        bufp->chgIData(oldp+557,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[523]),32);
        bufp->chgIData(oldp+558,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[524]),32);
        bufp->chgIData(oldp+559,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[525]),32);
        bufp->chgIData(oldp+560,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[526]),32);
        bufp->chgIData(oldp+561,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[527]),32);
        bufp->chgIData(oldp+562,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[528]),32);
        bufp->chgIData(oldp+563,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[529]),32);
        bufp->chgIData(oldp+564,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[530]),32);
        bufp->chgIData(oldp+565,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[531]),32);
        bufp->chgIData(oldp+566,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[532]),32);
        bufp->chgIData(oldp+567,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[533]),32);
        bufp->chgIData(oldp+568,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[534]),32);
        bufp->chgIData(oldp+569,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[535]),32);
        bufp->chgIData(oldp+570,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[536]),32);
        bufp->chgIData(oldp+571,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[537]),32);
        bufp->chgIData(oldp+572,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[538]),32);
        bufp->chgIData(oldp+573,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[539]),32);
        bufp->chgIData(oldp+574,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[540]),32);
        bufp->chgIData(oldp+575,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[541]),32);
        bufp->chgIData(oldp+576,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[542]),32);
        bufp->chgIData(oldp+577,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[543]),32);
        bufp->chgIData(oldp+578,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[544]),32);
        bufp->chgIData(oldp+579,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[545]),32);
        bufp->chgIData(oldp+580,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[546]),32);
        bufp->chgIData(oldp+581,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[547]),32);
        bufp->chgIData(oldp+582,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[548]),32);
        bufp->chgIData(oldp+583,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[549]),32);
        bufp->chgIData(oldp+584,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[550]),32);
        bufp->chgIData(oldp+585,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[551]),32);
        bufp->chgIData(oldp+586,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[552]),32);
        bufp->chgIData(oldp+587,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[553]),32);
        bufp->chgIData(oldp+588,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[554]),32);
        bufp->chgIData(oldp+589,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[555]),32);
        bufp->chgIData(oldp+590,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[556]),32);
        bufp->chgIData(oldp+591,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[557]),32);
        bufp->chgIData(oldp+592,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[558]),32);
        bufp->chgIData(oldp+593,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[559]),32);
        bufp->chgIData(oldp+594,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[560]),32);
        bufp->chgIData(oldp+595,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[561]),32);
        bufp->chgIData(oldp+596,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[562]),32);
        bufp->chgIData(oldp+597,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[563]),32);
        bufp->chgIData(oldp+598,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[564]),32);
        bufp->chgIData(oldp+599,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[565]),32);
        bufp->chgIData(oldp+600,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[566]),32);
        bufp->chgIData(oldp+601,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[567]),32);
        bufp->chgIData(oldp+602,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[568]),32);
        bufp->chgIData(oldp+603,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[569]),32);
        bufp->chgIData(oldp+604,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[570]),32);
        bufp->chgIData(oldp+605,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[571]),32);
        bufp->chgIData(oldp+606,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[572]),32);
        bufp->chgIData(oldp+607,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[573]),32);
        bufp->chgIData(oldp+608,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[574]),32);
        bufp->chgIData(oldp+609,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[575]),32);
        bufp->chgIData(oldp+610,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[576]),32);
        bufp->chgIData(oldp+611,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[577]),32);
        bufp->chgIData(oldp+612,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[578]),32);
        bufp->chgIData(oldp+613,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[579]),32);
        bufp->chgIData(oldp+614,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[580]),32);
        bufp->chgIData(oldp+615,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[581]),32);
        bufp->chgIData(oldp+616,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[582]),32);
        bufp->chgIData(oldp+617,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[583]),32);
        bufp->chgIData(oldp+618,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[584]),32);
        bufp->chgIData(oldp+619,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[585]),32);
        bufp->chgIData(oldp+620,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[586]),32);
        bufp->chgIData(oldp+621,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[587]),32);
        bufp->chgIData(oldp+622,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[588]),32);
        bufp->chgIData(oldp+623,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[589]),32);
        bufp->chgIData(oldp+624,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[590]),32);
        bufp->chgIData(oldp+625,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[591]),32);
        bufp->chgIData(oldp+626,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[592]),32);
        bufp->chgIData(oldp+627,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[593]),32);
        bufp->chgIData(oldp+628,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[594]),32);
        bufp->chgIData(oldp+629,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[595]),32);
        bufp->chgIData(oldp+630,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[596]),32);
        bufp->chgIData(oldp+631,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[597]),32);
        bufp->chgIData(oldp+632,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[598]),32);
        bufp->chgIData(oldp+633,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[599]),32);
        bufp->chgIData(oldp+634,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[600]),32);
        bufp->chgIData(oldp+635,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[601]),32);
        bufp->chgIData(oldp+636,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[602]),32);
        bufp->chgIData(oldp+637,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[603]),32);
        bufp->chgIData(oldp+638,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[604]),32);
        bufp->chgIData(oldp+639,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[605]),32);
        bufp->chgIData(oldp+640,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[606]),32);
        bufp->chgIData(oldp+641,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[607]),32);
        bufp->chgIData(oldp+642,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[608]),32);
        bufp->chgIData(oldp+643,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[609]),32);
        bufp->chgIData(oldp+644,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[610]),32);
        bufp->chgIData(oldp+645,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[611]),32);
        bufp->chgIData(oldp+646,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[612]),32);
        bufp->chgIData(oldp+647,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[613]),32);
        bufp->chgIData(oldp+648,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[614]),32);
        bufp->chgIData(oldp+649,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[615]),32);
        bufp->chgIData(oldp+650,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[616]),32);
        bufp->chgIData(oldp+651,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[617]),32);
        bufp->chgIData(oldp+652,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[618]),32);
        bufp->chgIData(oldp+653,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[619]),32);
        bufp->chgIData(oldp+654,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[620]),32);
        bufp->chgIData(oldp+655,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[621]),32);
        bufp->chgIData(oldp+656,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[622]),32);
        bufp->chgIData(oldp+657,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[623]),32);
        bufp->chgIData(oldp+658,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[624]),32);
        bufp->chgIData(oldp+659,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[625]),32);
        bufp->chgIData(oldp+660,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[626]),32);
        bufp->chgIData(oldp+661,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[627]),32);
        bufp->chgIData(oldp+662,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[628]),32);
        bufp->chgIData(oldp+663,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[629]),32);
        bufp->chgIData(oldp+664,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[630]),32);
        bufp->chgIData(oldp+665,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[631]),32);
        bufp->chgIData(oldp+666,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[632]),32);
        bufp->chgIData(oldp+667,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[633]),32);
        bufp->chgIData(oldp+668,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[634]),32);
        bufp->chgIData(oldp+669,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[635]),32);
        bufp->chgIData(oldp+670,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[636]),32);
        bufp->chgIData(oldp+671,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[637]),32);
        bufp->chgIData(oldp+672,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[638]),32);
        bufp->chgIData(oldp+673,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[639]),32);
        bufp->chgIData(oldp+674,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[640]),32);
        bufp->chgIData(oldp+675,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[641]),32);
        bufp->chgIData(oldp+676,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[642]),32);
        bufp->chgIData(oldp+677,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[643]),32);
        bufp->chgIData(oldp+678,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[644]),32);
        bufp->chgIData(oldp+679,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[645]),32);
        bufp->chgIData(oldp+680,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[646]),32);
        bufp->chgIData(oldp+681,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[647]),32);
        bufp->chgIData(oldp+682,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[648]),32);
        bufp->chgIData(oldp+683,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[649]),32);
        bufp->chgIData(oldp+684,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[650]),32);
        bufp->chgIData(oldp+685,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[651]),32);
        bufp->chgIData(oldp+686,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[652]),32);
        bufp->chgIData(oldp+687,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[653]),32);
        bufp->chgIData(oldp+688,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[654]),32);
        bufp->chgIData(oldp+689,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[655]),32);
        bufp->chgIData(oldp+690,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[656]),32);
        bufp->chgIData(oldp+691,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[657]),32);
        bufp->chgIData(oldp+692,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[658]),32);
        bufp->chgIData(oldp+693,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[659]),32);
        bufp->chgIData(oldp+694,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[660]),32);
        bufp->chgIData(oldp+695,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[661]),32);
        bufp->chgIData(oldp+696,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[662]),32);
        bufp->chgIData(oldp+697,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[663]),32);
        bufp->chgIData(oldp+698,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[664]),32);
        bufp->chgIData(oldp+699,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[665]),32);
        bufp->chgIData(oldp+700,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[666]),32);
        bufp->chgIData(oldp+701,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[667]),32);
        bufp->chgIData(oldp+702,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[668]),32);
        bufp->chgIData(oldp+703,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[669]),32);
        bufp->chgIData(oldp+704,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[670]),32);
        bufp->chgIData(oldp+705,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[671]),32);
        bufp->chgIData(oldp+706,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[672]),32);
        bufp->chgIData(oldp+707,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[673]),32);
        bufp->chgIData(oldp+708,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[674]),32);
        bufp->chgIData(oldp+709,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[675]),32);
        bufp->chgIData(oldp+710,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[676]),32);
        bufp->chgIData(oldp+711,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[677]),32);
        bufp->chgIData(oldp+712,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[678]),32);
        bufp->chgIData(oldp+713,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[679]),32);
        bufp->chgIData(oldp+714,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[680]),32);
        bufp->chgIData(oldp+715,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[681]),32);
        bufp->chgIData(oldp+716,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[682]),32);
        bufp->chgIData(oldp+717,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[683]),32);
        bufp->chgIData(oldp+718,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[684]),32);
        bufp->chgIData(oldp+719,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[685]),32);
        bufp->chgIData(oldp+720,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[686]),32);
        bufp->chgIData(oldp+721,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[687]),32);
        bufp->chgIData(oldp+722,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[688]),32);
        bufp->chgIData(oldp+723,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[689]),32);
        bufp->chgIData(oldp+724,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[690]),32);
        bufp->chgIData(oldp+725,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[691]),32);
        bufp->chgIData(oldp+726,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[692]),32);
        bufp->chgIData(oldp+727,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[693]),32);
        bufp->chgIData(oldp+728,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[694]),32);
        bufp->chgIData(oldp+729,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[695]),32);
        bufp->chgIData(oldp+730,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[696]),32);
        bufp->chgIData(oldp+731,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[697]),32);
        bufp->chgIData(oldp+732,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[698]),32);
        bufp->chgIData(oldp+733,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[699]),32);
        bufp->chgIData(oldp+734,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[700]),32);
        bufp->chgIData(oldp+735,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[701]),32);
        bufp->chgIData(oldp+736,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[702]),32);
        bufp->chgIData(oldp+737,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[703]),32);
        bufp->chgIData(oldp+738,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[704]),32);
        bufp->chgIData(oldp+739,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[705]),32);
        bufp->chgIData(oldp+740,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[706]),32);
        bufp->chgIData(oldp+741,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[707]),32);
        bufp->chgIData(oldp+742,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[708]),32);
        bufp->chgIData(oldp+743,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[709]),32);
        bufp->chgIData(oldp+744,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[710]),32);
        bufp->chgIData(oldp+745,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[711]),32);
        bufp->chgIData(oldp+746,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[712]),32);
        bufp->chgIData(oldp+747,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[713]),32);
        bufp->chgIData(oldp+748,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[714]),32);
        bufp->chgIData(oldp+749,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[715]),32);
        bufp->chgIData(oldp+750,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[716]),32);
        bufp->chgIData(oldp+751,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[717]),32);
        bufp->chgIData(oldp+752,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[718]),32);
        bufp->chgIData(oldp+753,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[719]),32);
        bufp->chgIData(oldp+754,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[720]),32);
        bufp->chgIData(oldp+755,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[721]),32);
        bufp->chgIData(oldp+756,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[722]),32);
        bufp->chgIData(oldp+757,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[723]),32);
        bufp->chgIData(oldp+758,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[724]),32);
        bufp->chgIData(oldp+759,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[725]),32);
        bufp->chgIData(oldp+760,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[726]),32);
        bufp->chgIData(oldp+761,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[727]),32);
        bufp->chgIData(oldp+762,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[728]),32);
        bufp->chgIData(oldp+763,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[729]),32);
        bufp->chgIData(oldp+764,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[730]),32);
        bufp->chgIData(oldp+765,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[731]),32);
        bufp->chgIData(oldp+766,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[732]),32);
        bufp->chgIData(oldp+767,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[733]),32);
        bufp->chgIData(oldp+768,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[734]),32);
        bufp->chgIData(oldp+769,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[735]),32);
        bufp->chgIData(oldp+770,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[736]),32);
        bufp->chgIData(oldp+771,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[737]),32);
        bufp->chgIData(oldp+772,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[738]),32);
        bufp->chgIData(oldp+773,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[739]),32);
        bufp->chgIData(oldp+774,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[740]),32);
        bufp->chgIData(oldp+775,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[741]),32);
        bufp->chgIData(oldp+776,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[742]),32);
        bufp->chgIData(oldp+777,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[743]),32);
        bufp->chgIData(oldp+778,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[744]),32);
        bufp->chgIData(oldp+779,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[745]),32);
        bufp->chgIData(oldp+780,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[746]),32);
        bufp->chgIData(oldp+781,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[747]),32);
        bufp->chgIData(oldp+782,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[748]),32);
        bufp->chgIData(oldp+783,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[749]),32);
        bufp->chgIData(oldp+784,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[750]),32);
        bufp->chgIData(oldp+785,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[751]),32);
        bufp->chgIData(oldp+786,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[752]),32);
        bufp->chgIData(oldp+787,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[753]),32);
        bufp->chgIData(oldp+788,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[754]),32);
        bufp->chgIData(oldp+789,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[755]),32);
        bufp->chgIData(oldp+790,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[756]),32);
        bufp->chgIData(oldp+791,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[757]),32);
        bufp->chgIData(oldp+792,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[758]),32);
        bufp->chgIData(oldp+793,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[759]),32);
        bufp->chgIData(oldp+794,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[760]),32);
        bufp->chgIData(oldp+795,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[761]),32);
        bufp->chgIData(oldp+796,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[762]),32);
        bufp->chgIData(oldp+797,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[763]),32);
        bufp->chgIData(oldp+798,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[764]),32);
        bufp->chgIData(oldp+799,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[765]),32);
        bufp->chgIData(oldp+800,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[766]),32);
        bufp->chgIData(oldp+801,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[767]),32);
        bufp->chgIData(oldp+802,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[768]),32);
        bufp->chgIData(oldp+803,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[769]),32);
        bufp->chgIData(oldp+804,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[770]),32);
        bufp->chgIData(oldp+805,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[771]),32);
        bufp->chgIData(oldp+806,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[772]),32);
        bufp->chgIData(oldp+807,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[773]),32);
        bufp->chgIData(oldp+808,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[774]),32);
        bufp->chgIData(oldp+809,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[775]),32);
        bufp->chgIData(oldp+810,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[776]),32);
        bufp->chgIData(oldp+811,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[777]),32);
        bufp->chgIData(oldp+812,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[778]),32);
        bufp->chgIData(oldp+813,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[779]),32);
        bufp->chgIData(oldp+814,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[780]),32);
        bufp->chgIData(oldp+815,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[781]),32);
        bufp->chgIData(oldp+816,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[782]),32);
        bufp->chgIData(oldp+817,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[783]),32);
        bufp->chgIData(oldp+818,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[784]),32);
        bufp->chgIData(oldp+819,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[785]),32);
        bufp->chgIData(oldp+820,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[786]),32);
        bufp->chgIData(oldp+821,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[787]),32);
        bufp->chgIData(oldp+822,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[788]),32);
        bufp->chgIData(oldp+823,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[789]),32);
        bufp->chgIData(oldp+824,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[790]),32);
        bufp->chgIData(oldp+825,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[791]),32);
        bufp->chgIData(oldp+826,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[792]),32);
        bufp->chgIData(oldp+827,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[793]),32);
        bufp->chgIData(oldp+828,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[794]),32);
        bufp->chgIData(oldp+829,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[795]),32);
        bufp->chgIData(oldp+830,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[796]),32);
        bufp->chgIData(oldp+831,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[797]),32);
        bufp->chgIData(oldp+832,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[798]),32);
        bufp->chgIData(oldp+833,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[799]),32);
        bufp->chgIData(oldp+834,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[800]),32);
        bufp->chgIData(oldp+835,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[801]),32);
        bufp->chgIData(oldp+836,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[802]),32);
        bufp->chgIData(oldp+837,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[803]),32);
        bufp->chgIData(oldp+838,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[804]),32);
        bufp->chgIData(oldp+839,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[805]),32);
        bufp->chgIData(oldp+840,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[806]),32);
        bufp->chgIData(oldp+841,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[807]),32);
        bufp->chgIData(oldp+842,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[808]),32);
        bufp->chgIData(oldp+843,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[809]),32);
        bufp->chgIData(oldp+844,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[810]),32);
        bufp->chgIData(oldp+845,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[811]),32);
        bufp->chgIData(oldp+846,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[812]),32);
        bufp->chgIData(oldp+847,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[813]),32);
        bufp->chgIData(oldp+848,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[814]),32);
        bufp->chgIData(oldp+849,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[815]),32);
        bufp->chgIData(oldp+850,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[816]),32);
        bufp->chgIData(oldp+851,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[817]),32);
        bufp->chgIData(oldp+852,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[818]),32);
        bufp->chgIData(oldp+853,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[819]),32);
        bufp->chgIData(oldp+854,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[820]),32);
        bufp->chgIData(oldp+855,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[821]),32);
        bufp->chgIData(oldp+856,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[822]),32);
        bufp->chgIData(oldp+857,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[823]),32);
        bufp->chgIData(oldp+858,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[824]),32);
        bufp->chgIData(oldp+859,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[825]),32);
        bufp->chgIData(oldp+860,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[826]),32);
        bufp->chgIData(oldp+861,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[827]),32);
        bufp->chgIData(oldp+862,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[828]),32);
        bufp->chgIData(oldp+863,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[829]),32);
        bufp->chgIData(oldp+864,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[830]),32);
        bufp->chgIData(oldp+865,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[831]),32);
        bufp->chgIData(oldp+866,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[832]),32);
        bufp->chgIData(oldp+867,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[833]),32);
        bufp->chgIData(oldp+868,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[834]),32);
        bufp->chgIData(oldp+869,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[835]),32);
        bufp->chgIData(oldp+870,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[836]),32);
        bufp->chgIData(oldp+871,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[837]),32);
        bufp->chgIData(oldp+872,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[838]),32);
        bufp->chgIData(oldp+873,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[839]),32);
        bufp->chgIData(oldp+874,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[840]),32);
        bufp->chgIData(oldp+875,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[841]),32);
        bufp->chgIData(oldp+876,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[842]),32);
        bufp->chgIData(oldp+877,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[843]),32);
        bufp->chgIData(oldp+878,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[844]),32);
        bufp->chgIData(oldp+879,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[845]),32);
        bufp->chgIData(oldp+880,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[846]),32);
        bufp->chgIData(oldp+881,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[847]),32);
        bufp->chgIData(oldp+882,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[848]),32);
        bufp->chgIData(oldp+883,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[849]),32);
        bufp->chgIData(oldp+884,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[850]),32);
        bufp->chgIData(oldp+885,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[851]),32);
        bufp->chgIData(oldp+886,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[852]),32);
        bufp->chgIData(oldp+887,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[853]),32);
        bufp->chgIData(oldp+888,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[854]),32);
        bufp->chgIData(oldp+889,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[855]),32);
        bufp->chgIData(oldp+890,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[856]),32);
        bufp->chgIData(oldp+891,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[857]),32);
        bufp->chgIData(oldp+892,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[858]),32);
        bufp->chgIData(oldp+893,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[859]),32);
        bufp->chgIData(oldp+894,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[860]),32);
        bufp->chgIData(oldp+895,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[861]),32);
        bufp->chgIData(oldp+896,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[862]),32);
        bufp->chgIData(oldp+897,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[863]),32);
        bufp->chgIData(oldp+898,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[864]),32);
        bufp->chgIData(oldp+899,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[865]),32);
        bufp->chgIData(oldp+900,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[866]),32);
        bufp->chgIData(oldp+901,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[867]),32);
        bufp->chgIData(oldp+902,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[868]),32);
        bufp->chgIData(oldp+903,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[869]),32);
        bufp->chgIData(oldp+904,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[870]),32);
        bufp->chgIData(oldp+905,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[871]),32);
        bufp->chgIData(oldp+906,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[872]),32);
        bufp->chgIData(oldp+907,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[873]),32);
        bufp->chgIData(oldp+908,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[874]),32);
        bufp->chgIData(oldp+909,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[875]),32);
        bufp->chgIData(oldp+910,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[876]),32);
        bufp->chgIData(oldp+911,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[877]),32);
        bufp->chgIData(oldp+912,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[878]),32);
        bufp->chgIData(oldp+913,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[879]),32);
        bufp->chgIData(oldp+914,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[880]),32);
        bufp->chgIData(oldp+915,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[881]),32);
        bufp->chgIData(oldp+916,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[882]),32);
        bufp->chgIData(oldp+917,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[883]),32);
        bufp->chgIData(oldp+918,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[884]),32);
        bufp->chgIData(oldp+919,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[885]),32);
        bufp->chgIData(oldp+920,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[886]),32);
        bufp->chgIData(oldp+921,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[887]),32);
        bufp->chgIData(oldp+922,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[888]),32);
        bufp->chgIData(oldp+923,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[889]),32);
        bufp->chgIData(oldp+924,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[890]),32);
        bufp->chgIData(oldp+925,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[891]),32);
        bufp->chgIData(oldp+926,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[892]),32);
        bufp->chgIData(oldp+927,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[893]),32);
        bufp->chgIData(oldp+928,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[894]),32);
        bufp->chgIData(oldp+929,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[895]),32);
        bufp->chgIData(oldp+930,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[896]),32);
        bufp->chgIData(oldp+931,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[897]),32);
        bufp->chgIData(oldp+932,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[898]),32);
        bufp->chgIData(oldp+933,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[899]),32);
        bufp->chgIData(oldp+934,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[900]),32);
        bufp->chgIData(oldp+935,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[901]),32);
        bufp->chgIData(oldp+936,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[902]),32);
        bufp->chgIData(oldp+937,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[903]),32);
        bufp->chgIData(oldp+938,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[904]),32);
        bufp->chgIData(oldp+939,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[905]),32);
        bufp->chgIData(oldp+940,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[906]),32);
        bufp->chgIData(oldp+941,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[907]),32);
        bufp->chgIData(oldp+942,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[908]),32);
        bufp->chgIData(oldp+943,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[909]),32);
        bufp->chgIData(oldp+944,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[910]),32);
        bufp->chgIData(oldp+945,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[911]),32);
        bufp->chgIData(oldp+946,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[912]),32);
        bufp->chgIData(oldp+947,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[913]),32);
        bufp->chgIData(oldp+948,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[914]),32);
        bufp->chgIData(oldp+949,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[915]),32);
        bufp->chgIData(oldp+950,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[916]),32);
        bufp->chgIData(oldp+951,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[917]),32);
        bufp->chgIData(oldp+952,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[918]),32);
        bufp->chgIData(oldp+953,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[919]),32);
        bufp->chgIData(oldp+954,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[920]),32);
        bufp->chgIData(oldp+955,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[921]),32);
        bufp->chgIData(oldp+956,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[922]),32);
        bufp->chgIData(oldp+957,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[923]),32);
        bufp->chgIData(oldp+958,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[924]),32);
        bufp->chgIData(oldp+959,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[925]),32);
        bufp->chgIData(oldp+960,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[926]),32);
        bufp->chgIData(oldp+961,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[927]),32);
        bufp->chgIData(oldp+962,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[928]),32);
        bufp->chgIData(oldp+963,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[929]),32);
        bufp->chgIData(oldp+964,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[930]),32);
        bufp->chgIData(oldp+965,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[931]),32);
        bufp->chgIData(oldp+966,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[932]),32);
        bufp->chgIData(oldp+967,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[933]),32);
        bufp->chgIData(oldp+968,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[934]),32);
        bufp->chgIData(oldp+969,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[935]),32);
        bufp->chgIData(oldp+970,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[936]),32);
        bufp->chgIData(oldp+971,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[937]),32);
        bufp->chgIData(oldp+972,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[938]),32);
        bufp->chgIData(oldp+973,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[939]),32);
        bufp->chgIData(oldp+974,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[940]),32);
        bufp->chgIData(oldp+975,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[941]),32);
        bufp->chgIData(oldp+976,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[942]),32);
        bufp->chgIData(oldp+977,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[943]),32);
        bufp->chgIData(oldp+978,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[944]),32);
        bufp->chgIData(oldp+979,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[945]),32);
        bufp->chgIData(oldp+980,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[946]),32);
        bufp->chgIData(oldp+981,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[947]),32);
        bufp->chgIData(oldp+982,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[948]),32);
        bufp->chgIData(oldp+983,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[949]),32);
        bufp->chgIData(oldp+984,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[950]),32);
        bufp->chgIData(oldp+985,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[951]),32);
        bufp->chgIData(oldp+986,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[952]),32);
        bufp->chgIData(oldp+987,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[953]),32);
        bufp->chgIData(oldp+988,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[954]),32);
        bufp->chgIData(oldp+989,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[955]),32);
        bufp->chgIData(oldp+990,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[956]),32);
        bufp->chgIData(oldp+991,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[957]),32);
        bufp->chgIData(oldp+992,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[958]),32);
        bufp->chgIData(oldp+993,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[959]),32);
        bufp->chgIData(oldp+994,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[960]),32);
        bufp->chgIData(oldp+995,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[961]),32);
        bufp->chgIData(oldp+996,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[962]),32);
        bufp->chgIData(oldp+997,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[963]),32);
        bufp->chgIData(oldp+998,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[964]),32);
        bufp->chgIData(oldp+999,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[965]),32);
        bufp->chgIData(oldp+1000,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[966]),32);
        bufp->chgIData(oldp+1001,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[967]),32);
        bufp->chgIData(oldp+1002,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[968]),32);
        bufp->chgIData(oldp+1003,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[969]),32);
        bufp->chgIData(oldp+1004,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[970]),32);
        bufp->chgIData(oldp+1005,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[971]),32);
        bufp->chgIData(oldp+1006,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[972]),32);
        bufp->chgIData(oldp+1007,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[973]),32);
        bufp->chgIData(oldp+1008,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[974]),32);
        bufp->chgIData(oldp+1009,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[975]),32);
        bufp->chgIData(oldp+1010,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[976]),32);
        bufp->chgIData(oldp+1011,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[977]),32);
        bufp->chgIData(oldp+1012,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[978]),32);
        bufp->chgIData(oldp+1013,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[979]),32);
        bufp->chgIData(oldp+1014,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[980]),32);
        bufp->chgIData(oldp+1015,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[981]),32);
        bufp->chgIData(oldp+1016,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[982]),32);
        bufp->chgIData(oldp+1017,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[983]),32);
        bufp->chgIData(oldp+1018,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[984]),32);
        bufp->chgIData(oldp+1019,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[985]),32);
        bufp->chgIData(oldp+1020,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[986]),32);
        bufp->chgIData(oldp+1021,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[987]),32);
        bufp->chgIData(oldp+1022,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[988]),32);
        bufp->chgIData(oldp+1023,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[989]),32);
        bufp->chgIData(oldp+1024,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[990]),32);
        bufp->chgIData(oldp+1025,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[991]),32);
        bufp->chgIData(oldp+1026,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[992]),32);
        bufp->chgIData(oldp+1027,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[993]),32);
        bufp->chgIData(oldp+1028,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[994]),32);
        bufp->chgIData(oldp+1029,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[995]),32);
        bufp->chgIData(oldp+1030,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[996]),32);
        bufp->chgIData(oldp+1031,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[997]),32);
        bufp->chgIData(oldp+1032,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[998]),32);
        bufp->chgIData(oldp+1033,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[999]),32);
        bufp->chgIData(oldp+1034,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1000]),32);
        bufp->chgIData(oldp+1035,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1001]),32);
        bufp->chgIData(oldp+1036,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1002]),32);
        bufp->chgIData(oldp+1037,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1003]),32);
        bufp->chgIData(oldp+1038,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1004]),32);
        bufp->chgIData(oldp+1039,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1005]),32);
        bufp->chgIData(oldp+1040,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1006]),32);
        bufp->chgIData(oldp+1041,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1007]),32);
        bufp->chgIData(oldp+1042,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1008]),32);
        bufp->chgIData(oldp+1043,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1009]),32);
        bufp->chgIData(oldp+1044,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1010]),32);
        bufp->chgIData(oldp+1045,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1011]),32);
        bufp->chgIData(oldp+1046,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1012]),32);
        bufp->chgIData(oldp+1047,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1013]),32);
        bufp->chgIData(oldp+1048,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1014]),32);
        bufp->chgIData(oldp+1049,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1015]),32);
        bufp->chgIData(oldp+1050,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1016]),32);
        bufp->chgIData(oldp+1051,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1017]),32);
        bufp->chgIData(oldp+1052,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1018]),32);
        bufp->chgIData(oldp+1053,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1019]),32);
        bufp->chgIData(oldp+1054,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1020]),32);
        bufp->chgIData(oldp+1055,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1021]),32);
        bufp->chgIData(oldp+1056,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1022]),32);
        bufp->chgIData(oldp+1057,(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[1023]),32);
        bufp->chgSData(oldp+1058,((0x3ffU & (vlSelf->top__DOT__cpu__DOT__current_pc 
                                             >> 2U))),10);
        bufp->chgCData(oldp+1059,((0x1fU & (vlSelf->top__DOT__cpu__DOT__Instr 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1060,((0x1fU & (vlSelf->top__DOT__cpu__DOT__Instr 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1061,((0x1fU & (vlSelf->top__DOT__cpu__DOT__Instr 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1062,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i),32);
        bufp->chgIData(oldp+1063,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+1064,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+1065,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+1066,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+1067,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+1068,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+1069,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+1070,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+1071,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+1072,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+1073,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+1074,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+1075,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+1076,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+1077,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+1078,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+1079,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+1080,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+1081,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+1082,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+1083,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+1084,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+1085,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+1086,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+1087,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+1088,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+1089,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+1090,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+1091,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+1092,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+1093,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+1094,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+1095,(vlSelf->reset));
    bufp->chgBit(oldp+1096,(vlSelf->clk));
    bufp->chgBit(oldp+1097,(vlSelf->is_halted));
    bufp->chgIData(oldp+1098,(vlSelf->print_reg[0]),32);
    bufp->chgIData(oldp+1099,(vlSelf->print_reg[1]),32);
    bufp->chgIData(oldp+1100,(vlSelf->print_reg[2]),32);
    bufp->chgIData(oldp+1101,(vlSelf->print_reg[3]),32);
    bufp->chgIData(oldp+1102,(vlSelf->print_reg[4]),32);
    bufp->chgIData(oldp+1103,(vlSelf->print_reg[5]),32);
    bufp->chgIData(oldp+1104,(vlSelf->print_reg[6]),32);
    bufp->chgIData(oldp+1105,(vlSelf->print_reg[7]),32);
    bufp->chgIData(oldp+1106,(vlSelf->print_reg[8]),32);
    bufp->chgIData(oldp+1107,(vlSelf->print_reg[9]),32);
    bufp->chgIData(oldp+1108,(vlSelf->print_reg[10]),32);
    bufp->chgIData(oldp+1109,(vlSelf->print_reg[11]),32);
    bufp->chgIData(oldp+1110,(vlSelf->print_reg[12]),32);
    bufp->chgIData(oldp+1111,(vlSelf->print_reg[13]),32);
    bufp->chgIData(oldp+1112,(vlSelf->print_reg[14]),32);
    bufp->chgIData(oldp+1113,(vlSelf->print_reg[15]),32);
    bufp->chgIData(oldp+1114,(vlSelf->print_reg[16]),32);
    bufp->chgIData(oldp+1115,(vlSelf->print_reg[17]),32);
    bufp->chgIData(oldp+1116,(vlSelf->print_reg[18]),32);
    bufp->chgIData(oldp+1117,(vlSelf->print_reg[19]),32);
    bufp->chgIData(oldp+1118,(vlSelf->print_reg[20]),32);
    bufp->chgIData(oldp+1119,(vlSelf->print_reg[21]),32);
    bufp->chgIData(oldp+1120,(vlSelf->print_reg[22]),32);
    bufp->chgIData(oldp+1121,(vlSelf->print_reg[23]),32);
    bufp->chgIData(oldp+1122,(vlSelf->print_reg[24]),32);
    bufp->chgIData(oldp+1123,(vlSelf->print_reg[25]),32);
    bufp->chgIData(oldp+1124,(vlSelf->print_reg[26]),32);
    bufp->chgIData(oldp+1125,(vlSelf->print_reg[27]),32);
    bufp->chgIData(oldp+1126,(vlSelf->print_reg[28]),32);
    bufp->chgIData(oldp+1127,(vlSelf->print_reg[29]),32);
    bufp->chgIData(oldp+1128,(vlSelf->print_reg[30]),32);
    bufp->chgIData(oldp+1129,(vlSelf->print_reg[31]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
