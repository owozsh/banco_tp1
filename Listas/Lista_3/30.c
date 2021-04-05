#include<stdio.h>

int main(){
    int n,n1;
    printf("digite os lados do retangulo:\n");
    scanf("%i %i",&n,&n1);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}