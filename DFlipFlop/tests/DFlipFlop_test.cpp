#include<systemc.h>
#include "DFlipFlop.h"

int sc_main(int argc, char** argv)
{
    sc_signal<bool> sig_In,sig_Out;
    sc_clock sig_clk( "sig_clk", 10, SC_NS );
    DFlipFlop dflipflop("TOP");

    dflipflop.p_dflipflopIn(sig_In);
    dflipflop.p_dlipflopOut(sig_Out);
    dflipflop.clk(sig_clk);

    sig_In =true;
    sc_start(2,SC_NS);
    std::cout<<"The D Flip-Flop with input "<<sig_In<<" at 2 NS will give an output "<<sig_Out<<endl;

    sig_In =false;
    sc_start(6,SC_NS);
    std::cout<<"The D Flip-Flop with input "<<sig_In<<" at 6 NS will give an output "<<sig_Out<<endl;

    sig_In =false;
    sc_start(12,SC_NS);
    std::cout<<"The D Flip-Flop with input "<<sig_In<<" at 12 NS will give an output "<<sig_Out<<endl;

    sig_In =true;
    sc_start(15,SC_NS);
    std::cout<<"The D Flip-Flop with input "<<sig_In<<" at 15 NS will give an output "<<sig_Out<<endl;

    sig_In =false;
    sc_start(19,SC_NS);
    std::cout<<"The D Flip-Flop with input "<<sig_In<<" at 19 NS will give an output "<<sig_Out<<endl;

    sig_In =true;
    sc_start(20,SC_NS);
    std::cout<<"The D Flip-Flop with input "<<sig_In<<" at 20 NS will give an output "<<sig_Out<<endl;

    return 0;
}