#ifndef MONITOR_H
#define MONITOR_H

#include<systemc.h>

class Monitor: public sc_module
{
    public:
    sc_port<sc_signal_in_if<bool> > p_monitorDone;

    void monitorAction()
    {
        std::cout << "The status timer done at " << sc_time_stamp() << " is " << p_monitorDone->read() <<endl;
    }
    SC_CTOR(Monitor)
    {
        SC_METHOD(monitorAction);
        sensitive << p_monitorDone;
    }
};

#endif