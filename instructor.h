#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "persona.h"

// Instructor hereda de Persona.
// Representa a los maestros del estudio.

class Instructor : public Persona {

private:

    string especialidad;
    double salario;

public:

    Instructor(
        string nombrePersona,
        int edadPersona,
        int idPersona,
        string especialidadInstructor,
        double salarioInstructor
    )

    : Persona(
        nombrePersona,
        edadPersona,
        idPersona
    ),
      especialidad(especialidadInstructor),
      salario(salarioInstructor)
    {}

    ~Instructor() override {}

    string getEspecialidad() {
        return especialidad;
    }

    double getSalario() {
        return salario;
    }

    void setEspecialidad(
        string nuevaEspecialidad
    ) {
        especialidad = nuevaEspecialidad;
    }

    void setSalario(
        double nuevoSalario
    ) {
        salario = nuevoSalario;
    }

    // Sobreescritura
    void mostrarInformacion() override {

        cout << "----- INSTRUCTOR -----" << endl;

        mostrarDatosBasicos();

        cout << "Especialidad: "
             << especialidad
             << endl;

        cout << "Salario: "
             << salario
             << endl;
    }

};

#endif
