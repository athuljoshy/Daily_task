#include <systemc.h>
#include "XnorGate.h"

int sc_main(int argc, char** argv)
{
    sc_signal < bool > sig_a, sig_b, sig_c;
    XNorGate xnorgate("XNORGATE");
    xnorgate.p_xnorIn_a(sig_a);
    xnorgate.p_xnorIn_b(sig_b);
    xnorgate.p_xnorOut_c(sig_c);

    sig_a = 0,sig_b =0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XNOR------->c = "<<sig_c.read()<<endl;

    sig_a = 0,sig_b =1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XNOR------->c = "<<sig_c.read()<<endl;

    sig_a = 1,sig_b =0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XNOR------->c = "<<sig_c.read()<<endl;

    sig_a = 1,sig_b =1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after XNOR------->c = "<<sig_c.read()<<endl;
    return 0;
}