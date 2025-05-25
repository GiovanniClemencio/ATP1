//Programa que tera 4 funções (uma para cada operação matemática básica) e recebe dois inteiros de entrada e retorna o resultado das operações
#include<stdio.h>
double soma(double n1,double n2){
    return n1+n2;
}

double subt(double n1,double n2){
    return n1-n2;
}

double multi(double n1,double n2){
    return n1*n2;
}

double divi(double n1,double n2){
    return n1/n2;
}

int main(){
    double e1,e2;
    printf("Digite o primeiro numero: ");
    scanf("%lf",&e1);
    printf("Digite o segundo numero: ");
    scanf("%lf",&e2);
    printf("Soma: %.2lf\nSubtracao: %.2lf\nMultiplicacao: %.2lf\nDivisao: %.2lf\n",soma(e1,e2),subt(e1,e2),multi(e1,e2),divi(e1,e2));
    return 0;
}
