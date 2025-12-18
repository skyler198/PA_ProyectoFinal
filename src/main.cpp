#include <iostream>
#include <string>
#include "Cliente.h"
#include "Producto.h"
#include "Opcion.h"
#include "Pedido.h"
#include "PedidoPersonalizado.h"
#include "Vendedor.h"
#include "funcionesDiseno.h"

using namespace std;

int main() {
    Cliente registroClientes[50];
    int totalClientes = 0;

    Producto productos[5] = {
        Producto(1, "Combo Familiar", 35.0, 10, "Pollo + Papas + Bebida"),
        Producto(2, "Combo Personal", 15.0, 20, "Pollo + Bebida"),
        Producto(3, "Alitas Picantes", 20.0, 15, "Alitas con salsa picante"),
        Producto(4, "Hamburguesa", 12.0, 25, "Hamburguesa simple"),
        Producto(5, "Papas Fritas", 8.0, 30, "Papas crocantes")
    };

    Opcion extras[3] = {
        Opcion("Extra Salsa", 2.0),
        Opcion("Extra Queso", 3.0),
        Opcion("Extra Bebida", 4.0)
    };

    Vendedor vendedor("Juan Perez", "12345678", 30, "admin", "1234", 2500.0);

    int opcionPrincipal;

    do {
        system("cls");
        system("COLOR E0");
        dibujarCuadro(2,1,95,28); // tamaño del cuadro
        gotoxy(30,6); cout << "SISTEMA DE COMIDA RAPIDA";

        gotoxy(20,8); cout << "1. Clientes";
        gotoxy(20,10); cout << "2. Pedidos";
        gotoxy(20,12); cout << "3. Salir";

        gotoxy(20,15); cout << "Seleccione opcion: ";
        cin >> opcionPrincipal;
        cin.ignore();

        switch(opcionPrincipal) {

            case 1: { // Menu Clientes
                system("cls");
                dibujarCuadro(2,1,95,28); 
                gotoxy(28,6); cout << "MENU CLIENTES";

                gotoxy(20,8); cout << "1. Agregar Cliente";
                gotoxy(20,10); cout << "2. Mostrar Clientes";
                gotoxy(20,12); cout << "3. Volver";

                int opClientes;
                gotoxy(20,14); cout << "Opcion: ";
                cin >> opClientes; cin.ignore();

                if(opClientes == 1){
                    char conf = 'n';
                    gotoxy(15,16); cout << "¿Desea registrar un cliente? (s/n): ";
                    cin >> conf; cin.ignore();

                    if(conf == 's' || conf == 'S') {
                        system("cls");
                        dibujarCuadro(2,1,95,28); 
                        registroClientes[totalClientes].agregarCliente(registroClientes, totalClientes);
                    }
                }
                else if(opClientes == 2){
                    if(totalClientes == 0){
                        gotoxy(20,16); cout << "No hay clientes registrados.";
                        gotoxy(20,18); system("pause");
                        break;
                    }
                    system("cls");
                    dibujarCuadro(2,1,95,28); 
                    gotoxy(25,6); cout << "CLIENTES REGISTRADOS";
                    int y = 8;
                    for(int i=0; i<totalClientes; i++){
                        registroClientes[i].mostrarCliente(y);
                        y += 6;
                    }
                    gotoxy(20,18); system("pause");
                }
                break;
            }

            case 2: { // Menu Pedidos
                if(totalClientes == 0){
                    gotoxy(20,16); cout << "No hay clientes registrados. Vuelva al menu principal.";
                    gotoxy(20,18); system("pause");
                    break;
                }

                system("cls");
                dibujarCuadro(2,1,95,28); 
                gotoxy(25,6); cout << "MENU PEDIDOS";

                gotoxy(20,8); cout << "1. Realizar Compra";
                gotoxy(20,10); cout << "2. Volver";

                int opPedidos;
                gotoxy(20,12); cout << "Opcion: ";
                cin >> opPedidos; cin.ignore();

                if(opPedidos == 1){
                    string dniCliente;
                    gotoxy(20,14); cout << "Ingrese DNI del cliente: ";
                    cin >> dniCliente; cin.ignore();

                    int idxCliente = -1;
                    for(int i=0; i<totalClientes; i++)
                        if(registroClientes[i].getDNI() == dniCliente)
                            idxCliente = i;

                    if(idxCliente == -1){
                        gotoxy(20,16); cout << "Cliente no registrado. Registre primero.";
                        gotoxy(20,18); system("pause");
                        break;
                    }

                    Pedido pedido;
                    char seguir = 's';
                    while(seguir == 's' || seguir == 'S'){
                        system("cls");
                        dibujarCuadro(2,1,95,28); 
                        gotoxy(25,6); cout << "SELECCIONE PRODUCTO";

                        int yProd = 8;
                        for(int i=0; i<5; i++){
                            gotoxy(20,yProd++); 
                            cout << i+1 << ". " << productos[i].getNombre() << " | S/ " << productos[i].getPrecio();
                        }

                        gotoxy(20,14); cout << "Producto: ";
                        int prodSel; cin >> prodSel; cin.ignore();
                        gotoxy(20,15); cout << "Cantidad: ";
                        int cantidad; cin >> cantidad; cin.ignore();

                        for(int c=0; c<cantidad; c++){
                            PedidoPersonalizado pp(productos[prodSel-1]);
                            char opcionExtra = 'n';
                            gotoxy(20,16); cout << "Agregar extra? (s/n): ";
                            cin >> opcionExtra; cin.ignore();
                            if(opcionExtra == 's' || opcionExtra == 'S'){
                                for(int e=0; e<3; e++){
                                    gotoxy(20,17+e); cout << e+1 << ". " << extras[e].getNombre() << " | S/ " << extras[e].getPrecioExtra();
                                }
                                gotoxy(20,20); cout << "Seleccione extra: ";
                                int selExtra; cin >> selExtra; cin.ignore();
                                pp.agregarOpcion(extras[selExtra-1]);
                            }
                            pedido.agregarDetalle(pp);
                        }

                        gotoxy(20,22); cout << "Desea seguir pidiendo? (s/n): ";
                        cin >> seguir; cin.ignore();
                    }

                    // Metodo de pago
                    system("cls");
                    dibujarCuadro(2,1,95,28); 
                    gotoxy(25,6); cout << "METODO DE PAGO";
                    gotoxy(20,8); cout << "1. Efectivo";
                    gotoxy(20,10); cout << "2. Tarjeta";
                    int metodo; gotoxy(20,12); cout << "Opcion: ";
                    cin >> metodo; cin.ignore();

                    float pagoIngresado = 0;
                    if(metodo == 1){
                        gotoxy(20,14); cout << "Ingrese cantidad de efectivo: ";
                        cin >> pagoIngresado; cin.ignore();
                    } else if(metodo == 2){
                        pedido.setDescuento(pedido.calcularTotal()*0.01);
                        gotoxy(20,14); cout << "Ingrese monto de la tarjeta: ";
                        cin >> pagoIngresado; cin.ignore();
                    }

                    // Emitir factura
                    system("cls");
                    dibujarCuadro(2,1,95,28); 
                    gotoxy(30,4); cout << "FACTURA";
                    vendedor.emitirRecibo(pedido, registroClientes[idxCliente], metodo, pagoIngresado);
                }
                break;
            }
        }

    } while(opcionPrincipal != 3);

    return 0;
}