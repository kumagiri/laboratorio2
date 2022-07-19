
#include <iostream>
#include "11.cine"
#include "12.cuadrado"
#include "14.giro"


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




    /*12.cuadrado magico

    int n=0,l=0;
    int** cuadro=nullptr;
    int* sum=nullptr;
    cout<<"Por favor ingrese el numero de filas y columnas del cuadrado que desea realizar este del 2 en adelante: ";
    cin>>n;

    cuadro = new int*[n];
    for(int i=0;i<n;i++){
        cuadro[i]=new int[n];

    }
    llenar_matriz(cuadro,n);
    imprimir_matriz(cuadro,n);
    l=(n+n)+2;
    sum= new int[l];

    for(int i=0;i<l;i++){
        *(sum+i)=0;
    }
    suma(cuadro,sum,n);
    verificacion(sum,l);
    for(int i=0;i<n;i++){
        delete[] cuadro[i];
    }
    delete[]cuadro;
    delete[] sum;*/


    /*14 Giro matriz de 90°*/

    int** mat=nullptr;
    mat= new int*[5];
    for(int i=0;i<5;i++){
        mat[i]=new int[5];
    }
    llenar_mgiro(mat);
    imprimir_mgiro(mat);
    llenar_mgiro2(mat);
    imprimir_mgiro90(mat);
   // imprimir_mgiro270(mat);

    for(int i=0;i<5;i++){
        delete[] mat[i];
    }
    delete[]mat;
    return 0;
}

