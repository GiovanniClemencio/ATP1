//Programa para ler um salario e uma presta��o de um empr�stimo e dizer se a presta��o � menor ou igual 20% do salario
#include<stdio.h>
int main(){
    float sal, prest;
    printf("Insira o sal�rio: ");
    scanf("%f", &sal);
    printf("Insira o valor da prestacao: ");
    scanf("%f", &prest);
    sal = sal*0.2;
    if(sal>=prest){
        printf("Emprestimo concedido");
    }else{
        printf("Emprestimo nao concedido");
    }
    return 0;
}
