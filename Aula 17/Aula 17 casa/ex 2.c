//função que recebe uma string e usando ponteiros retorna o numero de vogais, de consoantes e numerais
#include<stdio.h>
#include<string.h>
void contagem(char str[],int *vog,int *con, int *num){
    int tama=strlen(str);
    for(int i=0;i<tama;i++){
        if(str[i]>=48 && str[i]<=57){
            *num = *num+1;
        }else{
            if(str[i]== 'a' || str[i]== 'A' || str[i]== 'e' || str[i]== 'E' || str[i]== 'i' || str[i]== 'I' || str[i]== 'o' || str[i]== 'O' || str[i]== 'u' || str[i]== 'U'){
              *vog = *vog+1;
            }else{
                if(str[i]=='\0'|| (str[i]>=32 && str[i]<=47)||(str[i]>=58 && str[i]<=64)||(str[i]>=91 && str[i]<=96)||str[i]>=123){
                }else{
                    *con= *con + 1;
                }
            }
        }
    }
}
int main(){
    int nv=0,nc=0,nn=0;
    char vec[30];
    printf("Digite uma string: ");
    fgets(vec,30,stdin);
    for(int j=0;j<strlen(vec);j++){
        if(vec[j]=='\n'){
            vec[j]='\0';
        }
    }
    contagem(vec,&nv,&nc,&nn);
    printf("Vogais: %d\nConsoantes: %d\nNumeros: %d\n",nv,nc,nn);
    return 0;
}
