#include <stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3];

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf ("a[%i][%i]: ",i,j);
            scanf ("%i",&a[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf ("b[%i][%i]: ",i,j);
            scanf ("%i",&b[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            c[i][j]=b[i][j]+a[i][j];
        }
    }
    
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf("%i ",c[i][j]);
        }
        printf("\n");
    }
}