/*Programa para calcular gastos com um encanador*/
#include<stdio.h>
int main(){
    int dias;
    printf("Quantidade de dias de trabalho do encanador: ");
    scanf("%d", &dias);
    printf("Valor bruto gasto: %d\n", dias*30);
    printf("Valor descontado pelo imposto de randa: %f\n", (dias*30)*0.08);
    printf("Valor liquido gasto: %f", (dias*30)-((dias*30)*0.08));
    return 0;
}
