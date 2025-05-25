//programa que le o codigo de um produdo e o classifica
#include<stdio.h>
int main(){
    int cod;
    printf("Informe o codigo do produto: ");
    scanf("%d", &cod);
    switch(cod){
        case 1:
            printf("Alimento nao-perecivel");
            break;
        case 2:case 3:case 4:
            printf("Alimento perecivel");
            break;
        case 5:case 6:
            printf("Vestuario");
            break;
        case 7:
            printf("Higiene pessoal");
            break;
        case 8 ... 15:
            printf("Limpeza e utensilios domesticos");
            break;
        default:
            printf("ERRO--(Codigo invalido)");
            break;
    }
    return 0;
}
