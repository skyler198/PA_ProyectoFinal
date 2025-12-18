#ifndef CLIENTE_H
#define CLIENTE_H
#include <fstream>
#include"Persona.h"
class Cliente: public Persona{
	private:
		int id;
		string correo;
	public:
		Cliente();
		Cliente(string nombre, string dni, int edad, int id, string codigo);
		
		void agregarCliente(Cliente registroClientes[], int &totalClientes);
		void mostrarCliente(int y);
		void guardarEnArchivo(ofstream &archivo);
};

#endif