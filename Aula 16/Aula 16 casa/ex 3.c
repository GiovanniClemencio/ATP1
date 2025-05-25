//programa que usa uma função para calcular o fatorial de um numero
#include<stdio.h>
int fat(int n){
    int res=1;
    for(int i=n;i>0;i--){
        res = res*i;
    }
    return res;
}

int main(){
    int num;
    printf("Digite o numero que se quer descobrir o fatorial: ");
    scanf("%d",&num);
    printf("Fatorial: %d",fat(num));
    return 0;
}
