/*Programa para verificar a aprovação de um aluno*/
#include<stdio.h>
int main (){
    float nota1, nota2, media;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda: ");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;
    if (media>=5){
        printf("ALUNO APROVADO! Nota: %f", media);
    }else {
    printf("ALUNO REPROVADO! Nota: %f", media);
    }
    return 0;
}
