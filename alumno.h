#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"

// hereda de Persona.
// Son los estudiantes inscritos en el estudio de danza.

class Alumno : public Persona {

private:

    double pagosPendientes;

public:

// Constructor
// Usa los datos heredados y los propios.

    Alumno(
        string nombrePersona,
        int edadPersona, 
        int idPersona, //-
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

// Sobreescritura del método abstracto
// Cada Alumno muestra información específica propia

    void mostrarInformacion() override {

        cout << "----- ALUMNO -----" << endl;

        // reusa el método heredado
        mostrarDatosBasicos();

        cout << "Pagos pendientes: "
             << pagosPendientes
             << endl;
    }

};

#endif
