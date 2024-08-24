#pragma once
#include <iostream>
#include "Booking.h"
#include "Room.h"
#include "Schedule.h"
#include "Sale.h"

using namespace std;

class Cinema
{
private:
    Movie cinemaMovies[10];
    Room cinemaRooms[4];
    Schedule cinemaSchedules[10];
    Booking cinemaBookings[50];
    Sale sales[50];

public:
};

