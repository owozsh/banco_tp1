#include <stdio.h>

int main(){
    float m,n1,n2,n3,p1,p2,p3;

    printf ("Digite as notas e seus pesos respectivamente(n1 e p1):\n");
    scanf ("%f %f %f %f %f %f",&n1,&p1,&n2,&p2,&n3,&p3);
    m = (n1*p1 + p2*n2 + n3*p3)/(n1+n2+n3);
    printf("A media das notas e %.2f",m);
}
