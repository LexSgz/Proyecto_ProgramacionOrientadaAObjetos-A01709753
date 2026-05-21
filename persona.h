#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {

protected:
    string nombre;
    int edad;
    int id;

public:

    Persona(string n,int e,int i){
        nombre=n;
        edad=e;
        id=i;
    }

    virtual void mostrarInformacion()=0;

};

#endif
