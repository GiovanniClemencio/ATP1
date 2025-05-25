//Programa que le 5 entradas e apresenta o maior, menor, soma e media doas entradas usando do while
#include<stdio.h>
int main(){
    int cont=0;
    float maior, menor, soma, num;
    do{
        printf("Digite o %do numero: ", cont+1);
        scanf("%f",&num);
        if(num<menor || cont==0){
            menor = num;
        }else{}
        if(num>maior || cont==0){
            maior = num;
        }else{}
        soma = soma + num;
        cont++;
    }while(cont<5);
    printf("Maior: %f\nMenor: %f\nSoma: %f\nMedia: %f", maior, menor, soma, soma/5);
    return 0;
}
