//Programa que le 5 valores inseridos pelo usu�rio e calcula a m�dia
#include<stdio.h>
int main(){
    float num,media=0;
    int cont= 0;
    while(cont<5){
        printf("Digite o %do numero: ", cont+1);
        scanf("%f", &num);
        media = media + num;
        cont++;
    }
    printf("A media e: %f", media/5);
    return 0;
}
