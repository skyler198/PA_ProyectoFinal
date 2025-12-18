//Vendedor.cpp
#include "Vendedor.h"
#include <iostream>
using namespace std;

Vendedor::Vendedor() {}

Vendedor::Vendedor(string nombre, string dni, int edad, string usuario, string contrasena, float sueldo)
    : Persona(nombre, dni, edad) {
    this->usuario = usuario;
    this->contrasena = contrasena;
    this->sueldo = sueldo;
}

void Vendedor::emitirFactura() {
    cout << "Factura emitida por el vendedor." << endl;
}

void Vendedor::recepcionarPedido(){
	cout<<"Pedido recepcionado por el vendedor"<<endl;
}

void Vendedor::getRol(){
	cout<<"rol: Vendedor"<<endl;
}