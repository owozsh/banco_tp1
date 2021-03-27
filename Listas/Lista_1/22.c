#include <stdio.h>

int main(){
    int x,y,u,d,c,m;

    printf("Digite um número de 4 digitos:");
    scanf("%i",&x);

    m=x/1000;
    c=(x-(m*1000))/100;
    d=(x-(m*1000)-(c*100))/10;
    u=x-(m*1000)-(c*100)-(d*10);

    y=u*1000+d*100+c*10+m;
    printf ("\nO reverso do numero dado e: %i",y);
}
