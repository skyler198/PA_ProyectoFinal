#ifndef PERSONA_H
#define PERSONA_H

#include<string>
using namespace std;

class Persona{
	protected:
		string nombre;
		string dni;
		int edad;
	public:
		Persona();
		Persona(string nombre, string dni, int edad);
		void mostrarPersona();
};

#endif