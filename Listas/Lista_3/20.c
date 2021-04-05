#include<stdio.h>

int main(){
    int n,i=0,s=0,maior,menor;
    for (;;){
        printf("Digite um numero inteiro (0 para terminar): ");
        scanf("%i",&n);
        if(n<=0){
            break;
        } if (i==0){
            maior=n;
            menor=n;
        }else {
            if(n>maior){
                maior=n;
            }
            if(n<menor){
                menor=n;
            }
        }
        i=i+1;
        s=s+n;
    }
    float m=s/i;
    printf("A media e %.2f, e o maior %i e o menor %i.",m,maior,menor);
}