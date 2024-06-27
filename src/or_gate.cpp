#include "../include/or_gate.h"
#include "../include/Pin.h"

ORGate::ORGate(const std::string& id) : Gate(id, 2) {}
void ORGate::evaluate() {
    bool result = false;
    if (getInputPin(0)->getSignal() || getInputPin(1)->getSignal()) {
        result = true;
    }
    else {
        result = false;
    }

    getOutputPin()->setSignal(result);
}
