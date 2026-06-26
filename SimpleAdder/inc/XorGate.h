#ifndef XORGATE_H
#define XORGATE_H

#include<systemc.h>

class XorGate : public sc_module
{
    public:
    SC_HAS_PROCESS(XorGate);

    sc_port<sc_signal_in_if<bool> > p_xorIn_a, p_xorIn_b;
    sc_port<sc_signal_write_if<bool> > p_xorOut_c;

    void orGateOperation()
    {
        while(1)
        {
            p_xorOut_c->write( ( !p_xorIn_a->read() && p_xorIn_b->read() )  || ( p_xorIn_a->read() && !p_xorIn_b->read() ));
            wait();
        }
    }

    XorGate(sc_module_name name):
            sc_module(name)
    {
        SC_THREAD(orGateOperation);
        sensitive << p_xorIn_a << p_xorIn_b;
    }

};

#endif