/*Programa para calcular o volume de um cilindro */
#include<stdio.h>
int main (){
    float altura, raio_base;
    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Informe raio do cilindro: ");
    scanf("%f", &raio_base);
    printf("Volume do cilindro: %f", 3.141592*raio_base*raio_base*altura);
    return 0;
}
