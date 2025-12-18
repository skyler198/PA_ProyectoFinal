//PedidoPersonalizado.h
#ifndef PEDIDOPERSONALIZADO_H
#define PEDIDOPERSONALIZADO_H

#include "Producto.h"
#include "Opcion.h"

class PedidoPersonalizado {
private:
    Producto producto;
    Opcion opciones[10];
    int cantOpciones;
    int filasQueOcupa; // filas que ocupa al mostrar en cuadro
public:
    PedidoPersonalizado();
    PedidoPersonalizado(Producto producto);

    void agregarOpcion(Opcion opcion);
    float calcularPrecioFinal();

    void mostrarDetalle(); // para debug normal
    void mostrarDetalleEnCuadro(int col, int yInicio); // imprime dentro de cuadro
    int getFilasQueOcupa() { return filasQueOcupa; } // cuántas filas ocupó al mostrar
};

#endif