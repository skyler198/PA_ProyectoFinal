//PedidoPersonalizado.cpp
#include "PedidoPersonalizado.h"
#include <iostream>
using namespace std;

PedidoPersonalizado::PedidoPersonalizado(){
    cantOpciones = 0;
}

PedidoPersonalizado::PedidoPersonalizado(Producto producto){
    this->producto = producto;
    cantOpciones = 0;
}

void PedidoPersonalizado::agregarOpcion(Opcion opcion){
    opciones[cantOpciones++] = opcion;
}

float PedidoPersonalizado::calcularPrecioFinal(){
    float total = producto.getPrecio();
    for (int i = 0; i < cantOpciones; i++)
        total += opciones[i].getPrecioExtra();
    return total;
}

void PedidoPersonalizado::mostrarDetalle(){
    cout << producto.getNombre() << "S/ " << calcularPrecioFinal() << endl;
}