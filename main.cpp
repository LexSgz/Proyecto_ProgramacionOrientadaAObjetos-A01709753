#include "cliente.h"
#include "entrenador.h"
#include "pago.h"

int main(){

    Cliente clienteUno(
        "Alex",
        19,
        101,
        500
    );

    Entrenador entrenadorUno(
        "Carlos",
        32,
        202,
        "Musculacion",
        18000
    );

    Persona* personas[2];

    personas[0]=&clienteUno;
    personas[1]=&entrenadorUno;

    for(int i=0;i<2;i++){

        personas[i]
        ->mostrarInformacion();

        cout<<endl;
    }

    Pago pagoCliente;

    pagoCliente
        .procesarPago(1000);

    cout<<endl;

    pagoCliente
        .procesarPago(
            1500,
            "Tarjeta"
        );

    return 0;
}
