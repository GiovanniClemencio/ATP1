//programa que lê 3 valores inteiros e os apresenta de forma crescente
#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);
    if (num1>num2 && num2>num3){
        printf("Ordem crescente: %d  %d  %d", num3, num2, num1);
    }else{
        if(num1>num3 && num3>num2){
            printf("Ordem crescente: %d  %d  %d", num2, num3, num1);
        }else{
            if(num2>num1 && num1>num3){
                printf("Ordem crescente: %d  %d  %d", num3, num1, num2);
            }else{
                if(num2>num3 && num3>num1){
                    printf("Ordem crescente: %d  %d  %d", num1, num3, num2);
                }else{
                    if(num3>num2 && num2>num1){
                        printf("Ordem crescente: %d  %d  %d", num1, num2, num3);
                    }else{
                        if(num3>num1 && num1>num2){
                            printf("Ordem crescente: %d  %d  %d", num2, num1, num3);
                        }else{
                            printf("Algum dos numeros (ou todos) sao iguais");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
