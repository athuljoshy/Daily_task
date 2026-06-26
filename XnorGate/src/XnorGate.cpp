#include <systemc.h>
#include "XnorGate.h" 

XNorGate ::XNorGate(sc_module_name name):
            sc_module(name),
            xorgate("XORGATE"),
            notgate("NOTGATE")
{
    xorgate.p_xorIn_a(p_xnorIn_a);
    xorgate.p_xorIn_b(p_xnorIn_b);
    xorgate.p_xorOut_c(sig_xorOp);

    notgate.p_notIn_a(sig_xorOp);
    notgate.p_notOut_b(p_xnorOut_c);
}