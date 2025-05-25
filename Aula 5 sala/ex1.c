/*Programa para calcular a quantidade de cupons ganhos após uma compra*/
#include<stdio.h>
int main (){
    float cupons, gasto;
    printf("Insira o valor gasto pelo cliente: ");
    scanf("%f", &gasto);
    cupons = (gasto/20);
    cupons = (int)cupons;
    printf("Numero de cupons: %f", cupons);
    return 0;
}
