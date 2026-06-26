#include <systemc.h>
#include "XorGate.h"
#include "AndGate.h"
#include "Adder.h"

Adder::Adder(sc_module_name name):
            sc_module(name),
            andgate("AND"),
            xorgate("XOR")
    {
        andgate.p_andIn_a(p_adderIn_a);
        andgate.p_andIn_b(p_adderIn_b);
        //andgate.p_andOut_c(sig_and_op);
        andgate.p_andOut_c(p_adderCarryOut);

        xorgate.p_xorIn_a(p_adderIn_a);
        xorgate.p_xorIn_b(p_adderIn_b);
        //orgate.p_orOut_c(sig_or_op);
        xorgate.p_xorOut_c(p_adderSumOut);
    }