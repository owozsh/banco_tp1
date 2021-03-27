#include <stdio.h>

int main(){
    int h1,m1,s1,t1,h2,m2,s2,t2,h,m,s,t;

    printf("Digite a hora 1 em h/m/s:\n");
    scanf("%i %i %i",&h1,&m1,&s1);
    t1=h1*3600+m1*60+s1;

    printf("\nDigite a hora 2 em h/m/s maior que a primeira:\n");
    scanf("%i %i %i",&h2,&m2,&s2);
    t2=h2*3600+m2*60+s2;

    t=t2-t1;

    h=t/3600;
    m=(t-h*3600)/60;
    s=t-h*3600-m*60;

    printf ("\n%i %i %i",h,m,s);

}
