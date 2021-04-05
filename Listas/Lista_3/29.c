#include<stdio.h>

int main(){
    int n;
    printf("digite o lado do quadrado:");
    scanf("%i",&n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}