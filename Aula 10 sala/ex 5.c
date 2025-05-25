//Programa para ler um numero e apresentar seu fatorial usando do while
#include<stdio.h>
int main(){
    int num, fat=1;
    printf("Insira o numero para calcular o fatorial: ");
    scanf("%d",&num);
    do{
        fat= fat*num;
        num = num-1;
    }while(num>0);
    printf("Fatorial: %d", fat);
    return 0;
}
