#include <iostream>
#include "11.cine"
using namespace std;

int main()
{
    /*11.cine*/

    int aplicacion=0,bandera=0,asiento=0,reserva=0;
    int sala[15][20];
    char fila=0;

    llenar_matriz(sala);//funcion 1
    imprimir(sala);//funcion 2
    return 0;
}
