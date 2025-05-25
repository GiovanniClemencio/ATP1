// fazer uma função que devolve por parametro de ponteiro raiz quadrada , quadrado e se ele é par ou impar
#include<stdio.h>
#include<math.h>
void verif(int n, double *raiz, double *quadrado, int *par){
    *raiz = sqrt(n);
    *quadrado = n*n;
    if(n%2==0){
        *par = 1;
    }else{
        *par = 0;
    }
}
int main (){
    int num,key;
    double sqrt, power;
    printf("Digite o número a ser verificado: ");
    scanf("%d",&num);
    verif(num,&sqrt,&power,&key);
    printf("Raiz : %lf\nQuadrado: %lf\nPar: %d",sqrt,power,key);
    return 0;
}
