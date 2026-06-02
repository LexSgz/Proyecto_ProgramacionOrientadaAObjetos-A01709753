#include "cliente.h"
#include "entrenador.h"
#include "pago.h"

int main() {

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
    
// Uso de apuntadores a la clase base (Persona)
// Permite almacenar objetos de diferentes tipos y usar Polimorfismo
    
    Persona* personas[2];
    
// los dos objetos se usan como Persona por la herencia de clase
    
    personas[0] = &clienteUno;
    personas[1] = &entrenadorUno;

    cout << "=== POLIMORFISMO ==="
         << endl
         << endl;

// Polimorfismo.
// hace que el mismo mensaje se envie a objetos distintos y cada objeto ejecuta su propia versión de mostrarInformacion().
    
    for (int i = 0; i < 2; i++) {

        personas[i]
            ->mostrarInformacion();

        cout << endl;
    }

    cout << "=== SOBRECARGA ==="
         << endl
         << endl;

    Pago pagoCliente;

    pagoCliente.procesarPago(
        1000
    );

    cout << endl;

    pagoCliente.procesarPago(
        1500,
        "Tarjeta"
    );

    return 0;
}
