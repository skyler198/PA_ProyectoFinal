#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona(){}

Persona::Persona(string nombre, string dni, int edad){
    this->nombre = nombre;
    this->dni = dni;
    this->edad = edad;
}

void Persona::mostrarPersona(){
    cout << "Nombre: " << nombre << endl;
    cout << "DNI:    " << dni << endl;
    cout << "Edad:   " << edad << endl;
}

string Persona::getDNI(){
    return dni;
}

