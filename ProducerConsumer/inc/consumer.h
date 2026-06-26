#pragma once
#include <systemc.h>
#include "fifo_if.h"

SC_MODULE(Consumer)
{
    sc_port<fifo_if> in;

    void consume();

    SC_CTOR(Consumer);
};
