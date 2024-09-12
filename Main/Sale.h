#pragma once
#include <iostream>
#include "Booking.h"
#include "Room.h"
#include "Schedule.h"

using namespace std;

class Sale
{
private:
    Booking booking;
    string idCustomer;
    string cardNumber;

public:

    Sale();
    void makeSale(Booking booking);
};

