#pragma once
#include <systemc.h>

class fifo_if : public sc_interface
{
public:
    virtual void write(int data) = 0;
    virtual int read() = 0;
};

