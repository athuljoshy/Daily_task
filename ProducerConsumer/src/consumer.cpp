#include "consumer.h"

Consumer::Consumer(sc_module_name name)
    : sc_module(name)
{
    SC_THREAD(consume);
}

void Consumer::consume()
{
    while(true)
    {
        int data = in->read();

        cout << "Consumer read : "
             << data
             << endl;

        wait(1, SC_NS);
    }
}