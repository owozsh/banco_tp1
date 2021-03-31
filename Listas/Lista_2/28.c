#include <stdio.h>

int main(){
    int n,m,k,q;

    printf("Digite o valor de n,m e k: \n");
    scanf("%i %i %i",&n,&m,&k);

    if ((m-n)>k){
        q=(m-n)/k;
        printf("O numero de valores multiplos de q compreendidos entre m e n %i.",q);
    }else{
        printf("Não ha numeros neste conjunto.");
    }

}
