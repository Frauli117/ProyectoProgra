
#include <iostream>
#include "Cinema.h"

int main() {
    Cinema cinema;

    cinema.displaySchedule();


    int scheduleIndex;
    cout << "Seleccione un horario (1-4): ";
    cin >> scheduleIndex;
    scheduleIndex--;

    cinema.displayRoomSeats(scheduleIndex);

    int row, col;
    cout << "Seleccione la fila y la columna del asiento (valores entre 0 y 4), separados por un espacio: ";
    cin >> row >> col;

    if (row >= 0 && row < 5 && col >= 0 && col < 5) {
        cinema.makeBooking(scheduleIndex, row, col);
    }
    else {
        cout << "Fila o columna inválida. Deben estar entre 0 y 4.\n";
    }

    return 0;
}
