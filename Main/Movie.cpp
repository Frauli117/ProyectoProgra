#include "Movie.h"

Movie::Movie(string name, int year, int time, string country, int review) {
    this->name = name;
    this->year = year;
    this->time = time;
    this->country = country;
    this->review = review;
}

void Movie::setName(string name) {
    this->name = name;
}

void Movie::setYear(int year) {
    this->year = year;
}

void Movie::setTime(int time) {
    this->time = time;
}

void Movie::setCountry(string country) {
    this->country = country;
}

void Movie::setReview(int review) {
    this->review = review;
}

string Movie::getName() {
    return this->name;
}

int Movie::getYear() {
    return this->year;
}
