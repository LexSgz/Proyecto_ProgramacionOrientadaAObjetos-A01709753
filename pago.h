#ifndef PAGO_H
#define PAGO_H

#include <iostream>
using namespace std;

class Pago {

private:
    double monto;

public:

    Pago(){

        monto=0;
    }

    void procesarPago(double cantidad){

        cout<<"Pago realizado: "<<cantidad<<endl;
    }

    void procesarPago(double cantidad,string metodo){

        cout<<"Pago realizado: "<<cantidad<<endl;
        cout<<"Metodo: "<<metodo<<endl;
    }

};

#endif
