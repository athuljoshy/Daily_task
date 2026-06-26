#include <systemc.h>
#include "XorGate.h"
#include "AndGate.h"
#include "Adder.h"

int sc_main(int argc, char** argv)
{
    sc_signal < bool > sig_a, sig_b, sig_c, sig_d;
    Adder adder("TOP");

    adder.p_adderIn_a(sig_a);
    adder.p_adderIn_b(sig_b);
    adder.p_adderCarryOut(sig_c);
    adder.p_adderSumOut(sig_d);

    sig_a = true; sig_b = false;
    sc_start(1,SC_NS);
    std::cout << "For the input sig_a = "<< sig_a <<" and sig_b = "<< sig_b <<" the O/P sum will be "<< sig_d << " ans it's carry will be "<<sig_c<<endl;

    sig_a = false; sig_b = true;
    sc_start(1,SC_NS);
    std::cout << "For the input sig_a = "<< sig_a <<" and sig_b = "<< sig_b <<" the O/P sum will be "<< sig_d << " ans it's carry will be "<<sig_c<<endl;
    
    sig_a = false; sig_b = false;
    sc_start(1,SC_NS);
    std::cout << "For the input sig_a = "<< sig_a <<" and sig_b = "<< sig_b <<" the O/P sum will be "<< sig_d << " ans it's carry will be "<<sig_c<<endl;

    sig_a = true; sig_b = true;
    sc_start(1,SC_NS);
    std::cout << "For the input sig_a = "<< sig_a <<" and sig_b = "<< sig_b <<" the O/P sum will be "<< sig_d << " ans it's carry will be "<<sig_c<<endl;
    
    return 0;
}