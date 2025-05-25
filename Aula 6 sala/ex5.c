/*Programa para ordenar 2 numeros de forma crescente ou dizer que são iguais*/
#include<stdio.h>
int main(){
    float num1, num2;
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    if (num1==num2){
        printf("Os numeros sao iguais");
    }else {
        if (num1>num2){
            printf("%.2f , %.2f", num2, num1);
        }else {
            printf("%.2f , %.2f", num1, num2);
        }
    }
    return 0;
}
