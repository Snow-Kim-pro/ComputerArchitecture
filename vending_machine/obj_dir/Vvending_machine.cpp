// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvending_machine__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vvending_machine::Vvending_machine(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vvending_machine__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , i_input_coin{vlSymsp->TOP.i_input_coin}
    , i_select_item{vlSymsp->TOP.i_select_item}
    , i_trigger_return{vlSymsp->TOP.i_trigger_return}
    , o_available_item{vlSymsp->TOP.o_available_item}
    , o_output_item{vlSymsp->TOP.o_output_item}
    , o_return_coin{vlSymsp->TOP.o_return_coin}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vvending_machine::Vvending_machine(const char* _vcname__)
    : Vvending_machine(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vvending_machine::~Vvending_machine() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vvending_machine___024root___eval_debug_assertions(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
void Vvending_machine___024root___eval_static(Vvending_machine___024root* vlSelf);
void Vvending_machine___024root___eval_initial(Vvending_machine___024root* vlSelf);
void Vvending_machine___024root___eval_settle(Vvending_machine___024root* vlSelf);
void Vvending_machine___024root___eval(Vvending_machine___024root* vlSelf);

void Vvending_machine::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvending_machine::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvending_machine___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vvending_machine___024root___eval_static(&(vlSymsp->TOP));
        Vvending_machine___024root___eval_initial(&(vlSymsp->TOP));
        Vvending_machine___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vvending_machine___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vvending_machine::eventsPending() { return false; }

uint64_t Vvending_machine::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vvending_machine::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vvending_machine___024root___eval_final(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD void Vvending_machine::final() {
    Vvending_machine___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vvending_machine::hierName() const { return vlSymsp->name(); }
const char* Vvending_machine::modelName() const { return "Vvending_machine"; }
unsigned Vvending_machine::threads() const { return 1; }
void Vvending_machine::prepareClone() const { contextp()->prepareClone(); }
void Vvending_machine::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vvending_machine::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vvending_machine___024root__trace_decl_types(VerilatedVcd* tracep);

void Vvending_machine___024root__trace_init_top(Vvending_machine___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vvending_machine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvending_machine___024root*>(voidSelf);
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vvending_machine___024root__trace_decl_types(tracep);
    Vvending_machine___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vvending_machine___024root__trace_register(Vvending_machine___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vvending_machine::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vvending_machine::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vvending_machine___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
