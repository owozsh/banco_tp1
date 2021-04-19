#include <stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3],soma=0;

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf ("a[%i][%i]: ",i,j);
            scanf ("%i",&a[i][j]);
        }
    }
    puts("\n");
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf ("b[%i][%i]: ",i,j);
            scanf ("%i",&b[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf("%i ",a[i][j]);
        }
        printf("\n");
    }
    puts("\n");
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf("%i ",b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
                for (int k = 0; k <= 2; k++){
                    soma=a[i][k]*b[k][j]+soma;
                }
                c[i][j]=soma;
                soma=0;
        }
    }
    
    puts("matriz c:\n");
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf("%i ",c[i][j]);
        }
        printf("\n");
    }
}