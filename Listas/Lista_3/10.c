#include<stdio.h>

int main(){
    int n,m,v=0;
    printf("Digite o valor de n diferente de 0:");
    scanf("%i",&n);
    printf("\nDigite o valor de m maior que n:");
    scanf("%i",&m);

    if (n>0 && m>n){
        for (int i=n; i <= m; i++)
        {
            v=v+n;
            n++;
        }
        printf("A soma e de %i.",v);
    }else{
        printf("Valores invalidos.");
    }

}