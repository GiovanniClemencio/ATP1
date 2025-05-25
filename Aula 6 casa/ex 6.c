/*Programa para calcular um salário após um reajuste*/
#include<stdio.h>
int main(){
    float sal;
    printf("Insira o salario do funcionario: ");
    scanf("%f", &sal);
    if (sal<1000){
        printf("Novo salario: %.2f", sal*1.2);
    }else {
        if (sal<=2000){
            printf("Novo salario: %.2f", sal*1.1);
        }else{
            printf("Nao ha mudanca no salario!");
        }
    }
    return 0;
}
