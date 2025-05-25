/*Programa para calcular o custo de uma viagem baseado na quantidade gasta  de combustivel*/
#include<stdio.h>
int main (){
    float consumo, preco, distancia;
    printf("Insira o consumo do carro: ");
    scanf("%f", &consumo);
    printf("Insira o preco da gasolina: ");
    scanf("%f", &preco);
    printf("Insira a distancia a ser percorrida: ");
    scanf("%f", &distancia);
    printf("O custo da viagem: %f", distancia/consumo*preco);
    return 0;
}
