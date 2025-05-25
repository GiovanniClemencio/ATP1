/*Programa para calcular a media ponderada de duas notas com dois pesos*/
#include<stdio.h>
int main(){
    float nota1, nota2, peso1, peso2;
    printf("Informe a primeira nota: ");
    scanf("%f",&nota1);
    printf("Informe o peso da primeira nota: ");
    scanf("%f",&peso1);
    printf("Informe a segunda nota: ");
    scanf("%f",&nota2);
    printf("Informe o peso da segunda nota: ");
    scanf("%f",&peso2);
    printf("Media ponderada das notas: %f", (nota1*peso1+nota2*peso2)/(peso1+peso2));
    return 0;
}
