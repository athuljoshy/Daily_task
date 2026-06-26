#pragma once
#include<systemc.h>
SC_MODULE(NotGate)
{
    sc_in <bool> p_notIn_a;
    sc_out <bool> p_notOut_b;

    void notGateOperation();

    SC_CTOR(NotGate)
    {
        SC_METHOD(notGateOperation);
        //dont_initialize();
        sensitive << p_notIn_a;
    }
};