#pragma once
#include <systemc.h>
#include "fifo_if.h"

class fifo_channel :
    public sc_channel,
    public fifo_if
{
private:
    int m_data;

public:
    fifo_channel(sc_module_name name);

    void write(int data) override;
    int read() override;
};
