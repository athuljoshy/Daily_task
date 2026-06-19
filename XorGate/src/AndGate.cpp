#include "AndGate.h"

void AndGate::and_operation()
{
    p_andOut_c.write(p_andIn_a.read() && p_andIn_b.read());
}