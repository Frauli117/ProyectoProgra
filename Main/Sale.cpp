#include "Sale.h"

Sale::Sale(){}

void Sale::makeSale(Booking booking) {
    if (booking.canSell()) {
        this->booking = booking;

        cout << "Ingrese c�dula del cliente: ";
        cin >> idCustomer;
        cout << "Ingrese n�mero de tarjeta: ";
        cin >> cardNumber;

        cout << "Venta realizada con �xito para la reserva " << booking.getBookingNumber() << ".\n";
        cout << "Total a pagar: " << booking.getTotalPrice() << " colones.\n";
    }
    else {
        cout << "La reserva no puede ser vendida, menos de 30 minutos para la proyecci�n.\n";
    }
}
