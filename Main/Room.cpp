#include "Room.h"

Room::Room() {
}

Room::Room(int id, int seatsNumber, double price) {
    this->id = id;
    this->seatsNumber = seatsNumber;
    this->price = price;
    int seatId = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            roomSeats[i][j] = Seat();
            seatId++;
        }
    }

}

double Room::getPrice() {
    return this->price;
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
