//fzr strlen do zero
#include<stdio.h>
int tamanho(char vec[]){
    int cont=0;
    while(vec[cont]!='\0'){
        cont++;
    }
    if(vec[cont-1]=='\n'){
        cont--;
    }
    return cont;
}
int main(){
    char frase[50];
    int size;
    printf("Digite uma string: ");
    fgets(frase,50,stdin);
    size=tamanho(frase);
    printf("Tamanho: %d",size);
    return 0;
}
