//Programa que le uma entrada e apresenta seu fatorial
#include<stdio.h>
int main(){
    int num,fat=1;
    printf("Digite o numero o qual se quer descobrir o fatorial: ");
    scanf("%d", &num);
    while(num!=0){
        fat = fat*num;
        num = num-1;
    }
    printf("Fatorial: %d", fat);
    return 0;
}
