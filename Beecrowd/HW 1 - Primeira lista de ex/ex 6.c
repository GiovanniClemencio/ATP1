//Programa que l� um c�digo de DDD e imprime a cidade equivalente
#include<stdio.h>
int main(){
    int entry;
    scanf("%d",&entry);
    switch(entry){
        case 61:
            printf("Brasilia\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 11:
            printf("Sao Paulo\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        default:
            printf("DDD nao cadastrado\n");
            break;
    }
    return 0;
}
