//Programa que lê 3 variaveis equivalentess a hora, min e seg e usa uma função para calc tudo em segundos
#include<stdio.h>
int segundos(int h,int min,int s){
    int res = (h*3600)+(min*60)+s;
    return res;
}
int main(){
    int horas, minutos,seg,r;
    printf("Digite as horas: ");
    scanf("%d",&horas);
    printf("Digite os minutos: ");
    scanf("%d",&minutos);
    printf("Digite as segundos: ");
    scanf("%d",&seg);
    r = segundos(horas,minutos,seg);
    printf("Tempo em segundos: %d\n",r);
    return 0;
}
