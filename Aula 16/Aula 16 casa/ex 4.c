//função: recebe um valor e um intervalo e verifica se o valor esta no intervalo
#include<stdio.h>
int intervalo(int valor,int comeco,int fim){
    int key;
    if(valor>=comeco && valor<=fim){
        key = 1;
    }else{
        key = 0;
    }
    return key;
}
int main(){
    int num, inicio,fin,chave;
    printf("Insira o numero que quer verificar: ");
    scanf("%d",&num);
    printf("Insira o inicio de intervalo que quer verificar: ");
    scanf("%d",&inicio);
    printf("Insira o final do intervalo que quer verificar: ");
    scanf("%d",&fin);
    chave = intervalo(num,inicio,fin);
    if(chave==1){
        printf("Dentro do intervalo\n");
    }else{
        printf("Fora do intervalo\n");
    }
    return 0;
}
/*teoricamente esse ex é pra só criar a função e então criar 3 programas diferentes que
utilizam essa função, um para maioridade, um para hora e min e outro para meses do ano*/
