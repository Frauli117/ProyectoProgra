#pragma once

#include <iostream>

using namespace std;

class Movie
{
private:
    string name;
    int year;
    int time;
    string country;
    int review; //Del 0 al 10

public:

    Movie();
    Movie(string name, int year, int time, string country, int review);
    void setName(string name);
    void setYear(int year);
    void setTime(int time);
    void setCountry(string country);
    void setReview(int review);
    string getName();
    int getYear();


};

