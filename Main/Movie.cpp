#include "Movie.h"

Movie::Movie() : withData(false) {}

Movie::Movie(string name, int year, int time, string country, int reviews) {
    this->name = name;
    this->year = year;
    this->time = time;
    this->country = country;
    this->reviews = reviews;
}

void Movie::setName(string n) {
    name = n;
}

void Movie::setYear(int y) {
    year = y;
}

void Movie::setTime(int t) {
    time = t;
}

void Movie::setCountry(string c) {
    country = c;
}

void Movie::setReviews(int r) {
    reviews = r;
}

void Movie::setWithData(bool wd) { 
    withData = wd; 
}

string Movie::getName() {
    return name;
}

int Movie::getYear() {
    return year;
}

int Movie::getTime() { 
    return time; 
}

string Movie::getCountry() { 
    return country; }

int Movie::getReviews() { 
    return reviews; 
}

bool Movie::getWithData() { 
    return withData; 
}
