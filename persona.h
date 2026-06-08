#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

// Es la clase abstracta base.
// Aqui se definen los atributos comunes para todas las personas del estudio de danza.
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

// el Destructor virtual.
// permite destruir los objetos derivados cuando se utilizan apuntadores a la clase Persona
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

// Método que se reusa y hereda
// Evita que se duplique el código de Alumno e Instructor

    void mostrarDatosBasicos() {

        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "ID: " << identificador << endl;
    }

// Método virtual puro / clase abstracta 
// Convierte a Persona en clase abstracta y obliga a las clases hijas a implementar su propia versión de mostrarInformacion()

    virtual void mostrarInformacion() = 0;
};

#endif
