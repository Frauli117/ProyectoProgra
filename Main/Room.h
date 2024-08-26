#pragma once

#include "Seat.h"
#include <iostream>

class Room {
private:
    int id;
    int seatsNumber;
    double price;
    Seat roomSeats[5][5];

public:
    Room();
    Room(int id, int seatsNumber, double price);
    double getPrice();
    bool reserveSeat(int row, int col);
    void displaySeats();
    bool sellSeat(int row, int col);
};

