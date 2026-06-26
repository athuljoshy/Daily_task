#include "fifo_channel.h"

fifo_channel::fifo_channel(sc_module_name name)
    : sc_channel(name)
{
}

void fifo_channel::write(int data)
{
    m_data = data;
}

int fifo_channel::read()
{
    return m_data;
}