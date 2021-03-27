#include <stdio.h>

int main(){
    float a,b,c;

    printf ("Digite os valores de A,B,C:\n");
    scanf("%f %f %f",&a,&b,&c);

    if (a>b && a>c){
        printf ("%f e o maior valor",a);
    }
    if (b>a && b>c){
        printf ("%f e o maior valor",b);
    }
    if (c>a && c>b){
        printf ("%f e o maior valor",c);
    }
    printf("\n");
    if (a<b && a<c){
        printf ("%f e o menor valor",a);
    }
    if (b<a && b<c){
        printf ("%f e o menor valor",b);
    }
    if (c<a && c<b){
        printf ("%f e o maior valor",c);
    }

}

