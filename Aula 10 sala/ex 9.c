//Programa que le entradas inteiras positivas ate receber a entrada 0, qunado entrao printa a quantidade de numeros pares e numeros impares usando for
#include<stdio.h>
int main (){
    int par=0, impar=0;
    for(int i=1;i!=0;){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d",&i);
        if(i%2==0){
            par++;
        }else{
            impar++;
        }
    }
    printf("Quantidade de pares: %d\nQuantidade de impares: %d", par-1, impar);
    return 0;
}
