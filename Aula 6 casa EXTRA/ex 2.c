//Programa para distingua qual é o maior numero entre dois inteiros e diga a diferença entre eles
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d",&num1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d",&num2);
    if (num1>num2){
        printf("Maior numero: %d\nMenor numero: %d\n", num1,num2);
        printf("Diferenca entre eles: %d", num1-num2);
    }else{
        printf("Maior numero: %d\nMenor numero: %d\n", num2,num1);
        printf("Diferenca entre eles: %d", num2-num1);
    }
    return 0;
}
