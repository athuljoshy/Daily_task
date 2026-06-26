#ifndef ANDGATE_H
#define ANDGATE_H

#include <systemc.h>

class AndGate : public sc_module
{
    public:
    SC_HAS_PROCESS(AndGate);
    sc_port<sc_signal_in_if<bool> >p_andIn_a, p_andIn_b;
    sc_port<sc_signal_write_if<bool> >p_andOut_c;

    void andGateOperation()
    {
        p_andOut_c->write(p_andIn_a->read() && p_andIn_b->read());
    }

    AndGate(sc_module_name name):
            sc_module(name)
    {
        SC_METHOD(andGateOperation);
        dont_initialize();
        sensitive << p_andIn_a << p_andIn_b;
    }
};

#endif
