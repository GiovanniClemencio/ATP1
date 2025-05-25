//Programa que le 5 entradas e calcula a media delas usando for
#include<stdio.h>
int main(){
    int num,soma=0;
    for(int i=0;i<5;i++){
        printf("Insira o %d numero: ",i+1);
        scanf("%d",&num);
        soma=soma+num;
    }
    printf("A media e: %d", soma/5);
    return 0;
}
