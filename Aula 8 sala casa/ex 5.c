// programa que le a idade de um atleta e informa qual categoria ele pertence usando switch
#include<stdio.h>
int main(){
    int idade;
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);
    switch(idade){
        case 1 ... 4:
            printf("NAO PODE COMPETIR");
            break;
        case 5 ... 7:
            printf("CATEGORIA: INFANTIL A");
            break;
        case 8 ... 10:
            printf("CATEGORIA: INFANTIL B");
            break;
        case 11 ... 13:
            printf("CATEGORIA: JUVENIL A");
            break;
        case 14 ... 17:
            printf("CATEGORIA: JUVENIL B");
            break;
        case 18 ... 130:
            printf("CATEGORIA: ADULTO");
            break;
        default:
            printf("ERRO--(Entrada de idade invalida)");
    }
    return 0;
}
