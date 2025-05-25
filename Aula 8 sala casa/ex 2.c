// programa que le um inteiro e diz o mes equivalente
#include<stdio.h>
int main (){
    int num;
    printf("Digite um inteiro entre 1 e 12: ");
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("Mes equivalente: Janeiro");
            break;
        case 2:
            printf("Mes equivalente: Fevereiro");
            break;
        case 3:
            printf("Mes equivalente: Marco");
            break;
        case 4:
            printf("Mes equivalente: Abril");
            break;
        case 5:
            printf("Mes equivalente: Maio");
            break;
        case 6:
            printf("Mes equivalente: Junho");
            break;
        case 7:
            printf("Mes equivalente: Julho");
            break;
        case 8:
            printf("Mes equivalente: Agosto");
            break;
        case 9:
            printf("Mes equivalente: Setembro");
            break;
        case 10:
            printf("Mes equivalente: Outubro");
            break;
        case 11:
            printf("Mes equivalente: Novembro");
            break;
        case 12:
            printf("Mes equivalente: Dezembro");
            break;
        default:
            printf("Numero invalido--(Numeros validos: 1,2,3,4,5,6,7,8,9,10,11,12)");
            break;
    }
}
