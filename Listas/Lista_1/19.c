#include <stdio.h>

int main(){
    int x,u,d,c,s;

    printf("Digite um número de 3 digitos maior que 99:");
    scanf("%i",&x);

    c=x/100;
    d=(x-(c*100))/10;
    u=x-(c*100)-(d*10);
    s=c+d+u;

    printf("A soma dos algarismos e : %i",s);


}
