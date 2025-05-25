// programa que realiza uma operaçao baseado na entrada de dois numeros e a seleção de um menu:
#include<stdio.h>
int main(){
    float num1, num2;
    int menu;
    printf("Digite o primeiro numero da operacao: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero da operacao: ");
    scanf("%f", &num2);
    printf("MENU\n1-Somar os numeros\n2-Subtrair os numeros\n3-Multiplicar os numeros\n4-Dividir os numeros\n5-Sair\nDigite uma opcao: ");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            printf("%f + %f = %f", num1, num2, num1+num2);
            break;
        case 2:
            printf("%f - %f = %f", num1, num2, num1-num2);
            break;
        case 3:
            printf("%f * %f = %f", num1, num2, num1*num2);
            break;
        case 4:
            if (num2==0){
                printf("ERRO--(NAO DIVIDIRAS POR ZERO)");
            }else{
                printf("%f / %f = %f", num1, num2, num1/num2);
            }
            break;
        case 5:
            printf("Fechando...");
            break;
        default:
            printf("ERRO--(SELECAO DO MENU INVALIDA)");
            break;
    }
}
