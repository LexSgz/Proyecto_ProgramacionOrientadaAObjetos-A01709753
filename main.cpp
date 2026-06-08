#include "alumno.h"
#include "instructor.h"
#include "pago.h"

int main() {

    Alumno alumnoUno(
        "Alex",
        19,
        101,
        500
    );

    Instructor instructorUno(
        "Carla",
        28,
        202,
        "Ballet",
        18000
    );

    // Polimorfismo:
    // Se almacenan objetos diferentes
    // utilizando apuntadores a Persona.

    Persona* personas[2];

    personas[0] = &alumnoUno;
    personas[1] = &instructorUno;


    for(int i = 0; i < 2; i++) {

        personas[i]
            ->mostrarInformacion();

        cout << endl;
    }

    Pago pagoAlumno;

    pagoAlumno.procesarPago(
        1000
    );

    cout << endl;

    pagoAlumno.procesarPago(
        1500,
        "Tarjeta"
    );

    return 0;
}
