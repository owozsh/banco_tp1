#include <stdio.h>

int main(){
    int m[4][4],soma=0,t3=0;

    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            printf ("a[%i][%i]: ",i,j);
            scanf ("%i",&m[i][j]);
        }
    }
    puts("\n");
    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            if (i==j){
                printf("   ");
            }else{
                printf("%i ",m[i][j]);
            }
            
        }
        printf("\n");
    }
    puts("\n");
    for (int i = 0; i <= 3; i++){
        t3=0;
        for (int j = 0; j <= 3; j++){
            if (t3==1){
                printf("%i ",m[i][j]);
                soma+=m[i][j];
            }else{
                printf("  ");
            }
            if (i==j){
                t3=1;
            }
        }
        printf("\n");
    }
     printf("A soma dos valores ai e :%i",soma);
}