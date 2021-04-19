#include <stdio.h>

int main(){
    int v[5],w[5],k[10];

    for (int i = 0; i <= 4; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
    }
    printf("\n");
    for (int i = 0; i <= 4; i++){
        printf ("Digite o %i valor de w: ",i+1);
        scanf ("%i",&w[i]);
    }

    for (int i = 0; i <= 4; i++){
        if(i==0){
            k[i]=v[i];
        }
        else{
            k[i*2]=v[i];
        }
    }
    for (int i = 0; i <= 4; i++){
        if(i==0){
            k[i+1]=w[i];
        }else{
            k[(i*2)+1]=w[i];
        }
    }

    printf("\n");
    for (int i = 0; i <= 9; i++){
        printf ("O %i valor de k: %i\n",i+1,k[i]);
    }
}