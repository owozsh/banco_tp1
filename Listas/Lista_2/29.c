#include <stdio.h>

int main(){
    int d,m,a;

    printf("Digite os valores de D M A:\n");
    scanf("%i %i %i",&d,&m,&a);

    printf("%i/%i/%i\n",d,m,a);

    if (m>=1 && m<=12){
        if (m=2){
            if (d>=1 && d<=28)
            {
                printf("A dada inserida e valida");
            }else{
                printf("A dada inserida nao e valida.");
            }
        }else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            if (d>=1 && d<=31)
            {
                printf("A dada inserida e valida");
            }else{
                printf("A dada inserida nao e valida.");
            }
        }else{
            if (d>=1 && d<=30)
            {
                printf("A dada inserida e valida");
            }else{
                printf("A dada inserida nao e valida.");
            }
        }  
    }else{
        printf("A data inserida nao e valida");
    }
}
