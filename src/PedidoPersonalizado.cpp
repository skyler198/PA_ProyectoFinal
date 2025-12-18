//PedidoPersonalizado.cpp
#include "PedidoPersonalizado.h"
#include "FuncionesDiseno.h" // gotoxy
#include <iostream>
using namespace std;

PedidoPersonalizado::PedidoPersonalizado() {
    cantOpciones = 0;
    filasQueOcupa = 0;
}

PedidoPersonalizado::PedidoPersonalizado(Producto producto) {
    this->producto = producto;
    cantOpciones = 0;
    filasQueOcupa = 0;
}

void PedidoPersonalizado::agregarOpcion(Opcion opcion) {
    opciones[cantOpciones++] = opcion;
}

float PedidoPersonalizado::calcularPrecioFinal() {
    float total = producto.getPrecio();
    for (int i = 0; i < cantOpciones; i++)
        total += opciones[i].getPrecioExtra();
    return total;
}

void PedidoPersonalizado::mostrarDetalle() {
    cout << producto.getNombre() << " | S/ " << producto.getPrecio() << endl;
    for (int i = 0; i < cantOpciones; i++)
        cout << "  + " << opciones[i].getNombre()
             << " | S/ " << opciones[i].getPrecioExtra() << endl;
}

void PedidoPersonalizado::mostrarDetalleEnCuadro(int col, int yInicio) {
    int y = yInicio;
    gotoxy(col, y++);
    cout << "- " << producto.getNombre() << " | S/ " << producto.getPrecio();

    for (int i = 0; i < cantOpciones; i++) {
        gotoxy(col + 4, y++);
        cout << "+ " << opciones[i].getNombre()
             << " | S/ " << opciones[i].getPrecioExtra();
    }

    filasQueOcupa = cantOpciones + 1; // producto + opciones
}
