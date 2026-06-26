#include<systemc.h>
#include"ClockGenerator.h"
#include"Monitor.h"

int sc_main(int argv, char** argc)
{
    ClockGenerator clockgen("TOP_0");
    Monitor monitor("TOP_1");

    sc_signal<bool>sig_clk;
    clockgen.dutyCycle = .6;
    clockgen.period = sc_time(10,SC_NS);
    
    clockgen.p_clkGenOut(sig_clk);
    monitor.p_monIn(sig_clk);
    sc_start(50,SC_NS);
    
    return 0;
}