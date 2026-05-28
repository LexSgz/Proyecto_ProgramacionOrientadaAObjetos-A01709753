#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {

protected:
    string nombre;
    int edad;
    int identificador;

public:

    Persona(
        string nombrePersona,
        int edadPersona,
        int idPersona
    );

    virtual void mostrarInformacion() = 0;

    string getNombre();

    int getEdad();

    int getID();

    void setNombre(string nuevoNombre);

};

#endif
