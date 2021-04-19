#include <stdio.h>

int main(){
    int tv,tw,contador=0;
    
    puts("Digite o tamanho do vetor v: ");
    scanf("%i",&tv);
    puts("Digite o tamanho do vetor w: ");
    scanf("%i",&tw);
    int v[tv],w[tw];

    if ((tv>0 && tv<=10)&&(tw>0 && tv<=10)){
        printf("\n");
        for (int i = 0; i <= tv-1; i++){
            printf ("Digite o %i valor de v: ",i+1);
            scanf ("%i",&v[i]);
        }
        printf("\n");
        for (int i = 0; i <= tw-1; i++){
            printf ("Digite o %i valor de w: ",i+1);
            scanf ("%i",&w[i]);
        }   

        for (int i = 0; i <= tv; i++){
            for (int j = 0; j <= tw; j++){
                if (v[i]==w[j]){
                    contador++;
                }
            }
        }
        int k[contador];
        contador=0;
        for (int i = 0; i <= tv; i++){
            for (int j = 0; j <= tw; j++){
                if (v[i]==w[j]){
                    k[contador]=v[i];
                    contador++;
                }
            }
        }

        printf("\n");
        for (int i = 0; i <= contador-1; i++){
            printf ("O %i valor de k: %i\n",i+1,k[i]);
        }        
    }else{
        puts("Error.");
    }
        
}