//PedidoPersonalizado.h
#ifndef PEDIDOPERSONALIZADO_H
#define PEDIDOPERSONALIZADO_H
#include "Producto.h"
#include "Opcion.h"
#include <fstream>

class PedidoPersonalizado{
private:
    Producto producto;
    Opcion opciones[10];
    int cantOpciones;
    int filasQueOcupa; //Filas que ocupa al mostrar en cuadro

public:
    PedidoPersonalizado();
    PedidoPersonalizado(Producto producto);

    void agregarOpcion(Opcion opcion);
    float calcularPrecioFinal();
    void mostrarDetalle(); //Para debug normal
    void mostrarDetalleEnCuadro(int col,int yInicio); //Imprime dentro del cuadro
    int getFilasQueOcupa(){return filasQueOcupa;} //Cuántas filas ocupó al mostrar
};

#endif