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

public:
    PedidoPersonalizado();
    PedidoPersonalizado(Producto producto);

    void agregarOpcion(Opcion opcion);
    float calcularPrecioFinal();
    void mostrarDetalle();
};

#endif