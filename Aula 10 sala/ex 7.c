//Programa que receque quantas entradas terão e então após ler elas apresenta a soma e a media usando for
#include<stdio.h>
int main(){
    int entradas, num, soma=0;
    printf("Quantos numeros serao digitados: ");
    scanf("%d",&entradas);
    for(int i=0;i<entradas;i++){
        printf("Digite o %do numero: ",i+1);
        scanf("%d",&num);
        soma= soma+num;
    }
    printf("Soma: %d\nMedia: %f\n", soma, (float)soma/entradas);
    return 0;
}
