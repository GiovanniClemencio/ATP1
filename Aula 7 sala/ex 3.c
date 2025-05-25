//Programa que classifica um triangulo baseado no tamanho dos lados
#include<stdio.h>
int main(){
    float la,lb,lc;
    printf("Insira o tamanho do lado A: ");
    scanf("%f", &la);
    printf("Insira o tamanho do lado B: ");
    scanf("%f", &lb);
    printf("Insira o tamanho do lado C: ");
    scanf("%f", &lc);
    if (la==lb && lb==lc){
        printf("O triangulo e equilatero");
    }else{
        if ((la==lb || lb==lc || la==lc) && (la!=lb || lb!=lc || la!=lc)){
            printf("O triangulo e isoceles");
        }else{
            printf("O triangulo e escaleno");
        }
    }
    return 0;
}
