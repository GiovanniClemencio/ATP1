//Nomes: Giovanni Roberto Clemencio e Luan Yamada Dezan
//Programa com uma fun��o que pegara um intervalo e uma string e cria uma substring com os caracteres da posi��o do intervalo na string original
#include<stdio.h>
#include<string.h>
void menorificar(char str[],char sub[],int n1,int n2){
    for(int i=0;i<=(n2-n1);i++){
        sub[i]=str[n1+i];
    }
    sub[n2-n1+1]='\0';
}
int main(){
    char str[30],sub[30];
    int n1,n2;
    printf("Digite uma palavra: ");
    scanf("%s",&str);
    printf("Digite a posi��o inicial: ");
    scanf("%d",&n1);
    printf("Digite a posi��o final: ");
    scanf("%d",&n2);
    menorificar(str,sub,n1,n2);
    printf("Substring: %s",sub);
    return 0;
}
