#include "cliente.h"
#include "entrenador.h"

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

    for(int indice=0;
        indice<2;
        indice++){

        personas[indice]
            ->mostrarInformacion();

        cout<<endl;
    }

    return 0;
}
