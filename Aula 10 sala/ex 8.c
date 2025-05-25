//Programa que le 5 entradas e apresenta a maior, a menor, a soma e a media usando for
#include<stdio.h>
int main(){
    float maior, menor, num,soma;
    for(int i=0;i<5;i++){
        printf("Insira o %do numero: ", i+1);
        scanf("%f",&num);
        if(num<menor || i==0){
            menor = num;
        }else{}
        if(num>maior || i==0){
            maior = num;
        }else{}
        soma = soma+num;
    }
    printf("Maior: %f\nMenor: %f\nSoma: %f\nMedia: %f", maior, menor, soma, soma/5);
    return 0;
}
