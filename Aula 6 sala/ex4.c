/*Programa para verificar se dois números são iguais*/
#include<stdio.h>
int main (){
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if (num1 == num2){
        printf("Os numeros sao iguais");
    }else {
        printf("Os numeros sao diferentes");
    }
    return 0;
}
