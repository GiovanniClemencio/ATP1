//Programa que le 5 entradas e diz o maior, o menor, a soma e a media
#include<stdio.h>
int main(){
    int cont=0;
    float num, soma=0, maior=0, menor=0;
    while(cont<5){
        printf("Insira o %do numero: ", cont+1);
        scanf("%f", &num);
        if (num>maior || cont==0){
            maior = num;
        }
        if (num<menor || cont==0){
            menor = num;
        }
        soma = soma + num;
        cont++;
    }
    printf("Maior numero: %f\nMenor numero: %f\nSoma: %f\nMedia: %f",maior, menor,soma,soma/5);
    return 0;
}
