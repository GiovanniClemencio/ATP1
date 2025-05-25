/*Programa para calcular um salário após aumento de 25%*/
#include<stdio.h>
int main(){
    float salario;
    printf("Insira o salário antes do aumento: ");
    scanf("%f",&salario);
    printf("Salario apos aumento: %f", salario*1.25);
    return 0;
}
