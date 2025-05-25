//programa que le um numero inteiro e diz qual dia da semana é equivalente
#include<stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro entre 1 e 7: ");
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("Dia equivalente: Domingo");
            break;
        case 2:
            printf("Dia equivalente: Segunda");
            break;
        case 3:
            printf("Dia equivalente: Terca");
            break;
        case 4:
            printf("Dia equivalente: Quarta");
            break;
        case 5:
            printf("Dia equivalente: Quinta");
            break;
        case 6:
            printf("Dia equivalente: Sexta");
            break;
        case 7:
            printf("Dia equivalente: Sabado");
            break;
        default:
            printf("Numero invalido--(Numeros validos: 1,2,3,4,5,6,7)");
            break;
    }
    return 0;
}
