/*Programa para converter reais em dolares*/
#include<stdio.h>]
int main(){
    float reais, cotacao;
    printf("Insira a quantia em reais: ");
    scanf("%f",&reais);
    printf("Insira a cotação do dolar: ");
    scanf("%f",&cotacao);
    printf("Valor em dolares: %f", reais/cotacao);
    return 0;
}
