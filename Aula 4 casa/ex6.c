/*Programa para dizer o antecessor e o sucessor de um numero inteiro*/
#include<stdio.h>
int main(){
    int numero;
    printf("Insira o numero para descobrir o antecessor e sucessor: ");
    scanf("%d",&numero);
    printf("O antecessor �: %d \n", numero-1);
    printf("O sucessor �: %d", numero+1);
    return 0;
}
