descripcion:
El problema que abarcamos en nuestro proyecto es la ineficiencia de los trabajodores a ciertos acciones como anotar un pedido, calcular su vuelto, el tiempo que demora en realizar estas 
acciones, y las largas colas de espera debido a ello, lo que provoca el disgusto de los clientes y su futura inasistencia.

Frente a este problema se desarrollo un sistema de gestion de comidas rapidas, que ayuda a realizar los pedidos de un cliente con solo un "click", ademas de que calcula el vuelto que recibe 
una persona de forma muy rapida, y ayuda a disminuir las largas colas de espera, tambien guarda informacion de los clientes para futuros funciones que ayuden a mejorar la calidad del programa
en la ayuda de los vendedores y la satisfaccion del cliente.

Requisitos:
lenguaje c++
se utilizo el compilador c++ que es lo que le da vida al proyecto, debido a que en esta se realizan las operaciones y acciones para que el programa funciones y sea eficiente

Como compilar y ejecutar:
para compilar al programa deberas ir a la carpeta que dice src, ahi apareceran varios programas pero tu buscas el que dice "sistema_de_comida_rapida.dev", que es practicamente el proyecto,
una ves ingresado tendras que apretar f11, para compilar y ejecutar el programa

casos de prueba:

 int idxCliente = -1;
 for(int i=0; i<totalClientes; i++)
 if(registroClientes[i].getDNI() == dniCliente)
 idxCliente = i;
 if(idxCliente == -1)
 en esta parte del codigo que se encuentra en el main.cpp, se va a realizar un bucle for hasta cierta cantidad y dentro de ella vamos a ir comparando los dni que se encuentran registrados en
 el programa con el dni que el usuario menciono. Si el dni se encuentra entonces una variable idxCliente guardara la posicion donde se encuentra el dni para despues realizar otras funciones, 
 pero si no entonces mostrara un mensaje para que el cliente se registre


void guardarClientesArchivo(Cliente registroClientes[], int totalClientes) {
    ofstream archivo("clientes.txt");
    if(!archivo){
        cout << "No se pudo abrir el archivo para guardar clientes.\n";
        return;
    }

  for(int i = 0; i < totalClientes; i++){
        registroClientes[i].guardarEnArchivo(archivo);
    }

  archivo.close();
} 
Esta funcion lo que hace es crear un archivo Cliente.txt si no existiera, pero si existe solo lo abre para realizar acciones, el programa comprueba si el archvio esta abierto, ci no envia un
mensaje diciendo que no se puede abrir, casos contrario realiza un bucle for donde guarda(los datos de los cliente que se encuentran en el arreglo)la informacion en un archvio txt

