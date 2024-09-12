#include "Cinema.h"


Cinema::Cinema() : bookingCount(0) {
    generateMovies();
    generateRooms();
    generateSchedules();
}

void Cinema::generateMovies() {
    Movie movie1("FallGuy", 2024, 2, "USA", 5);
    cinemaMovies[0] = movie1;

    Movie movie2("El planeta de los simios: Nuevo reino", 2024, 2, "USA", 7);
    cinemaMovies[1] = movie2;

    Movie movie3("DeadPool", 2024, 3, "CANADA", 8);
    cinemaMovies[2] = movie3;

    Movie movie4("Parasitos", 2019, 2, "COREA DEL SUR", 9);
    cinemaMovies[3] = movie4;
}

void Cinema::generateRooms() {
    Room room1(1, 25, 4000);
    cinemaRooms[0] = room1;

    Room room2(2, 25, 4000);
    cinemaRooms[1] = room2;
}

void Cinema::generateSchedules() {
    Schedule schedule1("28/08/2024", 18, 20, cinemaMovies[0], cinemaRooms[0]);
    cinemaSchedules[0] = schedule1;

    Schedule schedule2("28/08/2024", 18, 20, cinemaMovies[1], cinemaRooms[1]);
    cinemaSchedules[1] = schedule2;

    Schedule schedule3("28/08/2024", 21, 23, cinemaMovies[2], cinemaRooms[0]);
    cinemaSchedules[2] = schedule3;

    Schedule schedule4("28/08/2024", 21, 23, cinemaMovies[3], cinemaRooms[1]);
    cinemaSchedules[3] = schedule4;
}

void Cinema::makeSale(int bookingNumber) {
    for (int i = 0; i < bookingCount; i++) {
        if (cinemaBookings[i].getBookingNumber() == bookingNumber) {
            Sale newSale;
            newSale.makeSale(cinemaBookings[i]);
            sales[saleCount] = newSale;
            saleCount++;
            return;
        }
    }
    cout << "Reserva no encontrada.\n";
}

void Cinema::handleSale() {
    int bookingNumber;
    cout << "Ingrese el número de reserva para realizar la venta: ";
    cin >> bookingNumber;
    makeSale(bookingNumber);
}


void Cinema::displaySchedule() {
    for (int i = 0; i < 4; i++) {
        Schedule s = cinemaSchedules[i];
        cout << i + 1 << ". " << s.getDate()
            << " - " << s.getMovie().getName()
            << " - Sala " << s.getRoom().getId()
            << " - Inicio: " << s.getStartHour() << ":00"
            << " - Fin: " << s.getEndHour() << ":00\n";
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
    if (scheduleIndex >= 0 && scheduleIndex < 4) {
        cinemaSchedules[scheduleIndex].getRoom().displaySeats();
    }
    else {
        cout << "Índice de horario inválido.\n";
    }
}

void Cinema::displayMovies() {
    cout << "Películas:\n";
    for (int i = 0; i < 4; i++) {
        Movie m = cinemaMovies[i];
        cout << i + 1 << ". " << m.getName()
            << " (" << m.getYear() << ") - Duración: " << m.getTime() << " horas\n"
            << "   País: " << m.getCountry() << "\n"
            << "   Reseñas: " << m.getReviews() << "/10\n";
    }
}

void Cinema::displayRooms() {
    cout << "Salas:\n";
    for (int i = 0; i < 2; i++) {
        Room r = cinemaRooms[i];
        cout << "Sala " << r.getId()
            << " - Precio: " << r.getPrice()
            << " colones\n";
    }
}
