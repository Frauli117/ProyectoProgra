#include "Sale.h"

Sale::Sale(){}

void Sale::makeSale(Booking booking) {
    if (booking.canSell()) {
        this->booking = booking;

        cout << "Ingrese cédula del cliente: ";
        cin >> idCustomer;
        cout << "Ingrese número de tarjeta: ";
        cin >> cardNumber;

        cout << "Venta realizada con éxito para la reserva " << booking.getBookingNumber() << ".\n";
        cout << "Total a pagar: " << booking.getTotalPrice() << " colones.\n";
    }
    else {
        cout << "La reserva no puede ser vendida, menos de 30 minutos para la proyección.\n";
    }
}
