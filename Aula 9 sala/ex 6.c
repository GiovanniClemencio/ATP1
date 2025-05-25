//Programa para ler entradas de numeros inteiros e separalas entre pares e impares até o usuario escolher a entreada 0
#include<stdio.h>
int main(){
    int entr=10, cont=0, par=0, impar=0;
    while(entr!=0){
        printf("Insira o %do numero: ", cont+1);
        scanf("%d", &entr);
        if(entr%2==0){
            par = par+1;
        }else{
            impar = impar+1;
        }
        cont++;
    }
    printf("Pares digitados: %d\nImpares digitados: %d", par, impar);
    return 0;
}
