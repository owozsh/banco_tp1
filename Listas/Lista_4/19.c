#include <stdio.h>

int main(){
    int v[10],soma=0;

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
    }

    puts("Maior soma: ");
    for (int i = 0; i <= 9; i++){
        if((v[i]+v[i+1]+v[i+2])>0){
            soma=(v[i]+v[i+1]+v[i+2]);
        }
        if (i>7){
            break;
        }
    }
    printf("%i",soma);
}