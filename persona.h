#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

// Clase abstracta base.
// Define los atributos y comportamientos comunes
// para todas las personas del estudio de danza.

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
    )
    : nombre(nombrePersona),
      edad(edadPersona),
      identificador(idPersona)
    {}

    virtual ~Persona() {}

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    int getID() {
        return identificador;
    }

    void setNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    void setID(int nuevoID) {
        identificador = nuevoID;
    }

    void mostrarDatosBasicos() {

        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "ID: " << identificador << endl;
    }

    // Método virtual puro.
    // Convierte a Persona en una clase abstracta.
    virtual void mostrarInformacion() = 0;
};

#endif
