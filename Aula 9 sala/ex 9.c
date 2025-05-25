//Programa que le a idade e a cor dos olhors de um numero de pessoas especificadas pelo usuario
#include<stdio.h>
int main(){
    int idade, cont=0, pessoas,azul=0,preto=0,verde=0,outro=0,castanho=0;
    char olhos;
    printf("Insira o numero de pessoas: ");
    scanf("%d", &pessoas);
    while(cont<pessoas){
        printf("Insira a idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        printf("Escolha a cor do olhos digitando a primeira letra das seguintes opções:\nAzul, Verde, Castanho, Preto, Outros:");
        scanf("%c", &olhos);
        switch(olhos){
            case 'a':case 'A':
                azul++;
                break;
            case 'p':case 'P':
                preto++;
                break;
            case 'v':case'V':
                verde++;
                break;
            case 'c':case'C':
                castanho++;
                break;
            case 'o':case 'O':
                outro++;
                break;
        }
        cont++;
    }
    printf("Numero de pessoas com:\nOlhos Azuis: %d\nOlhos Pretos: %d\nOlhos Verdes: %d\nOlhos Castanhos: %d\nOlhos de outras cores: %d",azul,preto,verde,castanho,outro);
    return 0;
}
