//Programa que recebe o numero de um funcionário, suas horas trabalhadas e o quanto recebe por hora e imprime seu numero e seu salario
#include<stdio.h>
int main(){
    int id,horas;
    float tramph;
    scanf("%d",&id);
    scanf("%d",&horas);
    scanf("%f",&tramph);
    printf("NUMBER = %d\n",id);
    printf("SALARY = U$ %.2f\n",horas*tramph);
    return 0;
}
