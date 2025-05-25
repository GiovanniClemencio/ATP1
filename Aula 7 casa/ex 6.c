//programa para determinar se uma data é valida
#include<stdio.h>
int main(){
    int dia, mes, ano;
    printf("Digite a data (formato: dia/mes/ano): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if(dia>0 && dia<=31 && (mes>0 && mes<12 && mes!=2 && mes%2==0) && ano>=0){
            printf("Data valida");
    }else{
        if(dia>0 && dia<=30 && (mes>0 && mes<12 && mes!=2 && mes%2!=0) && ano>=0){
            printf("Data valida");
        }else{
        if(mes==2 && !(ano%400==0 || ((ano%4==0)&& !(ano%100==0))) && dia<=28){
            printf("Data valida");
        }else{
            if(mes==2 && (ano%400==0 || ((ano%4==0)&& !(ano%100==0))) && dia<=29){
                printf("Data valida");
            }else{
                printf("Data invalida");
            }
        }
    }
    }
    return 0;

}
