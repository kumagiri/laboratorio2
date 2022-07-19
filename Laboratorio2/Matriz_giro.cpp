#include <iostream>

using namespace std;

void llenar_mgiro(int** mat){
    int n=1;
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
          *(*(mat+i))=n;
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

}
