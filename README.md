# Proyecto Integrador POO - Estudio de Danza ESTUDDIO

## Descripción

Este proyecto consiste en el desarrollo de un sistema de administración para un estudio de danza utilizando Programación Orientada a Objetos en C++.

El sistema permite administrar alumnos, instructores y pagos mediante una estructura de clases organizada, aplicando conceptos fundamentales de Programación Orientada a Objetos como herencia, polimorfismo, encapsulamiento, sobrecarga, sobreescritura y clases abstractas.

---

## Funcionalidad

El sistema permite:

* Registrar alumnos.
* Registrar instructores.
* Gestionar información de las personas registradas.
* Registrar pagos realizados por los alumnos.
* Consultar información de alumnos e instructores.
* Aplicar polimorfismo para manejar diferentes tipos de personas dentro del sistema.

---

## Conceptos Implementados

### Herencia

Las clases `Alumno` e `Instructor` heredan de la clase abstracta `Persona`.

### Polimorfismo

Se utilizan apuntadores a la clase base `Persona` para almacenar objetos de tipo `Alumno` e `Instructor`, permitiendo ejecutar diferentes versiones del método `mostrarInformacion()`.

### Clases Abstractas

La clase `Persona` es una clase abstracta porque contiene el método virtual puro:

```cpp
virtual void mostrarInformacion() = 0;
```

### Encapsulamiento

Los atributos de las clases se encuentran protegidos mediante modificadores de acceso y son manipulados mediante getters y setters.

### Sobreescritura de Métodos

Las clases `Alumno` e `Instructor` implementan su propia versión del método:


mostrarInformacion()


utilizando la palabra reservada `override`.

### Sobrecarga de Métodos

La clase `Pago` implementa dos versiones del método:


procesarPago(double cantidadPago)

procesarPago(double cantidadPago, string metodoSeleccionado)


demostrando el concepto de sobrecarga.

### Destructores Virtuales

La clase `Persona` implementa un destructor virtual para asegurar una correcta liberación de memoria cuando se utilizan apuntadores a la clase base.

---

## Estructura del Proyecto

* persona.h
* alumno.h
* instructor.h
* pago.h
* main.cpp

---

## Diagrama UML

El sistema está compuesto por una jerarquía de herencia donde:

* Persona es la clase abstracta principal.
* Alumno hereda de Persona.
* Instructor hereda de Persona.
* Pago administra la información relacionada con los pagos realizados por los alumnos.

---

## Posibles Casos de Error

* Registro de alumnos con datos vacíos.
* Registro de instructores con información incompleta.
* Pagos con cantidades inválidas.
* Identificadores duplicados.
* Información capturada incorrectamente por el usuario.
* Modificaciones incorrectas de datos existentes.

---


Proyecto desarrollado como parte del Proyecto Integrador de Programación Orientada a Objetos.
