#include <iostream>

using namespace std;
// 1
void factorial(int* A,int* D,int* n){
    int c=0;
    c=(*n+*n);
    for(int i=1;i<=c;i++){

        *A*=i;

    }
    c=*n;
    for(int i=1;i<=c;i++){

        *D*=i;

    }
}
// 2
int num_caminos(int* A,int*D){

    int c=0;
    c=(*A/(*D*(*D)));
    return c;

}
