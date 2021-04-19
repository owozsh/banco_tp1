#include <stdio.h>

int main(){
    int v[10],w[10],k,contador=0,aux=0;
    
    printf ("Digite o valor de k: ");
    scanf ("%i",&k);

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i);
        scanf ("%i",&v[i]);
        if (v[i]>k){
            w[contador]=v[i];
            contador++;
            aux++;
        }
        
    }

    puts("Os valores de w:");
    for (contador = 0; contador <= aux; contador++){
        printf (" %i",w[contador]);
    }
    
}
