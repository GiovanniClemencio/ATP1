//Programa que le um numero e apresenta seu fatorial usando for
#include<stdio.h>
int main(){
    int num, fat=1;
    printf("Digite o numero que se quer descobrir o fatorial: ");
    scanf("%d",&num);
    for(int i=0;i<num;){
        fat = num*fat;
        num=num-1;
    }
    printf("Fatorial: %d", fat);
    return 0;
}
