\/*Programa para calcular a soma dos n primeiros n�meros inteiros*/
#include<stdio.h>
int main(){
    int n, soma;
    printf("Insira ate qual numero inteiro quer somar: ");
    scanf("%d",&n);
    soma = n*(n+1)/2;
    printf("A soma dos primeiros %d numeros inteiros � de: %d", n,soma);
    return 0;
}
