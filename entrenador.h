#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include "persona.h"

class Entrenador: public Persona {

private:
    string especialidad;
    double salario;

public:

    Entrenador(string n,int e,int i,string esp,double s)
    : Persona(n,e,i){

        especialidad=esp;
        salario=s;
    }

    void mostrarInformacion() override {

        cout<<"Entrenador"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Especialidad: "<<especialidad<<endl;
        cout<<"Salario: "<<salario<<endl;
    }

};

#endif
