#include <stdio.h>

int main(){
    int a[2][3],b[2][3],k;

    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 2; j++){
            printf ("a[%i][%i]: ",i,j);
            scanf ("%i",&a[i][j]);
        }
    }

    puts("Digite o valor de k: ");
    scanf("%i",&k);

    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 2; j++){
            b[i][j]=a[i][j]*k;
        }
    }
    
    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 2; j++){
            printf("%i ",b[i][j]);
        }
        printf("\n");
    }
}