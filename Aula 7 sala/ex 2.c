//programa para verificar se um numero inteiro é divisível por 3 ou 5 mas não pelos dois ao mesmo tempo
#include<stdio.h>
int main(){
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    if ((num%3==0 || num%5==0) && num%15!=0){
        printf("O numero e divisivel por 3 ou por 5");
    }else{
        if(num%3==0 && num%5==0){
            printf("O numero e, simultaneamente, divisivel por 3 e 5");
        }else{
            printf("O numero nao e divisivel por 3 ou por 5");
        }
    }
    return 0;
}
