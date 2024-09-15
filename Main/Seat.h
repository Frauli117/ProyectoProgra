#pragma once

#include <string>
using namespace std;

class Seat {
private:
    int id;
    char state;

public:
    Seat();
    char getState();
    void setState(char newSate);
    int getId();
    void reserve();
    void sell();
    bool isAvailable();
    void reset();

};
