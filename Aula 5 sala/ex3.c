/*Programa para calcular o ganho de 3 amigos na loteria*/
#include<stdio.h>
int main(){
    float ap1, ap2, ap3, premiot,porcentagem1, porcentagem2, porcentagem3;
    printf("Insira quanto o primeiro contribuiu: ");
    scanf("%f", &ap1);
    printf("Insira quanto o segundo contribuiu: ");
    scanf("%f", &ap2);
    printf("Insira quanto o terceiro contribuiu: ");
    scanf("%f", &ap3);
    printf("Insira premio total: ");
    scanf("%f", &premiot);
    porcentagem1 = ((ap1*100)/(ap1+ap2+ap3))/100;
    porcentagem2 = ((ap2*100)/(ap1+ap2+ap3))/100;
    porcentagem3 = ((ap3*100)/(ap1+ap2+ap3))/100;
    printf("O primeiro ganhador recebe: %f\n", porcentagem1*premiot);
    printf("O segundo ganhador recebe: %f\n", porcentagem2*premiot);
    printf("O terceiro ganhador recebe: %f\n", porcentagem3*premiot);
    return 0;
}
