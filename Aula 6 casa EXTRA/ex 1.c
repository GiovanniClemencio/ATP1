//Programa para ler um num inteiro e ferificar se ele é par ou impar
#include<stdio.h>
int main (){
    float numero;
    int espelho;
    printf("Insira um numero inteiro: ");
    scanf("%f", &numero);
    espelho= numero;
    numero= (numero/2);
    espelho= (espelho/2);
    if (espelho == numero){
        printf("\nO numero e par");
    }else{
        printf("\nO numero e impar");
    }
    return 0;
}
