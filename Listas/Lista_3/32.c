#include<stdio.h>

int main(){
    int n,s=0;
    float nota,soma=0,soma1=0,media,media1;

    for (int i = 1; i <= 5; i++){
        printf("\nDigite o numero n de alunos da turma:");
        scanf("%i",&n);
        soma=0;
        media=0;
        s=0;
        for (int j = 1; j <= n; j++){
            printf("\nDigite a nota do %i aluno da %i turma: ",j,i);
            scanf("%f",&nota);
            if(nota>=0){
                soma=soma+nota;
                if(nota>=7){
                    s=s+1;
                }
            }
        }
        printf("\nO numero de alunos com nota boa na turma %i e %i.",i,s);
        media=soma/n;
        printf("\nA media da turma %i e %f.",i,media);
        soma1=soma1+media;
    }
    media1=soma1/5;
    printf("\nA media da escola e %f.",media1);
    
}