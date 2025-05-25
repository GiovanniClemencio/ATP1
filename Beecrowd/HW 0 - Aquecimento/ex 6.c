//programa para calcular a média ponderada da nota de um aluno sendo que a nota A tem peso 3.5 e a nota B tem peso 7.5
#include<stdio.h>
int main(){
    double A,B,MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    MEDIA = (((A*3.5)+(B*7.5))/11);
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
