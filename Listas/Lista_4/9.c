#include <stdio.h>

int main(){
    int v[5],w[5],k[5];

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
        k[i]=v[i]+w[i];
    }
    printf("\n");
    for (int i = 0; i <= 4; i++){
        printf (" %i",k[i]);
    }    
}