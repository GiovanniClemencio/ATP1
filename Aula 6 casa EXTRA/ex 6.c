// Programa que le dois numeros e um simbulo de operador das 4 operaçoes basicas e realiza o calculo
#include<stdio.h>
int main(){
    float num1, num2;
    char operador;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    fflush(stdin);
    printf("Digite a operacao: ");
    scanf("%c", &operador);
    if (operador == '+'){
        printf("%f + %f = %f", num1, num2, num1+num2);
    }else{
        if (operador == '-'){
            printf("%f - %f = %f", num1, num2, num1-num2);
        }else{
            if (operador == '/'){
                printf("%f / %f = %f", num1, num2, num1/num2);
            }else{
                printf("%f * %f = %f", num1, num2, num1*num2);
            }
        }
    }
    return 0;
}
