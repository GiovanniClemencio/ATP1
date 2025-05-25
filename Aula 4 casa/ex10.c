/*Programa para calcular a quantia de um premio para os 3 primeiros ganhadores*/
#include<stdio.h>
int main(){
    float premio1, premio2, premio3;
    premio1 = 780000/2;
    premio2 = 780000*0.3;
    premio3 = 780000-premio1-premio2;
    printf("O primeiro ganhador recebe: %f \n", premio1);
    printf("O segundo ganhador recebe: %f \n", premio2);
    printf("O terceiro ganhador recebe: %f \n", premio3);
    return 0;
}
