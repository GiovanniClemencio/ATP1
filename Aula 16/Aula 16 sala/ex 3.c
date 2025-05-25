//Programa que le uma string e um caractere e usa uma função para mudar as instancias do caractere na string para '_'
#include<stdio.h>
#include<string.h>
void trocador(char vec[],char x){
    int cont=0;
    while(vec[cont]!='\0'){
        if(vec[cont]==x){
            vec[cont]='_';
        }
        cont++;
    }
}

int main(){
    char palavra[30],letra;
    gets(palavra);
    scanf("%c",&letra);
    trocador(palavra,letra);
    printf("%s",palavra);
    return 0;
}
