//Programa para ler um salario e uma prestação de um empréstimo e dizer se a prestação é menor ou igual 20% do salario
#include<stdio.h>
int main(){
    float sal, prest;
    printf("Insira o salário: ");
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
