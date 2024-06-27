#include "circuit.h"

Circuit::~Circuit() {
	for (Component* comp : components) {
		delete comp;
	}

	for (Wire* wire : wires) {
		delete wire;
	}
}

void Circuit::addComponent(Component* comp) {
	components.push_back(comp);
}

void Circuit::addWire(Wire* wire) {
	wires.push_back(wire);
}


// simulate: Initiates the simulation of the circuit.
// This function runs the logical operations of the circuit by calling evaluate on each component
// in an order that respects the logical dependencies and connection via wires.
// Hint/Attention: Think simple and before each component evaluation iterate over all wires and propagate signal
void Circuit::simulate() {
	for (Component* comp : components) {
		for (Wire* wire : wires) {
			wire->propagateSignal(); 
		}
		comp->evaluate();
	}
}