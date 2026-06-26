#pragma once

#include <systemc.h>
#include "XorGate.h"
#include "NotGate.h"

SC_MODULE(XNorGate)
{
    sc_in < bool > p_xnorIn_a, p_xnorIn_b;
    sc_out < bool > p_xnorOut_c;

    XorGate xorgate;
    NotGate notgate;

    sc_signal < bool > sig_xorOp;
    sc_signal < bool > sig_notOp;

    SC_CTOR(XNorGate);
};