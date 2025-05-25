//Programa que exibe a tabuada de um número sendo a exibição dentro de uma função
#include<stdio.h>
void tabuada(int n){
    for(int i=1;i<11;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}
int main(){
    int num;
    printf("Digite um numero para saber sua tabuada: ");
    scanf("%d",&num);
    tabuada(num);
    return 0;
}
