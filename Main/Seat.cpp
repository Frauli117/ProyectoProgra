#include "Seat.h"

Seat::Seat(){}

char Seat::getState() {
    return state;
}

void Seat::setState(char newState) {
    state = newState;
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

