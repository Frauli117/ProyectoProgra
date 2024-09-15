#include <ctime>
#include <iostream>
#include "Cinema.h"
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));
    Cinema cinema;
    char choice;
    bool running = true; 

    do {
        cout << "Menú:\n";
        cout << "a. Archivo\n";
        cout << "b. Mantenimiento\n";
        cout << "c. Reserva\n";
        cout << "d. Venta\n";
        cout << "Seleccione una opción: ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 'a':
        {
            string subChoice;
            cout << "Archivo:\n";
            cout << "i. Acerca de\n";
            cout << "ii. Salir\n";
            cout << "Seleccione una opción: ";
            getline(cin, subChoice);

            if (subChoice == "i") {
                cout << "Sistema de gestión de cine. Realizado por Mc Kenneth Frauli Arce. Versión 1.0\n";
            }
            else if (subChoice == "ii") {
                cout << "Saliendo del programa...\n";
                running = false;
            }
            else {
                cout << "Opción inválida. Intente de nuevo.\n";
            }
        }
        break;

        case 'b':
        {
            string subChoice;
            cout << "Mantenimiento:\n";
            cout << "i. Películas\n";
            cout << "ii. Salas\n";
            cout << "iii. Horarios\n";
            cout << "Seleccione una opción: ";
            getline(cin, subChoice);

            if (subChoice == "i") {
                cinema.displayMovies(); 
            }
            else if (subChoice == "ii") {
                cinema.displayRooms(); 
            }
            else if (subChoice == "iii") {
                cinema.displaySchedule();
            }
            else {
                cout << "Opción inválida. Intente de nuevo.\n";
            }
        }
        break;

        case 'c':
        {
            int scheduleIndex, row, col;
            cout << "Reserva:\n";
            cout << "Seleccione un horario (1-4): ";
            cin >> scheduleIndex;
            scheduleIndex--; 

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cinema.displayRoomSeats(scheduleIndex);

            cout << "Seleccione la fila y la columna del asiento (valores entre 0 y 4), separados por un espacio: ";
            cin >> row >> col;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (row >= 0 && row < 5 && col >= 0 && col < 5) {
                cinema.makeBooking(scheduleIndex, row, col);
            }
            else {
                cout << "Fila o columna inválida. Deben estar entre 0 y 4.\n";
            }
        }
        break;

        case 'd':
        {
            cinema.handleSale();
        }
        break;

        default:
            cout << "Opción inválida. Intente de nuevo.\n";
            break;
        }

    } while (running); 


    return 0;
}
