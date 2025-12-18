//Opcion.cpp
#include "Opcion.h"

Opcion::Opcion(){
}

Opcion::Opcion(string n, float Pe){
    nombre = n;
    precioExtra = Pe;
}

string Opcion::getNombre() {
    return nombre;
}

float Opcion::getPrecioExtra() {
    return precioExtra;
}
