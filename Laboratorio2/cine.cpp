#include <iostream>
using namespace std;

//Estas son las funciones del punto 11
//1
void llenar_matriz(int** mat){

    for(int i=0;i<15;i++){
       for(int j=0;j<20;j++){
           *(*(mat+i)+j)=0;
       }
    }
}

//2
void imprimir(int** mat){

    cout<<" "<<"|01|02|03|04|05|06|07|08|09|10|11|12|13|14|15|16|17|18|19|20|"<<endl;
         for (int i=0;i<15;i++){
             switch (i) {
             case 0:cout<<"A|";break;
             case 1:cout<<"B|";break;
             case 2:cout<<"C|";break;
             case 3:cout<<"D|";break;
             case 4:cout<<"E|";break;                        //se hace uso de un while para crear un bucle en el cual se guarden
             case 5:cout<<"F|";break;                        //las acciones realizadas, se imprime una serie de numeros y un switch
             case 6:cout<<"G|";break;                        //para las letras de filas y se crea acompañado de otro for una matriz de
             case 7:cout<<"H|";break;                        //tamaño ixj o fijado como una matriz 15x20 y a estos espacios se le imprime
             case 8:cout<<"I|";break;                        //un + para reserva y - para vacio y respectivamente en la matriz se guardan
             case 9:cout<<"J|";break;                        //con 1 o 0 respectivamente
             case 10:cout<<"K|";break;
             case 11:cout<<"L|";break;
             case 12:cout<<"M|";break;
             case 13:cout<<"N|";break;
             case 14:cout<<"O|";break;
             }
             for(int j=0;j<20;j++){
                 if( *(*(mat+i)+j)==0){
                     if(j>=9){
                     cout<<" -|";
                     }
                     else if(j<9){
                         cout<<" -|";
                     }
                 }
                 else if( *(*(mat+i)+j)==1){
                     if(j>=9){
                     cout<<" +|";
                     }
                     else if(j<9){
                         cout<<" +|";
                     }
                 }
             }
             cout<<endl;
         }
    }

void reservar(int** mat){
    char fila=0;
    int columna=0;
    cout<<"Por favor ingrese la fila de la A a la O: ";
    cin>>fila;
    switch (fila) {
                    case 'A':fila=0;break;
                    case 'B':fila=1;break;
                    case 'C':fila=2;break;
                    case 'D':fila=3;break;
                    case 'E':fila=4;break;
                    case 'F':fila=5;break;
                    case 'G':fila=6;break;
                    case 'H':fila=7;break;
                    case 'I':fila=8;break;
                    case 'J':fila=9;break;
                    case 'K':fila=10;break;
                    case 'L':fila=11;break;
                    case 'M':fila=12;break;
                    case 'N':fila=13;break;
                    case 'O':fila=14;break;
    }
    cout<<"Por favor ingrese el asiento del 1 al 20: ";
    cin>>columna;

     *(*(mat+fila)+columna)=1;
}
