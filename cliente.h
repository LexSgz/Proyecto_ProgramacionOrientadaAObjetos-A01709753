
#ifndef CLIENTE_H
#define CLIENTE_H

#include "persona.h"

class Cliente: public Persona {

private:
    double pagosPendientes;

public:

    Cliente(string n,int e,int i,double p)
    : Persona(n,e,i){

        pagosPendientes=p;
    }

    void mostrarInformacion() override {

        cout<<"Cliente"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Pagos pendientes: "<<pagosPendientes<<endl;
    }

};

#endif
//
// Created by alexs on 20/05/2026.
//
