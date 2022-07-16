#include <iostream>

using namespace std;

void llenar_matriz(int** mat,int n){
    int f=0,b=0;
    cout<<"Ahora empezaremos a llenar el cuadrado magico\n"
          "solo recuerda que para que sea cuadrado magico debe\n"
          "sumar en filas columna y diagonal lo mismo, pero no te\n"
          "preocupes al final te dire si es o no es un cuadrado magico\n";
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           b=0;
           while(b==0){
           cout<<"Por favor ingrse el numero de la posicion\n"
              <<"fila "<<i+1<<",columna "<<j+1<<": ";
           cin>>f;
           for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){

                  if((*(*(mat+i)+j))==f){
                      cout<<"recuerda no poner numeros repetidos"<<endl;
                      break;
                  }


              }
             if((*(*(mat+i)+j))==f){
                 break;
             }


             }
           *(*(mat+i)+j)=f;
           b=1;

        }
       }
    }
}
void imprimir_matriz(int** mat,int n){
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
      cout<<*(*(mat+i)+j);
        }
       cout<<endl;
}

}
