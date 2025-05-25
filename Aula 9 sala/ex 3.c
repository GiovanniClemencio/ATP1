//Programa que le 5 valores do usuario e apresenta o maior
#include<stdio.h>
int main(){
    int cont=0;
    float num, maior=0;
    while(cont<5){
        printf("Insira o %do digito: ", cont+1);
        scanf("%f", &num);
        if(num>maior || cont==0){
            maior = num;
        }
        cont++;
    }
    printf("O maior numero inserido foi: %f", maior);
    return 0;
}
