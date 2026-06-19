#include"Orgate.h"
void OrGate::or_gate_operation()
    {
        p_orOut_c.write(p_orIn_a.read() || p_orIn_b.read());
    }