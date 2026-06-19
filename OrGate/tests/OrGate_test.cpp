#include<systemc.h>
#include "OrGate.h"

int sc_main(int argc,char **argv)
{
    sc_signal<bool>sig_a,sig_b,sig_c;
    OrGate orGate("top");
    orGate.p_orIn_a(sig_a);
    orGate.p_orIn_b(sig_b);
    orGate.p_orOut_c(sig_c);

    std::cout<<"OR gate Operation"<<endl;

    sig_a = 0,sig_b = 0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P ------->c = "<<sig_c.read()<<endl;

    sig_a = 0,sig_b = 1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P ------->c = "<<sig_c.read()<<endl;

    sig_a = 1,sig_b = 0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P ------->c = "<<sig_c.read()<<endl;
    
    sig_a = 1,sig_b = 1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P ------->c = "<<sig_c.read()<<endl;

    return 0;
}