#include <stdio.h>

int main(){
    int v[10];

    for (int i = 1; i <= 9; i++){
        printf ("\nDigite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
        
    }

    printf("Numeros pares decrescentes do vetor v[10]:");


    for (int i = 9; i >= 0; i--){
        if (v[i]%2==0){
            printf (" %i",v[i]);
        }        
    }
    
}
