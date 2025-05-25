//programa que recebe dois numeros, os soma, exlui todos os algarismos '0' e imprime o resultado. repete até um resultado 0
#include<stdio.h>
#include<string.h>
int main(){
    int n1,n2,res=1,cont=0;
    char resi[25],resif[25];
    while(res!=0){
        scanf("%d",&n1);
        scanf("%d",&n2);
        res=n1+n2;
        sprintf(resi,"%d",res);
        for(int i=0;i<strlen(resi);i++){
            if(resi[i]!='0'){
                resif[cont]=resi[i];
                cont++;
            }else{}
        }
        resif[cont]='\0';
        cont=0;
        if(res!=0){
                printf("%s\n",resif);
        }
    }
    return 0;
}
