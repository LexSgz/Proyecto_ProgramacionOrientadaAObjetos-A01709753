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
    ){

        nombre=nombrePersona;
        edad=edadPersona;
        identificador=idPersona;
    }

    virtual void mostrarInformacion()=0;

    string getNombre(){

        return nombre;
    }

    int getEdad(){

        return edad;
    }

    int getID(){

        return identificador;
    }

    void setNombre(string nuevoNombre){

        nombre=nuevoNombre;
    }

};

#endif
