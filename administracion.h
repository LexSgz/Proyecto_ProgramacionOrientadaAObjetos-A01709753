#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include "alumno.h"
#include "instructor.h"
#include "pago.h"

class Administracion {

public:

    void iniciarSistema() {

        // Objetos creados en el heap
        Alumno* alumnoUno = new Alumno(
            "Alex",
            19,
            101,
            500
        );

        Instructor* instructorUno = new Instructor(
            "Carla",
            28,
            202,
            "Ballet",
            18000
        );

        Pago pagoAlumno;

        // Polimorfismo
        Persona* personas[2];

        personas[0] = alumnoUno;
        personas[1] = instructorUno;

        int opcion = 0;

        do {

            cout << endl;

            cout << "      ESTUDIO DE DANZA"
                 << endl;

            cout << "1. Ver Alumno"
                 << endl;

            cout << "2. Ver Instructor"
                 << endl;

            cout << "3. Ver Pago"
                 << endl;

            cout << "4. Ver Todos"
                 << endl;

            cout << "5. Salir"
                 << endl;

            cout << endl;

            cout << "Seleccione una opcion: ";

            cin >> opcion;

            // Evita que el programa falle si escriben letras
            if(cin.fail()) {

                cin.clear();

                cin.ignore(
                    1000,
                    '\n'
                );

                opcion = 0;
            }

            cout << endl;

            switch(opcion) {

            case 1:

                alumnoUno
                ->mostrarInformacion();

                break;

            case 2:

                instructorUno
                ->mostrarInformacion();

                break;

            case 3:

                pagoAlumno
                .procesarPago(
                    1500,
                    "Tarjeta"
                );

                break;

            case 4:

                cout << "=== INFORMACION COMPLETA ==="
                     << endl
                     << endl;

                for(
                    int i = 0;
                    i < 2;
                    i++
                ) {

                    personas[i]
                    ->mostrarInformacion();

                    cout << endl;
                }

                break;

            case 5:

                cout << "Saliendo del sistema..."
                     << endl;

                break;

            default:

                cout << "Opcion invalida."
                     << endl;
            }

        } while(opcion != 5);

        // Liberacion de memoria
        delete alumnoUno;
        delete instructorUno;
    }
};

#endif
