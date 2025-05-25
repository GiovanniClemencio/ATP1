/* Programa para verificar se a entrada de duas notas são validas e, caso não forem informar isso
e caso forem, calcular a media*/
#include<stdio.h>
int main(){
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    if(nota1<0){
        printf("Entrada nao valida");
        return 1;
    }else{
        if(nota1>10){
            printf("Entrada nao valida");
            return 2;
        }else{
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            if(nota2<0){
                printf("Entrada nao valida");
                return 3;
            }else{
                if(nota2>10){
                    printf("Entrada nao valida");
                    return 4;
                }else{
                    media = (nota1+nota2)/2;
                    printf("Media do aluno: %f", media);
                }
            }
        }
    }
    return 0;
}
