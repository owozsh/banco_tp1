#include <stdio.h>

int main(){
    int v[10],k;
    
    printf ("Digite o valor de k: ");
    scanf ("%i",&k);

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
    }

    printf("\nNumeros do vetor v[10] multiplos de k: ");

    for (int i = 0; i <= 9; i++){
        if (v[i]%k==0){
            printf (" %i",v[i]);
        }        
    }
}
