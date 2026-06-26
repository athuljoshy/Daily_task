#include "NotGate.h"

void NotGate::notGateOperation()
    {
        p_notOut_b.write(!(p_notIn_a.read()));
    }