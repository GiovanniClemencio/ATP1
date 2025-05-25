//Programa qu lê uma entrada e diz em qual intervalo ela se encontra
#include<stdio.h>
int main(){
    float entry;
    scanf("%f",&entry);
    if(entry>=0 && entry<=25){
        printf("Intervalo [0,25]\n");
    }else{
        if(entry>25 && entry<=50){
            printf("Intervalo (25,50]\n");
        }else{
            if(entry>50 && entry<=75){
                printf("Intervalo (50,75]\n");
            }else{
                if(entry>75 && entry<=100){
                    printf("Intervalo (75,100]\n");
                }else{
                    printf("Fora de intervalo\n");
                }
            }
        }
    }
    return 0;
}
