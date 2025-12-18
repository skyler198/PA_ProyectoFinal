//Pedido.h
#ifndef PEDIDO_H
#define PEDIDO_H
#include "PedidoPersonalizado.h"
#include <string>
#include <fstream>

using namespace std;

class Pedido{
private:
    int idPedido;
    string fecha;
    float totalPago;
    float descuento;
    PedidoPersonalizado detalles[50];
    int cantidad;

public:
    Pedido();
    void agregarDetalle(PedidoPersonalizado p);
    float calcularTotal();
    void mostrarPedido();
    void mostrarPedidoEnCuadro(int yInicio, int col);
    int getIdPedido();
    string getFecha();
    void setDescuento(float d) { descuento = d; }
};
 

#endif
