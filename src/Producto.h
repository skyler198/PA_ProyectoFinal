//Producto.h
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
private:
    int codigo;
    string nombreComida;
    float precio;
    int stock;
    string descripcion;

public:
    Producto();
    Producto(int codigo, string nombreComida, float precio, int stock, string descripcion);

    float getPrecio();
    string getNombre();
    void mostrarProducto();
};

#endif