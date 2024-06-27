#include "../include/and_gate.h"
#include "../include/Pin.h"

ANDGate::ANDGate(const std::string& id) : Gate(id, 2) {}

void ANDGate::evaluate() {
    bool result;
    if (getInputPin(0)->getSignal() && getInputPin(1)->getSignal()) {
        result = true;
    }
    else {
        result = false;
    }

    getOutputPin()->setSignal(result);
}
