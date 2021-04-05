#include <stdio.h>

int main(){
    int n,soma;
    printf("Digite o valor a garaiar:");
    scanf("%i",&n);
    putchar("\n");
    
    for (int i = 2; i <= n; i++){
        soma=0;
        for (int j = 1; j < i; j++){
            if (i%j==0){
                soma=soma+j;
            }
        }
        if (soma==i){
            printf (" %i ",i);
        }
    }
}