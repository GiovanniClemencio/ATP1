//Programa que le 5 entradas do usuario e apresenta a menor
#include<stdio.h>
int main(){
    int cont=0;
    float num, menor=0;
    while(cont<5){
        printf("Insira o %do numero: ", cont+1);
        scanf("%f", &num);
        if(num<menor || cont==0){
            menor = num;
        }
        cont++;
    }
    printf("O menor numero inserido foi: %f", menor);
    return 0;
}
