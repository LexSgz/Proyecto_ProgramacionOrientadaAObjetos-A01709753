#ifndef CLIENTE_H
#define CLIENTE_H

#include "persona.h"

// Cliente es clase que hereda de Persona.

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

// Sobreescritura del método abstracto en persona 

    void mostrarInformacion() override {

        cout << "----- CLIENTE -----" << endl;

// Se reutiliza el método heredado de Persona 
        
        mostrarDatosBasicos();

        cout << "Pagos pendientes: "
             << pagosPendientes
             << endl;
    }

};

#endif
