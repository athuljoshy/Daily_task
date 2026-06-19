#include <systemc.h>
#include "NandGate.h"

int sc_main( int argc, char** argv )
{   
    NandGate nandgate("TOP");
    sc_signal<bool>sig_a,sig_b,sig_c;

    nandgate.p_nandIn_a(sig_a);
    nandgate.p_nandIn_b(sig_b);
    nandgate.p_nandOut_c(sig_c);

    sig_a = 1,sig_b = 0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NAND is ------->c = "<<sig_c.read()<<endl;

    sig_a = 0,sig_b = 1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NAND is ------->c = "<<sig_c.read()<<endl;

    sig_a = 0,sig_b = 0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NAND is ------->c = "<<sig_c.read()<<endl;
    
    sig_a = 1,sig_b = 1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NAND is ------->c = "<<sig_c.read()<<endl;

    return 0;

}