#include "NandGate.h"

NandGate::NandGate(sc_module_name name):
        sc_module(name),
        andgate("AND"),
        notgate("NOT")
{
    andgate.p_andIn_a(p_nandIn_a);
    andgate.p_andIn_b(p_nandIn_b);

    andgate.p_andOut_c(sig_andOp);

    notgate.p_notIn_a(sig_andOp);
    notgate.p_notOut_b(p_nandOut_c);
}