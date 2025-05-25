//função usando ponteiro para calcular fatorial
#include<stdio.h>
void fatorial(int n, int *fat){
    for(int i=n;i>0;i--){
        *fat = *fat * i;
    }
}
int main(){
    int num,res=1;
    printf("Digite o numero que quer se calcular o fatorial: ");
    scanf("%d",&num);
    fatorial(num,&res);
    printf("Fatorial: %d\n",res);
    return 0;
}
