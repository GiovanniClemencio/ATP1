//Programa que lê seis entradas e imprime quantos valores positivos tinham nas 6 entradas
#include<stdio.h>
int main(){
    float entry;
    int posi=0;
    for(int i=0;i<6;i++){
        scanf("%f",&entry);
        if(entry>0){
            posi++;
        }else{}
    }
    printf("%d valores positivos\n",posi);
    return 0;
}
