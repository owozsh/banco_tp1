#include <stdio.h>

int main(){
    float x1,x2,y1,y2,d;

    printf("Digite as coordenadas do P1(x1,y1):\n");
    scanf("%f %f",&x1,&y1);

    printf("Digite as coordenadas do P2(x2,y2):\n");
    scanf("%f %f",&x2,&y2);

    d= sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    printf ("A distancia entre os pontos e de %f",d);




}
