/*Programa que verifica se um numero � positivo ou n�o*/
#include<stdio.h>
int main(){
    float num;
    printf("Insira o numero a ser verificado: ");
    scanf("%f", &num);
    if (num>0){
        printf("O numero e positivo");
    }else {
        if (num<0){
            printf("O numero e negativo");
        }else {
            printf("O numero e zero");
        }
    }
    return 0;
}
