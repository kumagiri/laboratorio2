#include <iostream>

using namespace std;

//1
void llenar_matriz(int** mat,int n){
    int f=0,b=0,c=0;
    cout<<"Ahora empezaremos a llenar el cuadrado magico\n"
          "solo recuerda que para que sea cuadrado magico debe\n"
          "sumar en filas, columna y diagonal lo mismo, pero no te\n"
          "preocupes al final te dire si es o no es un cuadrado magico\n";
    cout<<"Recuerda que los numeros no pueden ser repetidos\n";
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           b=0;
            while(b==0){
           cout<<"Por favor ingrse el numero de la posicion\n"
              <<"fila "<<i+1<<",columna "<<j+1<<": ";
           cin>>f;
           c=0;
           for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){

                  if((*(*(mat+i)+j))==f){
                      cout<<"recuerda no poner numeros repetidos"<<endl;
                      c=1;
                      break;
                  }


              }
             if((*(*(mat+i)+j))==f){

                 break;
             }


             }
           if(c!=1){
           *(*(mat+i)+j)=f;
           b=1;
           }

        }
       }
    }
}

//2
void imprimir_matriz(int** mat,int n){
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
       if(*(*(mat+i)+j)<10){
       cout<<"0"<<*(*(mat+i)+j)<<"|";

       }
       else{
       cout<<*(*(mat+i)+j)<<"|";
       }
       }
       cout<<endl;
}

}

//3
void suma(int** mat,int* sum,int n){
    int k=0;
    //filas
    for(int i=0;i<n;i++){
        cout<<"Fila "<<i+1 <<": ";
       for(int j=0;j<n;j++){

         cout<<*(*(mat+i)+j)<<"-";
         *(sum+k)+=*(*(mat+i)+j);
        }
       cout<<endl;
       cout<<"La suma fila "<<i+1<<" es:\n";
       cout<<*(sum+k)<<endl;
       k+=1;
}
    //columnas
    for(int i=0;i<n;i++){
       cout<<"columna "<<i+1<<": ";
       for(int j=0;j<n;j++){

         cout<<*(*(mat+j)+i)<<"-";
         *(sum+k)+=*(*(mat+j)+i);
        }
       cout<<endl;
       cout<<"La suma columna "<<i+1<<" es:\n";
       cout<<*(sum+k)<<endl;
       k+=1;
}
    //diagonal izquierda- derecha
     cout<<"Diagonal 1:";
    for(int i=0;i<n;i++){

       for(int j=0;j<n;j++){
       if(i==j){
         cout<<*(*(mat+i)+j)<<"-";
         *(sum+k)+=*(*(mat+i)+j);
        }
       }

}
    cout<<endl;
    cout<<"La suma de la diagonal 1 es:\n";
    cout<<*(sum+k)<<endl;
    k+=1;
    //fila derecha-izquierda
    int j=n-1;
    cout<<"Diagonal 2:";
    for(int i=0;i<n;i++){
        cout<<*(*(mat+i)+j)<<"-";
        *(sum+k)+=*(*(mat+i)+j);
        j-=1;
    }
    cout<<endl;
    cout<<"La suma de la diagonal 2 es:\n";
    cout<<*(sum+k)<<endl;

}
//4
void verificacion(int* sum,int l){
    int diferente=0;
    for(int i=0;i<l;i++){
        if(i==l-1){

            break;
        }
        else{
            if(*(sum+i)==*(sum+(i+1))){

            }
            else {
                diferente+=1;
            }
        }

    }
    if(diferente==0){
        cout<<"El cuadrado que ingresaste es un cuadrado magico\n";
    }
    else {
        cout<<"El cuadrado que ingresaste no es magico tiene "<<
              diferente<<" sumas que son diferentes\n";
    }
}
