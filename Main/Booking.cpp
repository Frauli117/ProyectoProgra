#include "Booking.h"
#include "Room.h"

Booking::Booking(){}

Booking::Booking(int totalPrice, int bookingNumber){
    totalPrice = 0;
    bookingNumber = 0;
    bookingTime = time(0);
}

void Booking::createBooking(Schedule schedule) {
    this->schedule = schedule;
    totalPrice = 0.0;
    bookingNumber = rand() % 100;
    bookingTime = time(0);
}

bool Booking::canSell() {
    
    time_t currentTime = time(0);
    tm currentTimeInfo;
    localtime_s(&currentTimeInfo, &currentTime);

    int startHour = schedule.getStartHour();

    int currentHour = currentTimeInfo.tm_hour;
    int currentMinute = currentTimeInfo.tm_min;

    int minutesToProjection = (startHour * 60) - (currentHour * 60 + currentMinute);

    cout << "Hora actual: " << currentHour << ":" << currentMinute << endl;
    cout << "Hora de inicio de la proyección: " << startHour << endl;
    cout << "Minutos restantes hasta la proyección: " << minutesToProjection << endl;

    return minutesToProjection >= 30;
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

Schedule Booking::getSchedule() {
    return schedule;
}