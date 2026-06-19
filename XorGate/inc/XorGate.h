#include <systemc.h>
#include "AndGate.h"
#include "OrGate.h"
#include "NotGate.h"

SC_MODULE(XorGate)
{
    sc_in< bool > p_xorIn_a, p_xorIn_b;
    sc_out< bool > p_xorOut_c;

    AndGate andgate1, andgate2;
    NotGate notgate1, notgate2;
    OrGate orgate1;

    sc_signal< bool > sig_andOut_p_xorIn_1, sig_andOut_p_xorIn_2;
    sc_signal< bool > sig_notOut_p_xorIn_a, sig_notOut_p_xorIn_b;
    sc_signal< bool > sig_orOut;

    SC_CTOR(XorGate);

};