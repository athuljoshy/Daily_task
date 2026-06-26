#ifndef MONITOR_H
#define MONITOR_H

#include <systemc.h>

SC_MODULE(Monitor)
{
    sc_in<bool>p_monIn;
    void monitorAction()
    {
        cout << "The clock Generator gave a tic at " << sc_time_stamp() << endl;
    }

    SC_CTOR(Monitor)
    {
        SC_METHOD(monitorAction);
        dont_initialize();
        sensitive << p_monIn;
    }
};

#endif