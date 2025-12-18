//Pedido.cpp
#include "Pedido.h"
#include "funcionesDiseno.h"
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

void Pedido::mostrarPedidoEnCuadro(int yInicio, int col){
	int y=yInicio;
	
	for(int i=0; i<cantidad; i++){
		detalles[i].mostrarDetalleEnCuadro(col, y);
		y += detalles[i].getFilasQueOcupa();
		y++; //espacio extra entre productos
	}
	
	//totales
	
	gotoxy(col, y);
	cout<<"TOTAL: S/ "<<calcularTotal();
	if(descuento>0){
		gotoxy(col, y+1);
		cout<<"Descuento aplicado: S/ "<<descuento;
	}
}

int Pedido::getIdPedido(){
    return idPedido;
}

string Pedido::getFecha(){
    return fecha;
}
