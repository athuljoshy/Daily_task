#include<systemc.h>
#include "NotGate.h"

//test 
int sc_main(int argc,char **argv)
{
    sc_signal <bool> sig_a,sig_b;
    
    NotGate notgate("TOP");
    notgate.p_notIn_a(sig_a);
    notgate.p_notOut_b(sig_b);

    sig_a = true;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" O/P for NOT gate ------> b = "<<sig_b.read()<<endl;
    
    sig_a = false;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" O/P for NOT gate ------> b = "<<sig_b.read()<<endl;
    
    return 0;
}