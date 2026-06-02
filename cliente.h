#ifndef CLIENTE_H
#define CLIENTE_H

#include "persona.h"

class Cliente : public Persona {

private:

    double pagosPendientes;

public:

    Cliente(
        string nombrePersona,
        int edadPersona,
        int idPersona,
        double deudaCliente
    )

    : Persona(
        nombrePersona,
        edadPersona,
        idPersona
    ),
      pagosPendientes(deudaCliente)
    {}

    ~Cliente() override {}

    double getPagosPendientes() {

        return pagosPendientes;
    }

    void setPagosPendientes(double nuevaDeuda) {

        pagosPendientes = nuevaDeuda;
    }

    void mostrarInformacion() override {

        cout << "----- CLIENTE -----" << endl;

        mostrarDatosBasicos();

        cout << "Pagos pendientes: "
             << pagosPendientes
             << endl;
    }

};

#endif
