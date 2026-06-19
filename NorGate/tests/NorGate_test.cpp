#include <systemc.h>
#include "NorGate.h"

int sc_main( int argc, char** argv )
{
    NorGate norgate("NORGATE");
    sc_signal < bool > sig_a, sig_b, sig_c;

    norgate.p_norIn_a(sig_a);
    norgate.p_norIn_b(sig_b);
    norgate.p_norOut_c(sig_c);

    sig_a = 1,sig_b = 0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NOR is ------->c = "<<sig_c.read()<<endl;

    sig_a = 0,sig_b = 1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NOR is ------->c = "<<sig_c.read()<<endl;

    sig_a = 0,sig_b = 0;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NOR is ------->c = "<<sig_c.read()<<endl;
    
    sig_a = 1,sig_b = 1;
    sc_start(1,SC_NS);
    std::cout<<"a = "<<sig_a.read()<<" b = "<<sig_b.read()<<" O/P after NOR is ------->c = "<<sig_c.read()<<endl;

    return 0;

}