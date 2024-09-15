#include "Room.h"

Room::Room() {}

Room::Room(int id, int seatsNumber, double price) {
    this->id = id;
    this->seatsNumber = seatsNumber;
    this->price = price;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int randomState = rand() % 3;
            if (randomState == 0) {
                roomSeats[i][j].setState('D');
            }
            else if (randomState == 1) {
                roomSeats[i][j].setState('R');
            }
            else {
                roomSeats[i][j].setState('V');
            }
        }
    }
}

double Room::getPrice() {
    return price;
}

int Room::getId() {
    return id;
}

int Room::getSeatsNumber() {
    return seatsNumber;
}

void Room::displaySeats() {
    cout << "Asientos en la sala " << id << ":\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "[" << roomSeats[i][j].getState() << "]";
        }
        cout << endl;
    }
}

bool Room::reserveSeat(int row, int col) {
    if (roomSeats[row][col].isAvailable()) {
        roomSeats[row][col].reserve();
        return true;
    }
    return false;
}

bool Room::sellSeat(int row, int col) {
    if (roomSeats[row][col].getState() == 'R') {
        roomSeats[row][col].sell();
        return true;
    }
    return false;
}
