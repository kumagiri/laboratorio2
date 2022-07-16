#include <iostream>

using namespace std;

void llenar_matriz(int** mat,int n){
    int f=0;
    cout<<"Ahora empezaremos a llenar el cuadrado magico\n"
          "solo recuerda que para que sea cuadrado magico debe\n"
          "sumar en filas columna y diagonal lo mismo, pero no te\n"
          "preocupes al final te dire si es o no es un cuadrado magico\n";
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<"Por favor ingrse el numero de la posicion\n"
              <<i<<","<<j<<": ";
           cin>>f;
           *(*(mat+i)+j)=f;
       }
    }
}
