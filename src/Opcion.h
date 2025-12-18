//opcion.h
#ifndef OPCION_H
#define OPCION_H

#include<string>
using namespace std;

class Opcion{
private:
    string nombre;
    float precioExtra;

public:
    Opcion();
    Opcion(string nombre, float precioExtra);

    string getNombre();
    float getPrecioExtra();
};

#endif