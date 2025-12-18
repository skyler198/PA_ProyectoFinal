#include "Cliente.h"
#include <iostream>
#include "FuncionesDiseno.h"
#include <windows.h>

using namespace std;

Cliente::Cliente(){
}

Cliente::Cliente(string nombre, string dni, int edad, int id, string correo) : Persona(nombre,dni,edad){
    this->id = id;
    this->correo = correo;
}

void Cliente::agregarCliente(Cliente registroClientes[], int &totalClientes){
    string nombre, dni, correo;
    int edad, id;

    system("cls");               // limpiar pantalla
    dibujarCuadro(2,1,95,28);    // cuadro grande fijo
    gotoxy(centrar(2,95,"REGISTRO DE CLIENTE"),2); cout << "REGISTRO DE CLIENTE";

    gotoxy(10,5); cout << "Ingrese ID del cliente: ";
    cin >> id; cin.ignore();

    gotoxy(10,7); cout << "Ingrese nombre: ";
    getline(cin, nombre);
    if(nombre.length() > 50) nombre = nombre.substr(0,50);

    gotoxy(10,9); cout << "Ingrese DNI: ";
    getline(cin, dni);
    if(dni.length() > 15) dni = dni.substr(0,15);

    gotoxy(10,11); cout << "Ingrese edad: ";
    cin >> edad; cin.ignore();

    gotoxy(10,13); cout << "Ingrese correo: ";
    getline(cin, correo);
    if(correo.length() > 50) correo = correo.substr(0,50);

    // Guardar en el arreglo
    registroClientes[totalClientes] = Cliente(nombre, dni, edad, id, correo);
    totalClientes++;

    gotoxy(10,16); cout << "Cliente agregado correctamente!";
    gotoxy(10,18); system("pause");
}

void Cliente::mostrarCliente(int y){
    int col = 10; // columna fija dentro del cuadro
    gotoxy(col, y);     cout << "Nombre: " << nombre;
    gotoxy(col, y+1);   cout << "DNI:    " << dni;
    gotoxy(col, y+2);   cout << "Edad:   " << edad;
    gotoxy(col, y+3);   cout << "ID:     " << id;
    gotoxy(col, y+4);   cout << "Correo: " << correo;
}

