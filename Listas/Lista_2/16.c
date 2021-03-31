#include <stdio.h>

int main(){
    float n;
    
    printf("Digite a nota:");
    scanf("%f",&n);

    if (n>=9){
        printf("Conceito A");
    } else if (n<=8.9 && n>=7){
        printf("Conceito B");
    } else if (n<=6.9 && n>5){
        printf("Conceito C");
    } else if (n<5){
        printf("Conceito D");
    } else {
        printf("Nota invalida");
    }
    

}
