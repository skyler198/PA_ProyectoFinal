//Pedido.cpp
#include "Pedido.h"
#include <iostream>
using namespace std;

Pedido::Pedido(){
    idPedido = 1;                 
    fecha = "2025-12-17";          
    descuento = 0;
    totalPago = 0;
    cantidad = 0;
}

void Pedido::agregarDetalle(PedidoPersonalizado p){
    detalles[cantidad++] = p;
}

float Pedido::calcularTotal(){
    totalPago = 0;
    for (int i = 0; i < cantidad; i++)
        totalPago += detalles[i].calcularPrecioFinal();

    totalPago -= descuento;
    return totalPago;
}

void Pedido::mostrarPedido(){
    cout << "\n----- TU PEDIDO ACTUAL ES: -----\n";
    cout << "Pedido #: " << idPedido << endl;
    cout << "Fecha: " << fecha << endl;

    for (int i = 0; i < cantidad; i++)
        detalles[i].mostrarDetalle();

    cout << "Descuento: S/ " << descuento << endl;
    cout << "TOTAL A PAGAR: S/ " << calcularTotal() << endl;
}

int Pedido::getIdPedido(){
    return idPedido;
}

string Pedido::getFecha(){
    return fecha;
}
