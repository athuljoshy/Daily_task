#include"DFlipFlop.h"

void DFlipFlop::dFlipFlopOperation()
    {
        p_dlipflopOut->write(p_dflipflopIn->read());
    }