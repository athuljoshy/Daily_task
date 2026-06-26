#ifndef TIMER_H
#define TIMER_H

#include<systemc.h>

SC_MODULE(Timer)
{
    sc_in_clk p_timer_clk;
    sc_in<bool> p_timerEn,p_timerRst;
    sc_out<bool> p_timerDoneOut;
    unsigned int curr_count, target_count;

    void timerLogic();
    
    SC_CTOR(Timer)
    {
        curr_count = 0; target_count = 5;
        SC_THREAD(timerLogic);
        dont_initialize();
        sensitive << p_timer_clk.pos();
    }

};

#endif TIMER_H