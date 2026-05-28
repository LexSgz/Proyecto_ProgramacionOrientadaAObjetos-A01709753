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
    ){

        especialidad=especialidadEntrenador;

        salario=salarioEntrenador;
    }

    void mostrarInformacion() override {

        cout<<"----- ENTRENADOR -----"<<endl;

        cout<<"Nombre: "
            <<getNombre()
            <<endl;

        cout<<"Edad: "
            <<getEdad()
            <<endl;

        cout<<"ID: "
            <<getID()
            <<endl;

        cout<<"Especialidad: "
            <<especialidad
            <<endl;

        cout<<"Salario: "
            <<salario
            <<endl;
    }

};

#endif
