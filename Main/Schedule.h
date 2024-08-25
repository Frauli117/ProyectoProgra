#pragma once
#include <iostream>
#include "Movie.h"
#include "Room.h"

using namespace std;

class Schedule
{
private:
    string date;
    int startHour;
    int endHour;
    Movie movie; //*
    Room room; //*

public:
    Schedule();
    Schedule(string date, int startHour, int endHour, Movie movie, Room room);
    Movie getMovie();
    Room getRoom();
    string getDate();

};

