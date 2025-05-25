//programa que le as entradas de codigo de um produto e da quantidade dele e apresenta o preço final
#include<stdio.h>
int main(){
    int cod, custo, quant;
    printf("Digite o codigo do produto sendo adiquirido: ");
    scanf("%d", &cod);
    printf("Digite a quantidade do produto adiquirido: ");
    scanf("%d", &quant);
    switch(cod){
        case 100:
            custo=7;
            printf("Preço final: R$ %d", custo*quant);
            break;
        case 101:
            custo=5;
            printf("Preço final: R$ %d", custo*quant);
            break;
        case 102:
            custo=10;
            printf("Preço final: R$ %d", custo*quant);
            break;
        case 103:
            custo=12;
            printf("Preço final: R$ %d", custo*quant);
            break;
        case 104:
            custo=3;
            printf("Preço final: R$ %d", custo*quant);
            break;
        default:
            printf("ERRO--(Codigo invalido)");
            break;
    }
    return 0;
}
