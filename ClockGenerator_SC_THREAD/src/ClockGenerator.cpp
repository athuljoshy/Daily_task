#include "ClockGenerator.h"

void ClockGenerator::clockAction()
{
    sc_time highTime = period * dutyCycle;
    sc_time lowTime = period * (1-dutyCycle);

    while(true)
    {
        p_clkGenOut.write(true);
        wait(highTime);
        p_clkGenOut.write(false);
        wait(lowTime);
    }
}