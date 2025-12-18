#include "funcionesDiseno.h"
#include <windows.h>
#include <iostream>
#include <string.h>
using namespace std;


// Función para centrar texto dentro de cuadro
int centrar(int x1, int x2, string texto) {
    return x1 + (x2 - x1 - texto.length())/2;
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void dibujarCuadro(int x1, int y1, int x2, int y2){
    // Esquinas
    gotoxy(x1, y1); cout << char(201); 
    gotoxy(x2, y1); cout << char(187); 
    gotoxy(x1, y2); cout << char(200); 
    gotoxy(x2, y2); cout << char(188); 

    // Bordes horizontales
    for (int i = x1 + 1; i < x2; i++){
        gotoxy(i, y1); cout << char(205); 
        gotoxy(i, y2); cout << char(205); 
    }

    // Bordes verticales
    for (int i = y1 + 1; i < y2; i++) {
        gotoxy(x1, i); cout << char(186); 
        gotoxy(x2, i); cout << char(186); 
    }
}