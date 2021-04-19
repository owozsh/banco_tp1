#include <stdio.h>

int main(){
    int tv,n,p,contador=0;
    
    puts("Digite o tamanho do vetor v: ");
    scanf("%i",&tv);
    int v[tv];
    if (tv>0 && tv<=20){
        printf("\n");
        for (int i = 0; i <= tv-1; i++){
            printf ("Digite o %i valor de v: ",i+1);
            scanf ("%i",&v[i]);
        }
        printf("\n");       
    }else{
        puts("Error.");
    }

    puts("Digite um numero n e uma posicao p:");
    scanf("%i %i",&n,&p);
    int aux[tv];

    for (int i = p+1; i <= tv-1; i++){
        aux[i]=v[i-1];
    }
    for (int i = p+1; i <= tv-1; i++){
        v[i]=aux[i];
    }
    v[p]=n;

    if (tv>0 && tv<=20 && p<=tv){
        printf("\n");
        for (int i = 0; i <= tv-1; i++){
            printf ("O %i valor de v: %i\n",i+1,v[i]);
        }        
    }else{
        puts("Error.");
    } 
}