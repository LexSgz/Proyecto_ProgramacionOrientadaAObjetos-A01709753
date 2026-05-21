#include "cliente.h"
#include "entrenador.h"
#include "pago.h"

int main() {

    Cliente c1("Alex",19,101,500);

    Entrenador e1(
        "Carlos",
        32,
        202,
        "Musculacion",
        18000
    );

    c1.mostrarInformacion();

    cout<<endl;

    e1.mostrarInformacion();

    cout<<endl;

    Pago p1;

    p1.procesarPago(1000);

    cout<<endl;

    p1.procesarPago(
        1500,
        "Tarjeta"
    );

    return 0;
}
