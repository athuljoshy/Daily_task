#include "producer.h"

Producer::Producer(sc_module_name name)
    : sc_module(name)
{
    SC_THREAD(produce);
}

void Producer::produce()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Producer wrote : "
             << i
             << endl;

        out->write(i);

        wait(1, SC_NS);
    }
    out->write(0);
}