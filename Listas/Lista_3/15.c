#include<stdio.h>

int main(){
    int n,i=1,j=0;

    do{
        printf("Digite um numero:");
        scanf("%i",&n);
        if(n%2==0 && n!=0){
            j=j+1;
        }
        if(n==0){
            i=0;
        }
    }while (i!=0);

    printf("O numero de elementos pares e %i.",j);

}