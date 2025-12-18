//Vendedor.h
#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Persona.h"

class Vendedor : public Persona {
	private:
    	string usuario;
    	string contrasena;
		float sueldo;
	public:
    	Vendedor();
    	Vendedor(string nombre, string dni, int edad,string usuario, string contrasena, float sueldo);
		void emitirFactura();
		void recepcionarPedido();
		void getRol();
};

#endif