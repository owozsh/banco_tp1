#include <stdio.h>

int main(){
    int v[10],n1,n2;

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
    }
    printf("Digite os valores de n1 e n2:\n");
    scanf("%i %i",&n1,&n2);

    if (n1>n2){
        puts("eorr.");
    }else{
        puts("Valores de v[i] compreendidos entre n1 e n2:");
        for (int i = 0; i <= 9; i++){
            if (v[i]>=n1 && v[i]<=n2){
                printf (" %i",v[i]);
            }
        }
    }
    
}