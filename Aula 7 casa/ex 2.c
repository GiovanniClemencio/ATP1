//Programa que a partir da data de hoje e a data de nascimento de uma pessoa dizer a idade dela
#include<stdio.h>
int main(){
    int dia, mes, ano, dianas, mesnas, anonas;
    printf("Insira a data do dia de hoje (formato: dia/mes/ano): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Insira a data de nascimento do individuo (formato: dia/mes/ano): ");
    scanf("%d/%d/%d", &dianas, &mesnas, &anonas);
    if (dia<dianas && mes<=mesnas){
        printf("Idade: %d", ano-anonas-1);
    }else{
        if(dia<=dianas && mes<mesnas){
            printf("Idade: %d", ano-anonas-1);
        }else{
            printf("Idade: %d", ano-anonas);
        }
    }//uma forma melhor seria juntar os dois ifs no primeiro usando um ou, nem reparei na hora kkkkkk
    return 0;
}
