#include "Persona.h"
#include<iostream>
using namespace std;

Persona::Persona(){
}

Persona::Persona(string nombre, string dni, int edad){
	this->nombre=nombre;
	this->dni=dni;
	this->edad=edad;
}

void Persona::mostrarPersona(){
	cout<<nombre<<"-"<<dni<<"-"<<edad<<endl;
}