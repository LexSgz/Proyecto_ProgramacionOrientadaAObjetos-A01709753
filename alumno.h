#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"

// hereda de Persona , la clase representa a los estudiantes inscritos en el estudio de danza.

class Alumno : public Persona {

private:

    double pagosPendientes;

public:

    Alumno(
        string nombrePersona,
        int edadPersona,
        int idPersona,
        double deudaAlumno
    )

    : Persona(
        nombrePersona,
        edadPersona,
        idPersona
    ),
      pagosPendientes(deudaAlumno)
    {}

    ~Alumno() override {}

    double getPagosPendientes() {
        return pagosPendientes;
    }

    void setPagosPendientes(
        double nuevaDeuda
    ) {
        pagosPendientes = nuevaDeuda;
    }

    // Sobreescritura
    void mostrarInformacion() override {

        cout << "----- ALUMNO -----" << endl;

        mostrarDatosBasicos();

        cout << "Pagos pendientes: "
             << pagosPendientes
             << endl;
    }

};

#endif
