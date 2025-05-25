/* Programa para calcular se um aluno foi aprovado ou não*/
#include<stdio.h>
int main (){
    float nota1, nota2, media;
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;
    if (media>=5){
        printf("O aluno foi aprovado com a seguinte media final: %.2f", media);
    }else {
        printf("O aluno foi reprovado com a seguinte media final: %.2f", media);
    }
    return 0;
}
