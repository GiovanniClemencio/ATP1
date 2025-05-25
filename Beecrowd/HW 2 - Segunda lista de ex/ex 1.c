//Programa que recebe um numero m de casos a serem analisados, recebe quantas pessoas estão em cada caso e qual idioma elas falam e no final imprime qual idioma deve ser usado em cada caso
#include<stdio.h>
#include<string.h>
int main(){
    int m,n,key=0;
    char idi1[25],idi2[25];
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        getchar();
        gets(idi1);
        for(int j=1;j<n;j++){
            gets(idi2);
            if(strcmp(idi1,idi2)!=0){
                key++;
            }else{}
            strcpy(idi1,idi2);
        }
        if(key!=0){
            printf("ingles\n");
            key=0;
        }else{
            key=0;
            printf("%s\n",idi1);
        }
    }
    return 0;
}
