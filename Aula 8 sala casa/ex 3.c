// programa para ler dois numeros e um operador e apresentar a operaçao
#include<stdio.h>
int main(){
    float num1, num2;
    char operad;
    printf("Digite o primeiro numero da operacao: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero da operacao: ");
    scanf("%f", &num2);
    fflush(stdin);
    printf("Digite o operador: ");
    scanf("%c", &operad);
    switch(operad){
        case '+':
            printf("%f + %f = %f", num1, num2, num1+num2);
            break;
        case '-':
            printf("%f - %f = %f", num1, num2, num1-num2);
            break;
        case '*':
            printf("%f * %f = %f", num1, num2, num1*num2);
            break;
        case '/':
            printf("%f / %f = %f", num1, num2, num1/num2);
            break;
        default:
            printf("Operando invalido--(Operandos validos: +,-,*,/)");
            break;
    }
    return 0;
}
