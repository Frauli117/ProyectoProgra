#include "Seat.h"

Seat::Seat(){
	state = 'D';
}

char Seat::getState() { 
	return state; 
}

int Seat::getId() { return id; }

void Seat::reserve() {
    if (state == 'D') {
        state = 'R';
    }
}

void Seat::sell() {
    if (state == 'R') {
        state = 'V';
    }
}

bool Seat::isAvailable() {
    return state == 'D';
}

void Seat::reset() {
    state = 'D';
}

