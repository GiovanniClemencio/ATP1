/*Programa para inverter a ordem dos digitos de um numero com 3 digitos*/
#include<stdio.h>
int main (){
    int numero, dezena, centena, unidade;
    printf("Insira um numero de 3 digitos: ");
    scanf("%d", &numero);
    centena = (numero/100);
    dezena = numero/10 - centena*10;
    unidade = numero - (centena*100+dezena*10);
    printf("Numero invertido: %d%d%d", unidade, dezena, centena);
    return 0;
}
