//Nomes: Giovanni Roberto Clemencio e Luan Yamada Dezan
//Programa que verifica quantas vezes uma substring aparece em uma string
#include<stdio.h>
#include<string.h>
int contador(char vec[],char sub[]){
    int tamanhosub=strlen(sub),tamanhovec=strlen(vec),key=0;
    for(int i=0;i<=tamanhovec-tamanhosub;i++){
        int con=1;
        for(int j=0;j<tamanhosub;j++){
            if(vec[i+j]!=sub[j]){
            con=0;
            }
        }
        if(con==1){
            key++;
        }
    }
    return key;
}
int main(){
    char palavra[25], palavrasub[25];
    int vezes;
    printf("Digite uma palavra: ");
    scanf("%s",&palavra);
    printf("Palavra de busca: ");
    scanf("%s",&palavrasub);
    vezes = contador(palavra,palavrasub);
    printf("A palavra de busca ocorre %d vez(es)\n",vezes);
    return 0;
}
