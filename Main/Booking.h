#pragma once
#include <iostream>
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"

using namespace std;

class Booking
{
private:
    Schedule schedule; //*
    Seat bookSeats[5]; //Limite de 5 asientos por reserva
    double totalPrice;
    int bookingNumber;

public:

};

