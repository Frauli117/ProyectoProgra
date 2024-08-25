#pragma once

#include <string>
using namespace std;

class Movie {
private:
    string name;
    int year;
    int time;
    string country;
    int reviews; 
    bool withData;

public:
    Movie();
    Movie(string name, int year, int time, string country, int reviews);

    // Getters
    string getName();
    int getYear();
    int getTime();
    string getCountry();
    int getReviews();
    bool getWithData();

    // Setters
    void setName(string n);
    void setYear(int y);
    void setTime(int t);
    void setCountry(string c);
    void setReviews(int r);
    void setWithData(bool wd);
};

