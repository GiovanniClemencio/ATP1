/*Programa para calcular a media aritimetica de 4 notas*/
#include<stdio.h>
int main(){
    float nota1, nota2, nota3, nota4, media;
    printf("Diga a primeira nota: ");
    scanf("%f",&nota1);
    printf("Diga a segunda nota: ");
    scanf("%f",&nota2);
    printf("Diga a terceira nota: ");
    scanf("%f",&nota3);
    printf("Diga a quarta nota: ");
    scanf("%f",&nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("Media: %f", media);
    return 0;
}
