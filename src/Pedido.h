//Pedido.h
#ifndef PEDIDO_H
#define PEDIDO_H

#include "PedidoPersonalizado.h"
#include <string>
using namespace std;

class Pedido {
private:
    int idPedido;
    string fecha;
    float descuento;
    float totalPago;
    int cantidad;
    PedidoPersonalizado detalles[50];

public:
    Pedido();
    void agregarDetalle(PedidoPersonalizado p);
    float calcularTotal();
    void mostrarPedido(); // para debug, opcional
    void mostrarPedidoEnCuadro(int yInicio, int col); // nueva función
    int getIdPedido();
    string getFecha();
    void setDescuento(float d) { descuento = d; }
};

#endif