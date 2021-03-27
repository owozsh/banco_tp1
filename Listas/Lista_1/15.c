#include <stdio.h>

int main(){
    float a,a1,b,b1,c,c1;

    printf("Digite valores pras variaveis A,B,C respectivamente:\n");
    scanf("%f %f %f",&a,&b,&c);

    b1=a;
    c1=b;
    a1=c;

    a=a1;
    b=b1;
    c=c1;

    printf("As variaveis apos o rodizio a-%.2f,b-%.2f,c-%.2f",a,b,c);


}
