//fzr função para transformar caracteres minusculos de uma string em maiusculos
#include<stdio.h>
#include<string.h>
char maiusculo(char vec[]){
    for(int i=0;i<strlen(vec);i++){
        if(vec[i]>=97 && vec[i]<=122){
            vec[i]= vec[i]-32;
        }
    }
    return vec;
}
int main(){
    char palavra[25];
    printf("Digite uma palavra: ");
    fgets(palavra,25,stdin);
    maiusculo(palavra);
    printf("Maiusculo: %s",palavra);
    return 0;
}
