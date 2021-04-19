#include <stdio.h>

int main(){
    int v[10],k,contador=0;
    
    printf ("Digite o valor de k: ");
    scanf ("%i",&k);

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
        if (v[i]>k){
           contador++;
        }   
    }

    printf("\nNumeros do vetor maiores que k: %i.",contador);
}
