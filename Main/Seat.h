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
    int getId();
    void reserve();
    void sell();
    bool isAvailable();
    void reset();

};
