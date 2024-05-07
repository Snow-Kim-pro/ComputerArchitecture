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
    bufp->chgBit(oldp+0,(vlSelf->reset));
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgBit(oldp+2,(vlSelf->is_halted));
    bufp->chgIData(oldp+3,(vlSelf->print_reg[0]),32);
    bufp->chgIData(oldp+4,(vlSelf->print_reg[1]),32);
    bufp->chgIData(oldp+5,(vlSelf->print_reg[2]),32);
    bufp->chgIData(oldp+6,(vlSelf->print_reg[3]),32);
    bufp->chgIData(oldp+7,(vlSelf->print_reg[4]),32);
    bufp->chgIData(oldp+8,(vlSelf->print_reg[5]),32);
    bufp->chgIData(oldp+9,(vlSelf->print_reg[6]),32);
    bufp->chgIData(oldp+10,(vlSelf->print_reg[7]),32);
    bufp->chgIData(oldp+11,(vlSelf->print_reg[8]),32);
    bufp->chgIData(oldp+12,(vlSelf->print_reg[9]),32);
    bufp->chgIData(oldp+13,(vlSelf->print_reg[10]),32);
    bufp->chgIData(oldp+14,(vlSelf->print_reg[11]),32);
    bufp->chgIData(oldp+15,(vlSelf->print_reg[12]),32);
    bufp->chgIData(oldp+16,(vlSelf->print_reg[13]),32);
    bufp->chgIData(oldp+17,(vlSelf->print_reg[14]),32);
    bufp->chgIData(oldp+18,(vlSelf->print_reg[15]),32);
    bufp->chgIData(oldp+19,(vlSelf->print_reg[16]),32);
    bufp->chgIData(oldp+20,(vlSelf->print_reg[17]),32);
    bufp->chgIData(oldp+21,(vlSelf->print_reg[18]),32);
    bufp->chgIData(oldp+22,(vlSelf->print_reg[19]),32);
    bufp->chgIData(oldp+23,(vlSelf->print_reg[20]),32);
    bufp->chgIData(oldp+24,(vlSelf->print_reg[21]),32);
    bufp->chgIData(oldp+25,(vlSelf->print_reg[22]),32);
    bufp->chgIData(oldp+26,(vlSelf->print_reg[23]),32);
    bufp->chgIData(oldp+27,(vlSelf->print_reg[24]),32);
    bufp->chgIData(oldp+28,(vlSelf->print_reg[25]),32);
    bufp->chgIData(oldp+29,(vlSelf->print_reg[26]),32);
    bufp->chgIData(oldp+30,(vlSelf->print_reg[27]),32);
    bufp->chgIData(oldp+31,(vlSelf->print_reg[28]),32);
    bufp->chgIData(oldp+32,(vlSelf->print_reg[29]),32);
    bufp->chgIData(oldp+33,(vlSelf->print_reg[30]),32);
    bufp->chgIData(oldp+34,(vlSelf->print_reg[31]),32);
    bufp->chgBit(oldp+35,(vlSelf->top__DOT__reset));
    bufp->chgBit(oldp+36,(vlSelf->top__DOT__clk));
    bufp->chgBit(oldp+37,(vlSelf->top__DOT__is_halted));
    bufp->chgIData(oldp+38,(vlSelf->top__DOT__print_reg[0]),32);
    bufp->chgIData(oldp+39,(vlSelf->top__DOT__print_reg[1]),32);
    bufp->chgIData(oldp+40,(vlSelf->top__DOT__print_reg[2]),32);
    bufp->chgIData(oldp+41,(vlSelf->top__DOT__print_reg[3]),32);
    bufp->chgIData(oldp+42,(vlSelf->top__DOT__print_reg[4]),32);
    bufp->chgIData(oldp+43,(vlSelf->top__DOT__print_reg[5]),32);
    bufp->chgIData(oldp+44,(vlSelf->top__DOT__print_reg[6]),32);
    bufp->chgIData(oldp+45,(vlSelf->top__DOT__print_reg[7]),32);
    bufp->chgIData(oldp+46,(vlSelf->top__DOT__print_reg[8]),32);
    bufp->chgIData(oldp+47,(vlSelf->top__DOT__print_reg[9]),32);
    bufp->chgIData(oldp+48,(vlSelf->top__DOT__print_reg[10]),32);
    bufp->chgIData(oldp+49,(vlSelf->top__DOT__print_reg[11]),32);
    bufp->chgIData(oldp+50,(vlSelf->top__DOT__print_reg[12]),32);
    bufp->chgIData(oldp+51,(vlSelf->top__DOT__print_reg[13]),32);
    bufp->chgIData(oldp+52,(vlSelf->top__DOT__print_reg[14]),32);
    bufp->chgIData(oldp+53,(vlSelf->top__DOT__print_reg[15]),32);
    bufp->chgIData(oldp+54,(vlSelf->top__DOT__print_reg[16]),32);
    bufp->chgIData(oldp+55,(vlSelf->top__DOT__print_reg[17]),32);
    bufp->chgIData(oldp+56,(vlSelf->top__DOT__print_reg[18]),32);
    bufp->chgIData(oldp+57,(vlSelf->top__DOT__print_reg[19]),32);
    bufp->chgIData(oldp+58,(vlSelf->top__DOT__print_reg[20]),32);
    bufp->chgIData(oldp+59,(vlSelf->top__DOT__print_reg[21]),32);
    bufp->chgIData(oldp+60,(vlSelf->top__DOT__print_reg[22]),32);
    bufp->chgIData(oldp+61,(vlSelf->top__DOT__print_reg[23]),32);
    bufp->chgIData(oldp+62,(vlSelf->top__DOT__print_reg[24]),32);
    bufp->chgIData(oldp+63,(vlSelf->top__DOT__print_reg[25]),32);
    bufp->chgIData(oldp+64,(vlSelf->top__DOT__print_reg[26]),32);
    bufp->chgIData(oldp+65,(vlSelf->top__DOT__print_reg[27]),32);
    bufp->chgIData(oldp+66,(vlSelf->top__DOT__print_reg[28]),32);
    bufp->chgIData(oldp+67,(vlSelf->top__DOT__print_reg[29]),32);
    bufp->chgIData(oldp+68,(vlSelf->top__DOT__print_reg[30]),32);
    bufp->chgIData(oldp+69,(vlSelf->top__DOT__print_reg[31]),32);
    bufp->chgBit(oldp+70,(vlSelf->top__DOT__cpu__DOT__reset));
    bufp->chgBit(oldp+71,(vlSelf->top__DOT__cpu__DOT__clk));
    bufp->chgBit(oldp+72,(vlSelf->top__DOT__cpu__DOT__is_halted));
    bufp->chgIData(oldp+73,(vlSelf->top__DOT__cpu__DOT__print_reg[0]),32);
    bufp->chgIData(oldp+74,(vlSelf->top__DOT__cpu__DOT__print_reg[1]),32);
    bufp->chgIData(oldp+75,(vlSelf->top__DOT__cpu__DOT__print_reg[2]),32);
    bufp->chgIData(oldp+76,(vlSelf->top__DOT__cpu__DOT__print_reg[3]),32);
    bufp->chgIData(oldp+77,(vlSelf->top__DOT__cpu__DOT__print_reg[4]),32);
    bufp->chgIData(oldp+78,(vlSelf->top__DOT__cpu__DOT__print_reg[5]),32);
    bufp->chgIData(oldp+79,(vlSelf->top__DOT__cpu__DOT__print_reg[6]),32);
    bufp->chgIData(oldp+80,(vlSelf->top__DOT__cpu__DOT__print_reg[7]),32);
    bufp->chgIData(oldp+81,(vlSelf->top__DOT__cpu__DOT__print_reg[8]),32);
    bufp->chgIData(oldp+82,(vlSelf->top__DOT__cpu__DOT__print_reg[9]),32);
    bufp->chgIData(oldp+83,(vlSelf->top__DOT__cpu__DOT__print_reg[10]),32);
    bufp->chgIData(oldp+84,(vlSelf->top__DOT__cpu__DOT__print_reg[11]),32);
    bufp->chgIData(oldp+85,(vlSelf->top__DOT__cpu__DOT__print_reg[12]),32);
    bufp->chgIData(oldp+86,(vlSelf->top__DOT__cpu__DOT__print_reg[13]),32);
    bufp->chgIData(oldp+87,(vlSelf->top__DOT__cpu__DOT__print_reg[14]),32);
    bufp->chgIData(oldp+88,(vlSelf->top__DOT__cpu__DOT__print_reg[15]),32);
    bufp->chgIData(oldp+89,(vlSelf->top__DOT__cpu__DOT__print_reg[16]),32);
    bufp->chgIData(oldp+90,(vlSelf->top__DOT__cpu__DOT__print_reg[17]),32);
    bufp->chgIData(oldp+91,(vlSelf->top__DOT__cpu__DOT__print_reg[18]),32);
    bufp->chgIData(oldp+92,(vlSelf->top__DOT__cpu__DOT__print_reg[19]),32);
    bufp->chgIData(oldp+93,(vlSelf->top__DOT__cpu__DOT__print_reg[20]),32);
    bufp->chgIData(oldp+94,(vlSelf->top__DOT__cpu__DOT__print_reg[21]),32);
    bufp->chgIData(oldp+95,(vlSelf->top__DOT__cpu__DOT__print_reg[22]),32);
    bufp->chgIData(oldp+96,(vlSelf->top__DOT__cpu__DOT__print_reg[23]),32);
    bufp->chgIData(oldp+97,(vlSelf->top__DOT__cpu__DOT__print_reg[24]),32);
    bufp->chgIData(oldp+98,(vlSelf->top__DOT__cpu__DOT__print_reg[25]),32);
    bufp->chgIData(oldp+99,(vlSelf->top__DOT__cpu__DOT__print_reg[26]),32);
    bufp->chgIData(oldp+100,(vlSelf->top__DOT__cpu__DOT__print_reg[27]),32);
    bufp->chgIData(oldp+101,(vlSelf->top__DOT__cpu__DOT__print_reg[28]),32);
    bufp->chgIData(oldp+102,(vlSelf->top__DOT__cpu__DOT__print_reg[29]),32);
    bufp->chgIData(oldp+103,(vlSelf->top__DOT__cpu__DOT__print_reg[30]),32);
    bufp->chgIData(oldp+104,(vlSelf->top__DOT__cpu__DOT__print_reg[31]),32);
    bufp->chgIData(oldp+105,(vlSelf->top__DOT__cpu__DOT__curr_pc),32);
    bufp->chgIData(oldp+106,(vlSelf->top__DOT__cpu__DOT__next_pc),32);
    bufp->chgIData(oldp+107,(vlSelf->top__DOT__cpu__DOT__pc_add4),32);
    bufp->chgIData(oldp+108,(vlSelf->top__DOT__cpu__DOT__pc_addr),32);
    bufp->chgIData(oldp+109,(vlSelf->top__DOT__cpu__DOT__pc_result),32);
    bufp->chgIData(oldp+110,(vlSelf->top__DOT__cpu__DOT__inst),32);
    bufp->chgBit(oldp+111,(vlSelf->top__DOT__cpu__DOT__pcwrite));
    bufp->chgBit(oldp+112,(vlSelf->top__DOT__cpu__DOT__if_id_write));
    bufp->chgBit(oldp+113,(vlSelf->top__DOT__cpu__DOT__control_mux));
    bufp->chgBit(oldp+114,(vlSelf->top__DOT__cpu__DOT__jal));
    bufp->chgBit(oldp+115,(vlSelf->top__DOT__cpu__DOT__jalr));
    bufp->chgBit(oldp+116,(vlSelf->top__DOT__cpu__DOT__branch));
    bufp->chgBit(oldp+117,(vlSelf->top__DOT__cpu__DOT__pc_to_reg));
    bufp->chgBit(oldp+118,(vlSelf->top__DOT__cpu__DOT__PCSrc1));
    bufp->chgBit(oldp+119,(vlSelf->top__DOT__cpu__DOT__mem_read));
    bufp->chgBit(oldp+120,(vlSelf->top__DOT__cpu__DOT__mem_to_reg));
    bufp->chgBit(oldp+121,(vlSelf->top__DOT__cpu__DOT__mem_write));
    bufp->chgBit(oldp+122,(vlSelf->top__DOT__cpu__DOT__alu_src));
    bufp->chgBit(oldp+123,(vlSelf->top__DOT__cpu__DOT__write_enable));
    bufp->chgBit(oldp+124,(vlSelf->top__DOT__cpu__DOT__is_ecall));
    bufp->chgBit(oldp+125,(vlSelf->top__DOT__cpu__DOT__bcond));
    bufp->chgCData(oldp+126,(vlSelf->top__DOT__cpu__DOT__alu_op),2);
    bufp->chgIData(oldp+127,(vlSelf->top__DOT__cpu__DOT__write_data),32);
    bufp->chgIData(oldp+128,(vlSelf->top__DOT__cpu__DOT__rs1_dout),32);
    bufp->chgIData(oldp+129,(vlSelf->top__DOT__cpu__DOT__rs2_dout),32);
    bufp->chgIData(oldp+130,(vlSelf->top__DOT__cpu__DOT__imm_gen_out),32);
    bufp->chgSData(oldp+131,(vlSelf->top__DOT__cpu__DOT__control_output),12);
    bufp->chgIData(oldp+132,(vlSelf->top__DOT__cpu__DOT__alu_in_1),32);
    bufp->chgIData(oldp+133,(vlSelf->top__DOT__cpu__DOT__alu_in_2),32);
    bufp->chgIData(oldp+134,(vlSelf->top__DOT__cpu__DOT__alu_src2_out),32);
    bufp->chgIData(oldp+135,(vlSelf->top__DOT__cpu__DOT__alu_result),32);
    bufp->chgCData(oldp+136,(vlSelf->top__DOT__cpu__DOT__alu_control),4);
    bufp->chgCData(oldp+137,(vlSelf->top__DOT__cpu__DOT__foward_A),2);
    bufp->chgCData(oldp+138,(vlSelf->top__DOT__cpu__DOT__foward_B),2);
    bufp->chgIData(oldp+139,(vlSelf->top__DOT__cpu__DOT__mem_dout),32);
    bufp->chgIData(oldp+140,(vlSelf->top__DOT__cpu__DOT__wb_dout),32);
    bufp->chgIData(oldp+141,(vlSelf->top__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->chgIData(oldp+142,(vlSelf->top__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->chgIData(oldp+143,(vlSelf->top__DOT__cpu__DOT__IF_ID_pc4),32);
    bufp->chgCData(oldp+144,(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op),2);
    bufp->chgBit(oldp+145,(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src));
    bufp->chgBit(oldp+146,(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write));
    bufp->chgBit(oldp+147,(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read));
    bufp->chgBit(oldp+148,(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg));
    bufp->chgBit(oldp+149,(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write));
    bufp->chgBit(oldp+150,(vlSelf->top__DOT__cpu__DOT__ID_EX_jal));
    bufp->chgBit(oldp+151,(vlSelf->top__DOT__cpu__DOT__ID_EX_jalr));
    bufp->chgBit(oldp+152,(vlSelf->top__DOT__cpu__DOT__ID_EX_branch));
    bufp->chgBit(oldp+153,(vlSelf->top__DOT__cpu__DOT__ID_EX_pc_ro_reg));
    bufp->chgBit(oldp+154,(vlSelf->top__DOT__cpu__DOT__ID_EX_is_ecall));
    bufp->chgIData(oldp+155,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data),32);
    bufp->chgIData(oldp+156,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data),32);
    bufp->chgIData(oldp+157,(vlSelf->top__DOT__cpu__DOT__ID_EX_imm),32);
    bufp->chgIData(oldp+158,(vlSelf->top__DOT__cpu__DOT__ID_EX_pc),32);
    bufp->chgIData(oldp+159,(vlSelf->top__DOT__cpu__DOT__ID_EX_pc4),32);
    bufp->chgCData(oldp+160,(vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input),4);
    bufp->chgCData(oldp+161,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1),5);
    bufp->chgCData(oldp+162,(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2),5);
    bufp->chgCData(oldp+163,(vlSelf->top__DOT__cpu__DOT__ID_EX_rd),5);
    bufp->chgBit(oldp+164,(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write));
    bufp->chgBit(oldp+165,(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read));
    bufp->chgBit(oldp+166,(vlSelf->top__DOT__cpu__DOT__EX_MEM_is_branch));
    bufp->chgBit(oldp+167,(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg));
    bufp->chgBit(oldp+168,(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write));
    bufp->chgBit(oldp+169,(vlSelf->top__DOT__cpu__DOT__EX_MEM_is_ecall));
    bufp->chgBit(oldp+170,(vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg));
    bufp->chgIData(oldp+171,(vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out),32);
    bufp->chgIData(oldp+172,(vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data),32);
    bufp->chgIData(oldp+173,(vlSelf->top__DOT__cpu__DOT__EX_MEM_pc4),32);
    bufp->chgCData(oldp+174,(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd),5);
    bufp->chgBit(oldp+175,(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg));
    bufp->chgBit(oldp+176,(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write));
    bufp->chgBit(oldp+177,(vlSelf->top__DOT__cpu__DOT__MEM_WB_is_ecall));
    bufp->chgBit(oldp+178,(vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg));
    bufp->chgIData(oldp+179,(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0),32);
    bufp->chgIData(oldp+180,(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1),32);
    bufp->chgIData(oldp+181,(vlSelf->top__DOT__cpu__DOT__MEM_WB_pc4),32);
    bufp->chgCData(oldp+182,(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd),5);
    bufp->chgCData(oldp+183,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__S),2);
    bufp->chgIData(oldp+184,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D0),32);
    bufp->chgIData(oldp+185,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D1),32);
    bufp->chgIData(oldp+186,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D2),32);
    bufp->chgIData(oldp+187,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__D3),32);
    bufp->chgIData(oldp+188,(vlSelf->top__DOT__cpu__DOT__ALUSRC1__DOT__Y),32);
    bufp->chgCData(oldp+189,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__S),2);
    bufp->chgIData(oldp+190,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D0),32);
    bufp->chgIData(oldp+191,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D1),32);
    bufp->chgIData(oldp+192,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D2),32);
    bufp->chgIData(oldp+193,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__D3),32);
    bufp->chgIData(oldp+194,(vlSelf->top__DOT__cpu__DOT__ALUSRC2__DOT__Y),32);
    bufp->chgBit(oldp+195,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__S));
    bufp->chgIData(oldp+196,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D0),32);
    bufp->chgIData(oldp+197,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__D1),32);
    bufp->chgIData(oldp+198,(vlSelf->top__DOT__cpu__DOT__ALUSRC_IMM__DOT__Y),32);
    bufp->chgBit(oldp+199,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__S));
    bufp->chgIData(oldp+200,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__D0),32);
    bufp->chgIData(oldp+201,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__D1),32);
    bufp->chgIData(oldp+202,(vlSelf->top__DOT__cpu__DOT__PCS1__DOT__Y),32);
    bufp->chgBit(oldp+203,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__S));
    bufp->chgIData(oldp+204,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__D0),32);
    bufp->chgIData(oldp+205,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__D1),32);
    bufp->chgIData(oldp+206,(vlSelf->top__DOT__cpu__DOT__PCS2__DOT__Y),32);
    bufp->chgBit(oldp+207,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__S));
    bufp->chgIData(oldp+208,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__D0),32);
    bufp->chgIData(oldp+209,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__D1),32);
    bufp->chgIData(oldp+210,(vlSelf->top__DOT__cpu__DOT__WBSRC__DOT__Y),32);
    bufp->chgBit(oldp+211,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__S));
    bufp->chgIData(oldp+212,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D0),32);
    bufp->chgIData(oldp+213,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__D1),32);
    bufp->chgIData(oldp+214,(vlSelf->top__DOT__cpu__DOT__Write_Data__DOT__Y),32);
    bufp->chgIData(oldp+215,(vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_in_1),32);
    bufp->chgIData(oldp+216,(vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_in_2),32);
    bufp->chgIData(oldp+217,(vlSelf->top__DOT__cpu__DOT__add4_PC__DOT__alu_result),32);
    bufp->chgIData(oldp+218,(vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_in_1),32);
    bufp->chgIData(oldp+219,(vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_in_2),32);
    bufp->chgIData(oldp+220,(vlSelf->top__DOT__cpu__DOT__addr_PC__DOT__alu_result),32);
    bufp->chgIData(oldp+221,(vlSelf->top__DOT__cpu__DOT__alu__DOT__in_1),32);
    bufp->chgIData(oldp+222,(vlSelf->top__DOT__cpu__DOT__alu__DOT__in_2),32);
    bufp->chgCData(oldp+223,(vlSelf->top__DOT__cpu__DOT__alu__DOT__control),4);
    bufp->chgBit(oldp+224,(vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond));
    bufp->chgIData(oldp+225,(vlSelf->top__DOT__cpu__DOT__alu__DOT__result),32);
    bufp->chgCData(oldp+226,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst),4);
    bufp->chgCData(oldp+227,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op),2);
    bufp->chgCData(oldp+228,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control),4);
    bufp->chgBit(oldp+229,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not));
    bufp->chgCData(oldp+230,(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3),3);
    bufp->chgBit(oldp+231,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__S));
    bufp->chgSData(oldp+232,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__D0),12);
    bufp->chgSData(oldp+233,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__D1),12);
    bufp->chgSData(oldp+234,(vlSelf->top__DOT__cpu__DOT__control_signal__DOT__Y),12);
    bufp->chgCData(oldp+235,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode),7);
    bufp->chgBit(oldp+236,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal));
    bufp->chgBit(oldp+237,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr));
    bufp->chgBit(oldp+238,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch));
    bufp->chgBit(oldp+239,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg));
    bufp->chgBit(oldp+240,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read));
    bufp->chgBit(oldp+241,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg));
    bufp->chgBit(oldp+242,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write));
    bufp->chgBit(oldp+243,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src));
    bufp->chgBit(oldp+244,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable));
    bufp->chgCData(oldp+245,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op),2);
    bufp->chgBit(oldp+246,(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall));
    bufp->chgBit(oldp+247,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__reset));
    bufp->chgBit(oldp+248,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__clk));
    bufp->chgIData(oldp+249,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__addr),32);
    bufp->chgIData(oldp+250,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__din),32);
    bufp->chgBit(oldp+251,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_read));
    bufp->chgBit(oldp+252,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_write));
    bufp->chgIData(oldp+253,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__dout),32);
    bufp->chgIData(oldp+254,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__i),32);
    bufp->chgIData(oldp+255,(vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr),32);
    bufp->chgCData(oldp+256,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_rd),5);
    bufp->chgCData(oldp+257,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_rd),5);
    bufp->chgCData(oldp+258,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__rs1),5);
    bufp->chgCData(oldp+259,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__rs2),5);
    bufp->chgBit(oldp+260,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ex_mem_RW));
    bufp->chgBit(oldp+261,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mem_wb_RW));
    bufp->chgCData(oldp+262,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_A),2);
    bufp->chgCData(oldp+263,(vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__mux_forward_B),2);
    bufp->chgCData(oldp+264,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__opcode),7);
    bufp->chgCData(oldp+265,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs1),5);
    bufp->chgCData(oldp+266,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__rs2),5);
    bufp->chgCData(oldp+267,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_rd),5);
    bufp->chgBit(oldp+268,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__id_ex_memread));
    bufp->chgBit(oldp+269,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__pcwrite));
    bufp->chgBit(oldp+270,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__if_id_write));
    bufp->chgBit(oldp+271,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__control_mux));
    bufp->chgBit(oldp+272,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs1));
    bufp->chgBit(oldp+273,(vlSelf->top__DOT__cpu__DOT__hazard_detectoin_unit__DOT__use_rs2));
    bufp->chgBit(oldp+274,(vlSelf->top__DOT__cpu__DOT__imem__DOT__reset));
    bufp->chgBit(oldp+275,(vlSelf->top__DOT__cpu__DOT__imem__DOT__clk));
    bufp->chgIData(oldp+276,(vlSelf->top__DOT__cpu__DOT__imem__DOT__addr),32);
    bufp->chgIData(oldp+277,(vlSelf->top__DOT__cpu__DOT__imem__DOT__dout),32);
    bufp->chgIData(oldp+278,(vlSelf->top__DOT__cpu__DOT__imem__DOT__i),32);
    bufp->chgIData(oldp+279,(vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr),32);
    bufp->chgIData(oldp+280,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst),32);
    bufp->chgIData(oldp+281,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out),32);
    bufp->chgCData(oldp+282,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__funct3),3);
    bufp->chgCData(oldp+283,(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode),7);
    bufp->chgBit(oldp+284,(vlSelf->top__DOT__cpu__DOT__pc__DOT__reset));
    bufp->chgBit(oldp+285,(vlSelf->top__DOT__cpu__DOT__pc__DOT__clk));
    bufp->chgBit(oldp+286,(vlSelf->top__DOT__cpu__DOT__pc__DOT__pcwrite));
    bufp->chgIData(oldp+287,(vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc),32);
    bufp->chgIData(oldp+288,(vlSelf->top__DOT__cpu__DOT__pc__DOT__curr_pc),32);
    bufp->chgBit(oldp+289,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset));
    bufp->chgBit(oldp+290,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk));
    bufp->chgCData(oldp+291,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1),5);
    bufp->chgCData(oldp+292,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2),5);
    bufp->chgCData(oldp+293,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd),5);
    bufp->chgIData(oldp+294,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din),32);
    bufp->chgBit(oldp+295,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable));
    bufp->chgIData(oldp+296,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout),32);
    bufp->chgIData(oldp+297,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout),32);
    bufp->chgIData(oldp+298,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0]),32);
    bufp->chgIData(oldp+299,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1]),32);
    bufp->chgIData(oldp+300,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2]),32);
    bufp->chgIData(oldp+301,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3]),32);
    bufp->chgIData(oldp+302,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4]),32);
    bufp->chgIData(oldp+303,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5]),32);
    bufp->chgIData(oldp+304,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6]),32);
    bufp->chgIData(oldp+305,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7]),32);
    bufp->chgIData(oldp+306,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8]),32);
    bufp->chgIData(oldp+307,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9]),32);
    bufp->chgIData(oldp+308,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[10]),32);
    bufp->chgIData(oldp+309,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[11]),32);
    bufp->chgIData(oldp+310,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[12]),32);
    bufp->chgIData(oldp+311,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[13]),32);
    bufp->chgIData(oldp+312,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[14]),32);
    bufp->chgIData(oldp+313,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[15]),32);
    bufp->chgIData(oldp+314,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[16]),32);
    bufp->chgIData(oldp+315,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[17]),32);
    bufp->chgIData(oldp+316,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[18]),32);
    bufp->chgIData(oldp+317,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[19]),32);
    bufp->chgIData(oldp+318,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[20]),32);
    bufp->chgIData(oldp+319,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[21]),32);
    bufp->chgIData(oldp+320,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[22]),32);
    bufp->chgIData(oldp+321,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[23]),32);
    bufp->chgIData(oldp+322,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[24]),32);
    bufp->chgIData(oldp+323,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[25]),32);
    bufp->chgIData(oldp+324,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[26]),32);
    bufp->chgIData(oldp+325,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[27]),32);
    bufp->chgIData(oldp+326,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[28]),32);
    bufp->chgIData(oldp+327,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[29]),32);
    bufp->chgIData(oldp+328,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[30]),32);
    bufp->chgIData(oldp+329,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[31]),32);
    bufp->chgIData(oldp+330,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i),32);
    bufp->chgIData(oldp+331,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0]),32);
    bufp->chgIData(oldp+332,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1]),32);
    bufp->chgIData(oldp+333,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2]),32);
    bufp->chgIData(oldp+334,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3]),32);
    bufp->chgIData(oldp+335,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4]),32);
    bufp->chgIData(oldp+336,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5]),32);
    bufp->chgIData(oldp+337,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6]),32);
    bufp->chgIData(oldp+338,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7]),32);
    bufp->chgIData(oldp+339,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8]),32);
    bufp->chgIData(oldp+340,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9]),32);
    bufp->chgIData(oldp+341,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[10]),32);
    bufp->chgIData(oldp+342,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[11]),32);
    bufp->chgIData(oldp+343,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[12]),32);
    bufp->chgIData(oldp+344,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[13]),32);
    bufp->chgIData(oldp+345,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[14]),32);
    bufp->chgIData(oldp+346,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[15]),32);
    bufp->chgIData(oldp+347,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[16]),32);
    bufp->chgIData(oldp+348,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[17]),32);
    bufp->chgIData(oldp+349,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[18]),32);
    bufp->chgIData(oldp+350,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[19]),32);
    bufp->chgIData(oldp+351,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[20]),32);
    bufp->chgIData(oldp+352,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[21]),32);
    bufp->chgIData(oldp+353,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[22]),32);
    bufp->chgIData(oldp+354,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[23]),32);
    bufp->chgIData(oldp+355,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[24]),32);
    bufp->chgIData(oldp+356,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[25]),32);
    bufp->chgIData(oldp+357,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[26]),32);
    bufp->chgIData(oldp+358,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[27]),32);
    bufp->chgIData(oldp+359,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[28]),32);
    bufp->chgIData(oldp+360,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[29]),32);
    bufp->chgIData(oldp+361,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[30]),32);
    bufp->chgIData(oldp+362,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[31]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
