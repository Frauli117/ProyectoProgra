#pragma once
#include <iostream>
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"

using namespace std;

class Booking
{
private:
    Schedule schedule;
    Seat bookSeats[5]; 
    double totalPrice;
    int bookingNumber;

public:
    Booking();
    Booking(int totalprice, int bookingNumber);
    void createBooking(Schedule schedule);
    bool reserveSeat(int row, int col);
    double getTotalPrice();
    int getBookingNumber();

};

