#include<stdio.h>

int main(){
    int n,i=1;

    do{
        printf("\nDigite um valor:");
        scanf("%i",&n);

        if(n==0){
            i=0;
        }else if(n-(sqrt(n)*sqrt(n))==0){
            printf("A raiz quadrada de %i e %.2f.",n,sqrt(n));
        }else{
            printf("erro");
        }

    }while (i!=0);

}