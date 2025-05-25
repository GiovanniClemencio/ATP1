//programa que recebe uma idade em dias e imprime em anos, meses e dias
#include<stdio.h>
int main(){
    int entry,ano,mes,dia;
    scanf("%d",&entry);
    ano = entry/365;
    mes = (entry - (ano*365))/30;
    dia = entry - (ano*365) - (mes*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
    return 0;
}
