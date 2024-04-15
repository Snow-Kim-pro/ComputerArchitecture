// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(is_halted,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__clkPC;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_control;
        CData/*0:0*/ top__DOT__cpu__DOT__PCwriteCond;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__IorD;
        CData/*0:0*/ top__DOT__cpu__DOT__MemRead;
        CData/*0:0*/ top__DOT__cpu__DOT__MemWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__MemtoReg;
        CData/*0:0*/ top__DOT__cpu__DOT__IRWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__PCSource;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSrcA;
        CData/*0:0*/ top__DOT__cpu__DOT__RegWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__bcond;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUSrcB;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUOp;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clkPC;
        CData/*0:0*/ top__DOT__cpu__DOT__Address__DOT__S;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__inst_register__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__inst_register__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__inst_register__DOT__irwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_data_register__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_data_register__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__Write_Data__DOT__S;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_buffer__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_buffer__DOT__clk;
        CData/*2:0*/ top__DOT__cpu__DOT__imm_gen__DOT__funct3;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__S;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__S;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__bcond;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__pcwritecond;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__pcwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__iord;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__memread;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__memwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__memtoreg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__irwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__pcsource;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__aluop;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alusrcB;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alusrcA;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__regwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control_op;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__sub_or_not;
        CData/*2:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3;
        CData/*3:0*/ top__DOT__cpu__DOT__alu__DOT__control;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_out__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_out__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__PCSRC__DOT__S;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__controlWord;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__curr_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__address;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_data;
        IData/*31:0*/ top__DOT__cpu__DOT__instr;
        IData/*31:0*/ top__DOT__cpu__DOT__write_data;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__regist_17;
        IData/*31:0*/ top__DOT__cpu__DOT__Imm;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__IR;
        IData/*31:0*/ top__DOT__cpu__DOT__MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__curr_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__Address__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__Address__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__Address__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__mem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__inst_register__DOT__memdata;
        IData/*31:0*/ top__DOT__cpu__DOT__inst_register__DOT__instr;
        IData/*31:0*/ top__DOT__cpu__DOT__inst_register__DOT__IR;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_data_register__DOT__memdata;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_data_register__DOT__MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__regist_17;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_buffer__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_buffer__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_buffer__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_buffer__DOT__B;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D2;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__D3;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__Y;
        IData/*31:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__regist_17;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__result;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_out__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_out__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__PCSRC__DOT__D0;
        IData/*31:0*/ top__DOT__cpu__DOT__PCSRC__DOT__D1;
        IData/*31:0*/ top__DOT__cpu__DOT__PCSRC__DOT__Y;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__memory__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCWRITECOND = 0x4000U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCWRITE = 0x2000U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__IORD = 0x1000U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__MEMREAD = 0x0800U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__MEMWRITE = 0x0400U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__MEMTOREG = 0x0200U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__IRWRITE = 0x0100U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCSOURCE = 0x0080U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP0 = 0U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP1 = 0x0020U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP2 = 0x0040U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOP3 = 0x0060U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCB0 = 0U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCB1 = 8U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCB2 = 0x0010U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSRCA = 4U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__REGWRITE = 2U;
    static constexpr SData/*14:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__IS_ECALL = 1U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__Address__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__Write_Data__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC1__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__ALUSRC2__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__PCSRC__DOT__data_width = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
