#pragma once
#include <systemc.h>
#include "fifo_if.h"

SC_MODULE(Producer)
{
    sc_port<fifo_if> out;

    void produce();

    SC_CTOR(Producer);
};
