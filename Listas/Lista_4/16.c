#include <stdio.h>

int main(){
    int tv,n,p;
    
    puts("Digite o tamanho do vetor v: ");
    scanf("%i",&tv);
    int v[tv];
    puts("Digite um numero n e uma posicao p:");
    scanf("%i %i",&n,&p);
    if (tv>0 && tv<=20 && p<=tv){
        printf("\n");
        for (int i = 0; i <= tv-1; i++){
            printf ("Digite o %i valor de v: ",i+1);
            scanf ("%i",&v[i]);
        }
        printf("\n");

        //**for (int i = 0; i <= tv-1; i++){if (i>p && i<=p+n){v[i]=0;}}

        tv=tv-n;
        int aux[tv];
        for (int i = p+1; i <= tv-1; i++){
            aux[i]=v[i+n];
        }
        for (int i = p+1; i <= tv-1; i++){
            v[i]=aux[i];
        }        

        printf("\n");
        for (int i = 0; i <= tv-1; i++){
            printf ("O %i valor de v: %i\n",i+1,v[i]);
        }

    }else{
        puts("Error.");
    }
}