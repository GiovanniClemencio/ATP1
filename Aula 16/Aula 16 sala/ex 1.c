//Programa que usa uma funçao para calcular uma media simples recebendo duas notas
#include<stdio.h>
int media(int n1,int n2){
    int m=(n1+n2)/2;
    return m;
}
int main(){
    int num1,num2,r;
    scanf("%d",&num1);
    scanf("%d",&num2);
    r = media(num1,num2);
    printf("Media: %d\n",r);
    return 0;
}
