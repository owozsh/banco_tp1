#include <stdio.h>

int main(){
    int k,primo;
    printf("Digite o valor a garaiar:");
    scanf("%i",&k);
    putchar("\n");
    
    for (int i = 2; i <= k; i++){
        primo=0;
        for (int j = 2; j < i; j++){
            if (i%j==0){
                primo=1;
            }
        }
        if (primo==0){
            printf ("%i ",i);
        }
    }
    
}