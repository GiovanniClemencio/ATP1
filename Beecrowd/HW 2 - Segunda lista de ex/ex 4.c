//programa que lê uma entrada N, l~e n entradas de stings com 14 caracteres e em cada uma delas indentifica 3 numeros da string, os soma imprime a soma
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char entry[14],ntemp[4];
    int N,n1,n2,n3;
    scanf("%d",&N);
    getchar();
    for(int i=0;i<N;i++){
        scanf("%s",&entry);
        getchar();
        ntemp[0]=entry[2];
        ntemp[1]=entry[3];
        ntemp[2]='\0';
        n1 = atoi(ntemp);
        ntemp[0]=entry[5];
        ntemp[1]=entry[6];
        ntemp[2]=entry[7];
        ntemp[3]='\0';
        n2 = atoi(ntemp);
        ntemp[0]=entry[11];
        ntemp[1]=entry[12];
        ntemp[2]='\0';
        n3 = atoi(ntemp);
        printf("%d\n",n1+n2+n3);
    }
    return 0;
}
