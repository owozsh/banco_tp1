#include <stdio.h>

int main(){
    float x1,x2,x3,y1,y2,y3,p,P,A,l1,l2,l3;

    printf("Digite as coordenadas do P1(x1,y1):\n");
    scanf("%f %f",&x1,&y1);
    printf("Digite as coordenadas do P2(x2,y2):\n");
    scanf("%f %f",&x2,&y2);
    printf("Digite as coordenadas do P2(x3,y3):\n");
    scanf("%f %f",&x3,&y3);

    l1= sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2= sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l3= sqrt(pow(x3-x1,2)+pow(y3-y1,2));

    if (l1<l2+l3 && l2<l1+l3 && l3<l1+l2){
    P=l1+l2+l3;
    p=P/2;
    
    A=sqrt(p*(p-l1)*(p-l2)*(p-l3));

    printf ("A area do triangulo e de %.2f e o perimetro e de %f.",A,P);
    }else{
        printf("Os pontos dados nao forma triangulo.");
    }



}
