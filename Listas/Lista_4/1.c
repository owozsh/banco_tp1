#include <stdio.h>
#include <math.h>

int main(){
    int v[10],w[10];

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
        w[i]=pow(v[i],2.0);
    }

    for (int i = 0; i <= 9; i++){
        printf ("O %i valor de w: %i",i+1,w[i]);
        printf("\n");
    }
    
}
