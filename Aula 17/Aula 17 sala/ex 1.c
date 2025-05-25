// programa que usa uma fução com ponteiro para fazer uma divisão
#include<stdio.h>
void div(int n1,int n2,int *p1,int *p2){
    *p1 = n1/n2;
    *p2 = n1%n2;
}
int main(){
    int num,deno,quo,res;
    printf("Digite o numerador: ");
    scanf("%d",&num);
    printf("Digite o denumerador: ");
    scanf("%d",&deno);
    div(num,deno,&quo,&res);
    printf("Quociente: %d\nResto: %d\n",quo,res);
    return 0;
}
