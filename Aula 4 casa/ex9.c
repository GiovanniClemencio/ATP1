/*Programa para calcular um sal�rio ap�s aumento de 25%*/
#include<stdio.h>
int main(){
    float salario;
    printf("Insira o sal�rio antes do aumento: ");
    scanf("%f",&salario);
    printf("Salario apos aumento: %f", salario*1.25);
    return 0;
}
