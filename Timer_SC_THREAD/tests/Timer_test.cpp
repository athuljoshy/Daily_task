#include<systemc.h>
#include "Timer.h"
#include "Monitor.h"

int sc_main(int argv, char** argc)
{
    Timer timer("TOP_0");
    Monitor monitor("TOP_1");
    sc_signal<bool> sig_en,sig_rst,sig_done;
    sc_clock clk("clk", 10, SC_NS);

    timer.p_timer_clk(clk);
    timer.p_timerEn(sig_en);
    timer.p_timerRst(sig_rst);
    timer.p_timerDoneOut(sig_done);
    monitor.p_monitorDone(sig_done);

    sig_rst=true;
    sig_en=false;
    sc_start(10,SC_NS);

    sig_rst=false;
    sig_en=true;
    sc_start(100,SC_NS);
}