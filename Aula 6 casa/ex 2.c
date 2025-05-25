/*Programa que identifica se um numero inteiro é positivo ou negativo*/
#include<stdio.h>
int main (){
    int num;
    printf("Insira o numero inteiro: ");
    scanf("%d", &num);
    if (num>0){
        printf("O numero e positivo");
    }else {
        if (num == 0){
         printf("O numero e zero");
        }else {
            printf("O numero e negativo");
        }
    }
    return 0;
}
