/*Programa para verificar se uma pessoa é menor de idade*/
#include<stdio.h>
int main(){
    int idade;
    printf("Insira a idade: ");
    scanf("%d", &idade);
    if (idade>= 18){
        printf("MAIOR DE IDADE");
    }else {
        printf("Menor de idade");
    }
    return 0;
}
