#ifndef ADDER_H
#define ADDER_H
#include<systemc.h>
#include "XorGate.h"
#include "AndGate.h"

class Adder : public sc_module
{
    public:

    sc_port< sc_signal_in_if<bool> > p_adderIn_a, p_adderIn_b;
    sc_port< sc_signal_write_if<bool> > p_adderSumOut, p_adderCarryOut;

    AndGate andgate;
    XorGate xorgate;

    sc_signal <bool> sig_and_op;
    sc_signal <bool> sig_or_op;

    Adder(sc_module_name name);
    //~Adder();

};

#endif