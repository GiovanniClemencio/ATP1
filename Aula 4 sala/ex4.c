/*Programa para calcular o �ndice de massa corporal de um indiv�duo*/
#include<stdio.h>
int main(){
    float altura, peso, imc;
    printf("Informe a altura do individuo: ");
    scanf("%f",&altura);
    printf("Informe o peso de individuo: ");
    scanf("%f",&peso);
    imc = peso/(altura*altura);
    printf("O imc do individuo: %f", imc);
    return 0;
}
