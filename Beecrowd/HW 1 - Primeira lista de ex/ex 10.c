//Programa que le um inteiro de entrada e imprime seu fatorial
#include<stdio.h>
int main(){
    int N,F=1;
    scanf("%d",&N);
    for(int i=N;i>0;i--){
        F = F*i;
    }
    printf("%d\n",F);
    return 0;
}
