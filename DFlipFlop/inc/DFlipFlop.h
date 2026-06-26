#ifndef DFLIPFLOP_H
#define DFLIPFLOP_H
#include<systemc.h>

class DFlipFlop : public sc_module
{
    public:
    sc_in_clk clk;
    sc_port<sc_signal_in_if<bool> > p_dflipflopIn;
    sc_port<sc_signal_write_if<bool> >p_dlipflopOut;

    void dFlipFlopOperation();

    SC_CTOR(DFlipFlop)
    {
        SC_METHOD(dFlipFlopOperation);
       // dont_initialize();
        sensitive << clk.pos();
    }

};

#endif