// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vvending_machine__pch.h"
#include "Vvending_machine.h"
#include "Vvending_machine___024root.h"

// FUNCTIONS
Vvending_machine__Syms::~Vvending_machine__Syms()
{
}

Vvending_machine__Syms::Vvending_machine__Syms(VerilatedContext* contextp, const char* namep, Vvending_machine* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(33);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
