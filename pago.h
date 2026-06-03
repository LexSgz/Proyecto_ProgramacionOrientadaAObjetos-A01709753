#ifndef PAGO_H
#define PAGO_H

#include <iostream>
using namespace std;

// Clase encargada de administrar la información de los pagos.

class Pago {

private:

    double montoPago;
    string metodoPago;

public:

    Pago() {

        montoPago = 0;
        metodoPago = "No definido";
    }

// Sobrecarga de los métodos.
// el primer procesarpago() solo recibe el monto.

    void procesarPago(
        double cantidadPago
    ) {

        montoPago = cantidadPago;

        cout << "Pago registrado."
             << endl;

        cout << "Monto: "
             << montoPago
             << endl;
    }

// Sobrecarga de métodos.
// El segundo procesarpago() recibe monto y método de pago.

    void procesarPago(
        double cantidadPago,
        string metodoSeleccionado
    ) {

        montoPago = cantidadPago;
        metodoPago = metodoSeleccionado;

        cout << "Pago registrado."
             << endl;

        cout << "Monto: "
             << montoPago
             << endl;

        cout << "Metodo: "
             << metodoPago
             << endl;
    }

    double getMontoPago() {

        return montoPago;
    }

    string getMetodoPago() {

        return metodoPago;
    }

    void setMontoPago(
        double nuevoMonto
    ) {

        montoPago = nuevoMonto;
    }

    void setMetodoPago(
        string nuevoMetodo
    ) {

        metodoPago = nuevoMetodo;
    }

};

#endif
