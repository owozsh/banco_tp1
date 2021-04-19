#include <stdio.h>

int main(){
    int m[4][4],produto=1,t3=0;

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
            if (i==j){
                t3=1;
            }
            if (t3==0){
                printf("%i ",m[i][j]);
                produto=produto*m[i][j];
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
     printf("A producao dos valores ai e :%i",produto);
}