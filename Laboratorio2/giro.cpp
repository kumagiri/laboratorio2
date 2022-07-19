#include <iostream>

using namespace std;

void llenar_mgiro(int** mat){
    int n=1;
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
          *(*(mat+i)+j)=n;
           n+=1;

       }
    }
}

void llenar_mgiro2(int** mat){
    int n=1;
    for(int i=4;i>=0;i--){
       for(int j=4;j>=0;j--){
          *(*(mat+i)+j)=n;
           n+=1;

       }
    }
}

void imprimir_mgiro(int** mat){
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
       if(*(*(mat+i)+j)<10){
       cout<<"0"<<*(*(mat+i)+j)<<"|";

       }
       else{
       cout<<*(*(mat+i)+j)<<"|";
       }
       }
       cout<<endl;
}
       cout<<endl;
}
void imprimir_mgiro90(int** mat){
    cout<<"matriz de 90\n";
    for(int i=4;i>=0;i--){
       for(int j=4;j>=0;j--){
       if(*(*(mat+i)+j)<10){
       cout<<"0"<<*(*(mat+i)+j)<<"|";

       }
       else{
       cout<<*(*(mat+i)+j)<<"|";
       }
       }
       cout<<endl;
}
    cout<<endl;
}
void imprimir_mgiro270(int** mat){
    for(int i=4;i>=0;i--){
       for(int j=4;j>=0;j--){
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
