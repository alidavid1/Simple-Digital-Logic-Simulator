#include "../include/gate.h"
#include "../include/pin.h"

Gate::Gate(const std::string& id, int numberOfInputs) : Component(id) {
    for (int i = 0; i < numberOfInputs; i++) {
        inputs.push_back(new Pin("InputPin" + std::to_string(i)));
    }

    output = new Pin("OutputPin");
}

Pin* Gate::getOutputPin() {
	return output;
}

Pin* Gate::getInputPin(int i) {
	return inputs[i];
    
}

Gate::~Gate() {
    for (Pin* input : inputs) {
        delete input;
    }

    delete output;
}
