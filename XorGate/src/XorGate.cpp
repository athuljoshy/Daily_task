#include "XorGate.h"

XorGate ::XorGate(sc_module_name name):
            sc_module(name),
            notgate1("NOTGATE"),
            notgate2("NOTGATE2"),
            andgate1("ANDGATE"),
            andgate2("ANDGATE2"),
            orgate1("ORGATE")
{
    notgate1.p_notIn_a(p_xorIn_a);
    notgate1.p_notOut_b(sig_notOut_p_xorIn_a);
    notgate2.p_notIn_a(p_xorIn_b);
    notgate2.p_notOut_b(sig_notOut_p_xorIn_b);

    andgate1.p_andIn_a(sig_notOut_p_xorIn_a);
    andgate1.p_andIn_b(p_xorIn_b);
    andgate1.p_andOut_c(sig_andOut_p_xorIn_1);
    andgate2.p_andIn_a(p_xorIn_a);
    andgate2.p_andIn_b(sig_notOut_p_xorIn_b);
    andgate2.p_andOut_c(sig_andOut_p_xorIn_2);

    orgate1.p_orIn_a(sig_andOut_p_xorIn_1);
    orgate1.p_orIn_b(sig_andOut_p_xorIn_2);
    //orgate1.p_orOut_c(sig_orOut);
    orgate1.p_orOut_c(p_xorOut_c);
}