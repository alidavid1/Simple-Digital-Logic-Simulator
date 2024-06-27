#include "not_gate.h"
#include "Pin.h"

NOTGate::NOTGate(const std::string& id) : Gate(id, 1) {}

void NOTGate::evaluate() {
	getOutputPin()->setSignal(!(getInputPin(0)->getSignal()));
}