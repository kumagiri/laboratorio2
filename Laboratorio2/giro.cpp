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

void llenar_mgiro3(int** mat){
    int n=1;
    for(int i=0;i<5;i++){
       for(int j=4;j>=0;j--){
          *(*(mat+i)+j)=n;
           n+=1;

       }
    }
}
void imprimir_mgiro(int** mat){
    cout<<"matriz original\n";
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
       for(int j=0;j<5;j++){
       if(*(*(mat+j)+i)<10){
       cout<<"0"<<*(*(mat+j)+i)<<"|";

       }
       else if(*(*(mat+j)+i)>=10){
       cout<<*(*(mat+j)+i)<<"|";
       }
       }
       cout<<endl;
}
    cout<<endl;
}
void imprimir_mgiro180(int** mat){
    cout<<"matriz de 180\n";
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
    cout<<"matriz de 270\n";
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           if(*(*(mat+j)+i)<10){
           cout<<"0"<<*(*(mat+j)+i)<<"|";

           }
           else if(*(*(mat+j)+i)>=10){
           cout<<*(*(mat+j)+i)<<"|";
           }
           }
           cout<<endl;
    }
}
