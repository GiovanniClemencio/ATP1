//programa para lar o tamanho de tres lados (A,B e C) e informar se eles podem formar um triangulo
#include<stdio.h>
int main(){
    float ladoA, ladoB, ladoC;
    printf("Informe o tamanho do lado A: ");
    scanf("%f", &ladoA);
    printf("Informe o tamanho do lado B: ");
    scanf("%f", &ladoB);
    printf("Informe o tamanho do lado C: ");
    scanf("%f", &ladoC);
    if(ladoA<(ladoB+ladoC) && ladoB<(ladoA+ladoC) && ladoC<(ladoA+ladoB)){
        printf("Os lados formam um triangulo");
    }else{
        printf("Os lados nao formam um triangulo");
    }
    return 0;
}
