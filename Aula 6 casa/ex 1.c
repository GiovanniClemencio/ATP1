/*Programa para verificar se o usu�rio � maior de idade ou n�o*/
#include<stdio.h>
int main (){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade>=18){
        printf("Maior de idade");
    }else {
        printf("Menor de idade");
    }
    return 0;
}
