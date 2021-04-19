#include <stdio.h>

int main(){
    int v[10],comparador,contador=0;

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
    }

    puts("Numeros que apareceram mais de uma vez: ");
    for (int i = 0; i <= 9; i++){
        comparador=v[i];
        contador=0;
        for (int j = 0; j <= 9; j++){
            if (comparador==v[j]){
                contador++;
            }
        }
        if (contador>1){
            printf(" %i",v[i]);
        }
    }
}