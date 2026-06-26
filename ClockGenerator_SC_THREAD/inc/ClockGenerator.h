#ifndef CLOCK_GENERATOR_H
#define CLOCK_GENERATOR_H

#include<systemc.h>

class ClockGenerator : 
        public sc_module
{
    public:
    sc_out<bool> p_clkGenOut;
    sc_time period;
    double dutyCycle;

    void clockAction();

    SC_CTOR(ClockGenerator)
    {
        period = sc_time(20,SC_NS);
        dutyCycle = 0.5;

        SC_THREAD(clockAction);
    }
};


#endif