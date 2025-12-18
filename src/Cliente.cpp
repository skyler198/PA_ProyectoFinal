#include "Cliente.h"

Cliente::Cliente(){
}

Cliente::Cliente(string nombre, string dni, int edad, int id, string codigo):Persona(nombre,dni,edad){
	this->id=id;
	this->correo=correo;
}