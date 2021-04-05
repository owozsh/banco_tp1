#include <stdio.h>

int main(){
    int n,aux,inverso=0,resto;

    scanf("%i",&n);

    aux=n;

    if(n>1){
        while(aux>1){ 
            resto=aux%10;
            aux=aux/10;
            inverso = inverso*10 + resto;
        }
        if (n=inverso){
            printf("capicua");
        }else{
            printf("Nao e capicua");
        }
    }else{
        printf("Erro");
    }
}