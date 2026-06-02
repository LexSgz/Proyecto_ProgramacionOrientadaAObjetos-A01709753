#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include "persona.h"

class Entrenador : public Persona {

private:

    string especialidad;
    double salario;

public:

    Entrenador(
        string nombrePersona,
        int edadPersona,
        int idPersona,
        string especialidadEntrenador,
        double salarioEntrenador
    )

    : Persona(
        nombrePersona,
        edadPersona,
        idPersona
    ),
      especialidad(especialidadEntrenador),
      salario(salarioEntrenador)
    {}

    ~Entrenador() override {}

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

    void mostrarInformacion() override {

        cout << "----- ENTRENADOR -----" << endl;

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
