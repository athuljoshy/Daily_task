#include<systemc.h>
#include"XorGate.h"

int sc_main(int argc,char **argv)
{
    sc_signal<bool>sig_a,sig_b,sig_c;

    XorGate xor1("TOP");

    xor1.p_xorIn_a(sig_a);
    xor1.p_xorIn_b(sig_b);
    xor1.p_xorOut_c(sig_c);

    sig_a = 0,sig_b =0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XOR------->c = "<<sig_c.read()<<endl;

    sig_a = 0,sig_b =1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XOR------->c = "<<sig_c.read()<<endl;

    sig_a = 1,sig_b =0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XOR------->c = "<<sig_c.read()<<endl;

    sig_a = 1,sig_b =1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XOR------->c = "<<sig_c.read()<<endl;
    return 0;
}