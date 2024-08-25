#include "Booking.h"
#include "Room.h"

Booking::Booking(int totalPrice, int bookingNumber){
    totalPrice = 0;
    bookingNumber = 0;
}

void Booking::createBooking(Schedule schedule) {
    this->schedule = schedule;
    totalPrice = 0.0;
    bookingNumber = rand() % 10000; // Generar un número de reserva aleatorio
}

bool Booking::reserveSeat(int row, int col) {
    if (schedule.getRoom().reserveSeat(row, col)) {
        totalPrice += schedule.getRoom().getPrice();
        return true;
    }
    return false;
}

double Booking::getTotalPrice() {
    return totalPrice;
}

int Booking::getBookingNumber() {
    return bookingNumber;
}