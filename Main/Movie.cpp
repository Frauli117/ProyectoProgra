#include "Movie.h"

Movie::Movie() : withData(false) {}

Movie::Movie(string name, int year, int time, string country, int review) {
    this->name = name;
    this->year = year;
    this->time = time;
    this->country = country;
    this->reviews = reviews;
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

void Movie::setReviews(int reviews) {
    this->reviews = reviews;
}

void Movie::setWithData(bool wd) { 
    withData = wd; 
}

string Movie::getName() {
    return this->name;
}

int Movie::getYear() {
    return this->year;
}

int Movie::getTime() { 
    return time; 
}

string Movie::getCountry() { 
    return country; }

int Movie::getReviews() { return reviews; 
}

bool Movie::getWithData() { 
    return withData; 
}
