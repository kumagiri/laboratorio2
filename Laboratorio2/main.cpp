#include <iostream>
#include "11.cine"
using namespace std;

int main()
{
    /*11.cine*/

    int aplicacion=0,bandera=0,asiento=0,reserva=0;
    int** sala;
    char fila=0;

    sala= new int*[15];
    for(int i=0;i<20;i++){
        sala[i]=new int[20];
    }
    llenar_matriz(sala);//funcion 1
    imprimir(sala);//funcion 2
    reservar(sala);
    imprimir(sala);
    return 0;
}
