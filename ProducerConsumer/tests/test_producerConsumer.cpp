#include <systemc.h>
#include "producer.h"
#include "consumer.h"
#include "fifo_channel.h"

int sc_main(int argc, char* argv[])
{
    Producer producer("Producer");
    Consumer consumer("Consumer");

    fifo_channel channel("Channel");

    producer.out(channel);
    consumer.in(channel);

    sc_start(10, SC_NS);

    return 0;
}