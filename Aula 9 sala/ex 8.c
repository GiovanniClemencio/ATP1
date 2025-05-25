//Programa para ler o um numero equivalente ao numero de medias e caso a media esteja fora do intervalo de 0 a 10 esperar uma entrada válida
#include<stdio.h>
int main(){
    int alunos, cont=0;
    float media;
    printf("Insira o numero de alunos: ");
    scanf("%d", &alunos);
    while(alunos!=0){
        printf("Insira a nota do %do aluno: ",cont+1);
        scanf("%f", &media);
        while(media>10 || media<0){
            printf("Entrada invalida,digite novamente\nInsira a nota do %do aluno: ", cont+1);
            scanf("%f", &media);
        }
        alunos= alunos-1;
        cont++;
    }
    return 0;
}
