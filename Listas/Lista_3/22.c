#include<stdio.h>

int main(){
    int n,k,r,termo;

    printf("Digite o termo inicial n, a quantidade de termos k e a razao r:\n");
    scanf("%i %i %i",&n,&k,&r);
    termo=n;
    for (int i=1;i<=k;i++){
        printf("%i ",termo);
        termo*=r;
    }   
}