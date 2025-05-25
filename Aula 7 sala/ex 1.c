//Programa para verificar se um numero inteiro é divisível por 3 ou por 5
#include<stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num%3==0 && num%5==0){
        printf("O numero digitado e divisivel por 3 e por 5");
    }else{
        printf("O numero nao e divisivel por 3 e por 5");
    }
    return 0;
}
