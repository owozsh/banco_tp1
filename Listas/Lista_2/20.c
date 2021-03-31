#include <stdio.h>

int main(){
    float p1,p2,t,pf,m;
    int faltas;
    //bool aprovado;

    printf("Digite os valores das notas das provas 1,2 e trabalho:\n");
    scanf("%f %f %f",&p1,&p2,&t);

    m=(p1*3+p2*5+t*2)/(3+5+2);

    printf("Digite as faltas:");
    scanf("%i",&faltas);

    if(faltas<=15){
        if (m>=7){
        //aprovado = true;
        printf("aprovado direto.");
        }else if (m<4){
            //aprovado=false;
            printf("Reprovado sem salvação");
        }else{
            printf("Digite a nota da prova final:");
            scanf("%f",&pf);
            if(pf>=7){
               //aprovado=true;
                printf("Aprovado");
            }
        }
        
    } else {
        //aprovado=false;
        printf("Reprovado por falta.");
    }

}
