#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "persona.h"

// Hereda de Persona.
// Son los maestros del estudio de danza

class Instructor : public Persona {

private:

    string especialidad;
    double salario;

public:

// Constructor de Instructor.
// Inicializa los datos heredados y propios.

    Instructor(
        string nombrePersona,
        int edadPersona,
        int idPersona, //-^
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

// Sobreescritura del método abstracto.
// Cada Instructor muestra su información específica.

    void mostrarInformacion() override {

        cout << "----- INSTRUCTOR -----" << endl;

        // Reusa el método heredado
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
