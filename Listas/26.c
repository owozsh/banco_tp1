#include <stdio.h>

int main(){
    int a[3][3],b[3][3],k=0,l=0;

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            printf ("a[%i][%i]: ",i,j);
            scanf ("%i",&a[i][j]);
        }
    }
    puts("\n");

    
    for (int i = 2; i >= 0; i--){
        l=0;
        for (int j = 2; j >= 0; j--){            
            b[k][l]=a[i][j];
            l++;
        }
        k++;
    }

    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
                printf("%i ",b[i][j]);
        }
        printf("\n");
    }
        
}