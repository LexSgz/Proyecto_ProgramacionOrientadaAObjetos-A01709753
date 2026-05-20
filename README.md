# Proyecto Integrador - Sistema para Gimnasio

## Descripción

Este proyecto consiste en el desarrollo de un sistema de administración para un gimnasio utilizando Programación Orientada a Objetos en C++.

El sistema permite administrar clientes, entrenadores, membresías, rutinas y pagos mediante una estructura de clases organizada.

---

# Funcionalidad

El sistema permite:

- Registrar clientes
- Registrar entrenadores
- Administrar membresías
- Asignar rutinas
- Registrar pagos
- Consultar información de usuarios

---

# Conceptos utilizados

## Herencia
Las clases Cliente y Entrenador heredan de la clase abstracta Persona.

## Polimorfismo
El método mostrarInformacion() funciona de manera diferente dependiendo del tipo de objeto.

## Clases abstractas
La clase Persona es abstracta y sirve como base para otras clases.

## Encapsulamiento
Los atributos se manejan mediante modificadores de acceso privados y protegidos.

## Sobreescritura de métodos
Las clases hijas sobrescriben métodos heredados de Persona.

## Sobrecarga
Algunos métodos pueden recibir diferentes parámetros dependiendo de la acción realizada.

---

# Estructura del Proyecto

- persona.h
- cliente.h
- entrenador.h
- membresia.h
- rutina.h
- pago.h
- main.cpp

---

# Donde podría fallar

- Registro de usuarios con datos vacíos
- Pagos inválidos
- IDs duplicados
- Membresías vencidas
- Rutinas inexistentes
- Información eliminada accidentalmente

- # Segundo Avance Proyecto Integrador POO

## Sistema de Gimnasio

Proyecto desarrollado en C++ utilizando Programación Orientada a Objetos.

### Conceptos implementados

### Herencia
Las clases Cliente y Entrenador heredan de Persona.

### Modificadores de acceso

- private
- protected
- public

### Sobreescritura

Las clases hijas sobrescriben el método virtual:

mostrarInformacion()

### Sobrecarga

La clase Pago implementa:

procesarPago(double cantidad)

procesarPago(double cantidad, string metodo)

### Archivos del proyecto

- persona.h
- cliente.h
- entrenador.h
- pago.h
- main.cpp


