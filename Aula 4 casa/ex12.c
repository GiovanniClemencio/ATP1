/*Programa para calcular o gasto elétrico de um equipamento*/
#include<stdio.h>
int main(){
    float potencia, horasPorDia, custokwh, wattsdia, wattsmes, wattsano;
    printf("Insira a potencia em Watts do equipamento: ");
    scanf("%f",&potencia);
    printf("Insira a quantidade de horas estimada de uso do equipamento por dia: ");
    scanf("%f",&horasPorDia);
    printf("Insira o custo do KwH: ");
    scanf("%f",&custokwh);
    wattsdia = potencia*horasPorDia;
    wattsmes = wattsdia*30;
    wattsano = wattsmes*12;
    printf("Watts por dia: %f \n", wattsdia);
    printf("Watts por mes: %f \n", wattsmes);
    printf("Watts por ano: %f \n", wattsano);
    printf("KwH por dia: %f \n", wattsdia/1000);
    printf("KwH por mes: %f \n", wattsmes/1000);
    printf("KwH por ano: %f \n", wattsano/1000);
    printf("Gasto mensal do equipamento: %f", wattsmes/1000*custokwh);
    return 0;
}
