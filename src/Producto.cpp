//Producto.cpp
#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto() {}

Producto::Producto(int codigo, string nombreComida, float precio, int stock, string descripcion) {
    this->codigo = codigo;
    this->nombreComida = nombreComida;
    this->precio = precio;
    this->stock = stock;
    this->descripcion = descripcion;
}

float Producto::getPrecio() {
    return precio;
}

string Producto::getNombre() {
    return nombreComida;
}

void Producto::mostrarProducto() {
    cout << nombreComida << " - S/ " << precio << endl;
}