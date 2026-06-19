#include <systemc.h>
#include "AndGate.h"
int sc_main(int argc ,char **argv)
{
    sc_signal<bool>sig_a,sig_b,sig_c;
  
    AndGate and1("AND");
    and1.p_andIn_a(sig_a);
    and1.p_andIn_b(sig_b);
    and1.p_andOut_c(sig_c);

    std::cout<<"AND gate operation "<<endl;
  
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