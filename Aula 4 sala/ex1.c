/*Programa para calcular m�dia*/
#include<stdio.h>
int main(){
    float nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("A media e: %f", (nota1+nota2)/2);
    return 0;
}
