#ifndef CLIENTE_H
#define CLIENTE_H

#include"Persona.h"
class Cliente: public Persona{
	private:
		int id;
		string correo;
	public:
		Cliente();
		Cliente(string nombre, string dni, int edad, int id, string codigo);
};

#endif