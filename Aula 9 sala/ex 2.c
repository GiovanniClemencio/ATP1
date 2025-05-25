// programa que le quantos numeros serao inseridos, le cada um deles e apresenta a soma e a media
#include<stdio.h>
int main(){
    int cont=0, ent;
    float num, soma=0;
    printf("Quantos numeros serao inseridos: ");
    scanf("%d", &ent);
    while(cont<ent){
        printf("Insira o %do numero: ", cont+1);
        scanf("%f", &num);
        soma = soma + num;
        cont++;
    }
    printf("Soma: %f\nMedia: %f", soma, soma/ent);
    return 0;
}
