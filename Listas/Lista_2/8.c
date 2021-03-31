#include <stdio.h>

int main(){
    float n;

    printf("Digite o numero a ser processado:");
    scanf ("%f",&n);

    if (n==5){
        printf("O numero dado e igual a 5");
    }else if (n==200){
        printf("O numero dado e igual a 200");
    }else if (n==400){
        printf("O numero dado e igual a 400");
    }else if(n>=500 && n<=100){
        printf("O numero dado esta entre 500 e 1000.");
    }else {
        printf("O numero não satisfaz nenhuma condicao");
    }


}
