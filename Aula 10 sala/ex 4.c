//Programa que le numeros inteiros positivos até que seja entrado 0 e então apresenta o numero de numeros pares e o numero de impares usando do whiçe
#include<stdio.h>
int main(){
    int entrada, cont=0, par=0, impar=0;
    do{
        printf("Digite o %do numero: ", cont+1);
        scanf("%d",&entrada);
        if(entrada%2==0){
            par++;
        }else{
            impar++;
        }
        cont++;
    }while(entrada!=0);
    printf("Quantidade de pares digitados: %d\nQuantidade de impares digitados: %d", par-1, impar);
    return 0;
}
