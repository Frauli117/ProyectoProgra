#pragma once
#include <iostream>
#include "Booking.h"
#include "Room.h"
#include "Schedule.h"
#include "Sale.h"
#include "Movie.h"

using namespace std;

class Cinema
{
private:
    Movie cinemaMovies[10];
    Room cinemaRooms[4];
    Schedule cinemaSchedules[10];
    Booking cinemaBookings[50];
    Sale sales[50];
    int bookingCount;
    int saleCount;

public:
    Cinema();
    void generateMovies();
    void generateRooms();
    void generateSchedules();
    void makeSale(int bookingNumber);
    void makeBooking(int scheduleIndex, int row, int col);
    void handleSale();
    void displayMovies();
    void displaySchedule();
    void displayRoomSeats(int scheduleIndex);
    void displayRooms();

};

