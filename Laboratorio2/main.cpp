#include <iostream>
#include "11.cine"
#include "12.cuadrado"
using namespace std;

int main()
{
    /*11.cine

    int aplicacion=0,bandera=0;
    int** sala=nullptr;
    int fila=0, columna=0;



    sala= new int*[15];
    for(int i=0;i<20;i++){
        sala[i]=new int[20];
    }
    llenar_matriz(sala);//funcion 1
    while(bandera==0){
    imprimir(sala);//funcion 2
    aplicacion=menu();//funcion 6
    if(aplicacion==1){
       escoger_asiento(&fila,&columna);//funcion 5
       reservar(sala,&fila,&columna);//funcion 3
    }
    else if(aplicacion==2){
        escoger_asiento(&fila,&columna);//funcion 5
        quitar(sala,&fila,&columna);//funcion 4
    }
   else if(aplicacion==3){
        llenar_matriz(sala);//funcion 1
    }
   else if(aplicacion==4){
        bandera=1;
    }
}
    for(int i=0;i<20;i++){
        delete[] sala[i];
    }
    delete [] sala;*/

/*12.cuadrado magico*/

    int n=0;
    int** cuadro=nullptr;

    cout<<"Por favor ingrese el tamano del cuadrado que desea realizar: ";
    cin>>n;

    cuadro = new int*[n];
    for(int i=0;i<n;i++){
        cuadro[i]=new int[n];

    }
    llenar_matriz(cuadro,n);
    imprimir_matriz(cuadro,n);
    for(int i=0;i<n;i++){
        delete[] cuadro[i];
    }
    delete[]cuadro;



    return 0;
}
