/*Programa para calcular o desconto de um produto*/
#include<stdio.h>
int main (){
    float valor;
    printf("Insira o valor do produto antes do desconto: ");
    scanf("%f",&valor);
    printf("Valor do produto com o desconto: %f", valor*(1-0.12));
    return 0;
}
