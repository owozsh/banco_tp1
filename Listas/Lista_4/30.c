#include <stdio.h>

int main(){
    int m[4][4];

    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            printf ("a[%i][%i]: ",i,j);
            scanf ("%i",&m[i][j]);
        }
        printf("\n");
    }
    puts("\n");
    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            if (i%2==0 && j%2==1){
                printf("%i ",m[i][j]);
            }
        }
        printf("\n");
    }
}