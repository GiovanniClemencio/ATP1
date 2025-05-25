//Programa que le o numero de valores que o usuario quer entrar e dps rece eles e apresenta sua soma e sua media usando do while
#include<stdio.h>
int main(){
    int entradas, cont=0;
    float soma, num;
    printf("Informe quantos numeros ira digitar: ");
    scanf("%d", &entradas);
    do{
        printf("Digite o %do numero: ", cont+1);
        scanf("%f", &num);
        soma = soma+num;
        cont++;
    }while(cont<entradas);
    printf("Soma das entradas: %f\n", soma);
    printf("Media das entradas: %f", soma/entradas);
    return 0;
}
