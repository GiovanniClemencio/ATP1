//Programa que verifica se um ano foi , é ou será bissexto
#include<stdio.h>
int main(){
    int ano;
    printf("Digite o ano a ser analisado: ");
    scanf("%d", &ano);
    if(ano%400==0 || ((ano%4==0)&& !(ano%100==0))){
        printf("ANO BISSEXTO");
    }else{
        printf("ANO NAO BISSEXTO");
    }
    return 0;
}
