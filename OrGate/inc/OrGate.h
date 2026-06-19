#include<systemc.h>
SC_MODULE(OrGate)
{
    sc_in<bool>p_orIn_a,p_orIn_b;
    sc_out<bool>p_orOut_c;

    SC_CTOR(OrGate)
    {
        SC_METHOD(or_gate_operation);
        dont_initialize();
        sensitive << p_orIn_a << p_orIn_b;
    }
    void or_gate_operation();
};