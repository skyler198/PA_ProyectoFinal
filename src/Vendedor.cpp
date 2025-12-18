//Vendedor.cpp
#include "Vendedor.h"
#include "funcionesDiseno.h" //para gotoxy, dibujar cuadro, centrar //-> FuncionesDiseno.h?
#include <iostream>
#include<string>
using namespace std;

Vendedor::Vendedor() {}

Vendedor::Vendedor(string nombre, string dni, int edad, string usuario, string contrasena, float sueldo)
    : Persona(nombre, dni, edad) {
    this->usuario = usuario;
    this->contrasena = contrasena;
    this->sueldo=sueldo; //Agregando sueldo al constructor
}

void Vendedor::emitirRecibo(Pedido &pedido, Cliente &cliente, int metodoPago, float pagoIngresado){
	system("cls");
	system("COLOR E0");
	
	//Dibujar cuadro de la factura
	dibujarCuadro(5,2,75,25);
	
	//Titulo
	gotoxy(centrar(5,75,"RECIBO DE COMPRA"),3);
	cout<< "RECIBO DE COMPRA";
	
	//Datos del cliente
	cliente.mostrarCliente(5); //Fila inicial dentro del cuadro
	
	//Datos del pedido
	int yPedido=12; //Fila para empezar a mostrar el pedido
	gotoxy(centrar(5,75,"DETALLE DEL PEDIDO"), yPedido);
	cout<<"DETALLE DEL PEDIDO";
	
	float total = pedido.calcularTotal();
	int yTotales=15;
	
	if(metodoPago==1){ //Efectivo
		float vuelto = pagoIngresado - total;
		gotoxy(10, yTotales); cout<<"Metodo de pago: Efectivo";
		gotoxy(10, yTotales+1); cout<<"Monto entregado: S/"<<pagoIngresado;
		gotoxy(10, yTotales+2); cout<<"Vuelto: S/ "<<vuelto; 
	}else if(metodoPago==2){ //Targeta
		float descuento=total*0.01;
		float totalConDescuento=total-descuento;
		gotoxy(10, yTotales); cout<<"Metodo de pago: Tarjeta";
		gotoxy(10, yTotales+1); cout<<"Monto ingresado: S/ "<<pagoIngresado;
		gotoxy(10, yTotales+2); cout<<"Descuento aplicado (1%): S/ "<<descuento;
		gotoxy(10, yTotales+3); cout<<"Total cobrado: S/ "<<totalConDescuento;
	}
	
	gotoxy(centrar(5,75,"Gracias por su compra!"),26);
	cout<<"Gracias por su compra!";
	gotoxy(5,27); //Mover cursos fuera del cuadro
	system("pause");
}

void Vendedor::getRol(){
	cout<<"rol del cliente"<<endl;
}