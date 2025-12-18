//Opcion.cpp
#include "Opcion.h"

Opcion::Opcion(){
}

Opcion::Opcion(string nombre, float precioExtra){
    this-> nombre = nombre;
    this-> precioExtra = precioExtra;
}

string Opcion::getNombre() {
    return nombre;
}

float Opcion::getPrecioExtra() {
    return precioExtra;
}
