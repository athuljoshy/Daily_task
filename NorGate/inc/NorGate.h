#include <systemc.h>
#include "OrGate.h"
#include "NotGate.h"

SC_MODULE(NorGate)
{
    sc_in< bool > p_norIn_a, p_norIn_b;
    sc_out< bool > p_norOut_c;

    sc_signal < bool > sig_orOP;
    sc_signal < bool > sig_notOP;

    OrGate orgate;
    NotGate notgate;


    SC_CTOR(NorGate);
};