#include <stdio.h>

int main(){
    int m[4][3],somalinha[4],somacoluna[3],soma=0;

    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 2; j++){
            printf ("a[%i][%i]: ",i,j);
            scanf ("%i",&m[i][j]);
        }
    }
    puts("\n");
    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 2; j++){
            printf("%i ",m[i][j]);
        }
        printf("\n");
    }
 
    for (int i = 0; i <= 3; i++){
        soma=0;
        for (int j = 0; j <= 2; j++){
            soma=m[i][j]+soma;
        }
        somalinha[i]=soma;
    }
    for (int j = 0; j <= 2; j++){
        soma=0;
        for (int i = 0; i <= 3; i++){
            soma=m[i][j]+soma;
        }
        somacoluna[j]=soma;
    }

    for (int i = 0; i <= 3; i++){
            printf("%i ",somalinha[i]);
    }
    printf("\n");
    for (int i = 0; i <= 2; i++){
            printf("%i ",somacoluna[i]);
    }
     printf("\n");
}