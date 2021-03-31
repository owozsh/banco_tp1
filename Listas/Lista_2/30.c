#include <stdio.h>

int main(){
    int d,m,a,td;

    printf("Digite os valores de D M A:\n");
    scanf("%i %i %i",&d,&m,&a);

    printf("%i/%i/%i\n",d,m,a);

    if (m>=1 && m<=12){
        if (m==1){
            td=d;
        }
        if (m==2){
            td=d+31;
        }
        if (m==3){
            td=d+31+28;
        }
        if (m==4){
            td=d+31+28+31;
        }
        if (m==5){
            td=d+31+28+31+30;
        }
        if (m==6){
            td=d+31+28+31+30+31;
        }
        if (m==7){
            td=d+31+28+31+30+31+30;
        }
        if (m==8){
            td=d+31+28+31+30+31+30+31;
        }
        if (m==9){
            td=d+31+28+31+30+31+30+31+31;
        }
        if (m==10){
            td=d+31+28+31+30+31+30+31+31+30;
        }
        if (m==11){
            td=d+31+28+31+30+31+30+31+31+30+31;
        }
        if (m==12){
            td=d+31+28+31+30+31+30+31+31+30+31+30;
        }
    }
    
    printf("A data dada corresponde ao %i dia do ano.",td);
}