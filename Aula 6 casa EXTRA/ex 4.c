//Programa para ler um nomero de um a cinco e escrever seu nome por extenso
#include<stdio.h>
int main (){
    int num;
    printf("Escolha um numero de 1 a 5: ");
    scanf("%d", &num);
    if (num == 1){
        printf("Nome por extenso: UM");
    }else{
        if (num == 2){
            printf("Nome por extenso: DOIS");
        }else{
            if (num == 3){
                printf("Nome por extenso: TRES");
            }else{
                if (num == 4){
                    printf("Nome por extenso: QUATRO");
                }else{
                    if (num == 5){
                        printf("Nome por extenso: CINCO");
                    }else{
                        printf("Nao foi selecionado um numero inteiro de 1 a 5");
                    }
                }
            }
        }
    }
    return 0;
}
