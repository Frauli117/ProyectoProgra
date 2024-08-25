#include "Schedule.h"

Schedule::Schedule() {}

Schedule::Schedule(string date, int startHour, int endHour, Movie movie, Room room) {
    this->date = date;
    this->startHour = startHour;
    this->endHour = endHour;
    this->movie = movie;
    this->room = room;
}

Movie Schedule::getMovie() {
    return this->movie;
}

Room Schedule::getRoom() {
    return this->room;
}

string Schedule::getDate() {
    return this->date;
}