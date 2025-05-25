/* Programa para calcular a area de um triangulo*/
#include<stdio.h>
int main(){
    float base, altura, area;
    printf("Informe o tamanho da base: ");
    scanf("%f",&base);
    printf("Informe a altura do triangulo: ");
    scanf("%f",&altura);
    area = (base*altura)/2;
    printf("A area do triangulo é: %f", area);
    return 0;
}
