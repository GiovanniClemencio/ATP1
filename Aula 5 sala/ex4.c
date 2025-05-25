/*Programa para converter um valor em segundos para horas minutos e segundos*/
#include<stdio.h>
int main(){
    int segundos, hora, minuto;
    printf("Insira a quantidade de segundos: ");
    scanf("%d", &segundos);
    hora = segundos/3600;
    minuto = (segundos- hora*3600) /60;
    segundos = (segundos- hora*3600 - minuto*60);
    printf("Horario em horas/minutos/segundos: %02d : %02d : %02d", hora, minuto, segundos);
    return 0;
}
