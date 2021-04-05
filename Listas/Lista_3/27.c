#include<stdio.h>

int main(){
    int n;
    float h=0;
    printf("Digite o valor de n: ");
    scanf("%i",&n);

    if(n<=0){
        printf("error");
    }else {
        for (int i = 1; i <= n; i=i+2){
        h=h-(1.0/i);
        }
        printf("O valor de h e %.2f.",h);
    }
}