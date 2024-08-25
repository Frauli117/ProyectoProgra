#include "Cinema.h"


Cinema::Cinema() : bookingCount(0) {
    generateMovies();
    generateRooms();
    generateSchedules();
}

void Cinema::generateMovies() {
    Movie movie1("FallGuy", 2024, 2, "USA", 5);
    cinemaMovies[0] = movie1;

    Movie movie2("El planeta de los simios: Nuevo reino", 2024, 1, "USA", 7);
    cinemaMovies[1] = movie2;

    Movie movie3("DeadPool", 2024, 6, "CANADA", 9);
    cinemaMovies[2] = movie3;

    Movie movie4("Parasitos", 2019, 2, "COREA DEL SUR", 3);
    cinemaMovies[3] = movie4;
}

void Cinema::generateRooms() {
    Room room1(1, 25, 4000);
    cinemaRooms[0] = room1;

    Room room2(2, 25, 4000);
    cinemaRooms[1] = room2;
}

void Cinema::generateSchedules() {
    Schedule schedule1("28/08/2024", 6, 8, cinemaMovies[0], cinemaRooms[0]);
    cinemaSchedules[0] = schedule1;

    Schedule schedule2("28/08/2024", 6, 10, cinemaMovies[1], cinemaRooms[1]);
    cinemaSchedules[1] = schedule2;

    Schedule schedule3("28/08/2024", 6, 8, cinemaMovies[2], cinemaRooms[0]);
    cinemaSchedules[2] = schedule3;

    Schedule schedule4("28/08/2024", 6, 8, cinemaMovies[3], cinemaRooms[1]);
    cinemaSchedules[3] = schedule4;
}


void Cinema::displaySchedule() {
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << cinemaSchedules[i].getDate()
            << " - " << cinemaSchedules[i].getMovie().getName()
            << " - Sala " << i + 1 << endl;
    }
}

void Cinema::makeBooking(int scheduleIndex, int row, int col) {
    if (bookingCount < 50) {
        Booking newBooking;
        newBooking.createBooking(cinemaSchedules[scheduleIndex]);
        if (newBooking.reserveSeat(row, col)) {
            cinemaBookings[bookingCount] = newBooking;
            bookingCount++;
            cout << "Reserva exitosa. Número de reserva: " << newBooking.getBookingNumber() << endl;
        }
        else {
            cout << "Asiento no disponible.\n";
        }
    }
    else {
        cout << "Límite de reservas alcanzado.\n";
    }
}

void Cinema::displayRoomSeats(int scheduleIndex) {
    cinemaSchedules[scheduleIndex].getRoom().displaySeats();
}
