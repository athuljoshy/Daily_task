#include <systemc.h>
#include "andGate.h"
#include "notGate.h"

SC_MODULE(NandGate)
{
    sc_in < bool > p_nandIn_a,p_nandIn_b;
    sc_out < bool > p_nandOut_c;

    sc_signal < bool > sig_andOp;

    AndGate andgate;
    NotGate notgate;

    SC_CTOR(NandGate);
};