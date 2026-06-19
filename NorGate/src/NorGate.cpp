#include "NorGate.h"

NorGate ::NorGate(sc_module_name name):
        sc_module(name),
        orgate("ORGATE"),
        notgate("NOTGATE")
    {
        orgate.p_orIn_a(p_norIn_a);
        orgate.p_orIn_b(p_norIn_b);
        orgate.p_orOut_c(sig_orOP);

        notgate.p_notIn_a(sig_orOP);
        notgate.p_notOut_b(p_norOut_c);
    }