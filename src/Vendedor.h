//Vendedor.h
#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Persona.h"
#include "Pedido.h"
#include "Cliente.h"

class Vendedor : public Persona {
private:
    string usuario;
    string contrasena;
    float sueldo;

public:
    Vendedor();
    Vendedor(string nombre, string dni, int edad,
             string usuario, string contrasena, float sueldo);

    void emitirRecibo(Pedido &pedido, Cliente &cliente, int metodoPago, float pagoIngresado);
    void getRol();
};

#endif