/*Programa para classificar um produto de acordo com seu preço*/
#include<stdio.h>
int main(){
    float preco;
    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    if (preco<100){
        printf("Produto BARATO");
    }else {
        if (preco<=500){
            printf("Produto NORMAL");
        }else{
            printf("Produto CARO");
        }
    }
    return 0;
}
