//fazer uma função que centraliza uma palavra numa string
#include<stdio.h>
#include<string.h>
void centralizar(char palavra[],int n){
    char esp[n];
    int branco,cont=0,m=strlen(palavra);
    branco= (n-m)/2;
    for(int i=0;i<n;i++){
        if(i<branco || i>(branco+strlen(palavra))){
            esp[i]=' ';
        }else{
            esp[i]=palavra[cont];
            cont++;
        }
    }
    for(int j=0;j<strlen(esp);j++){
        palavra[j]=esp[j];
    }
    palavra[m+branco]='\0';
}

int main(){
    char palavra[30];
    int tamanhoesp,testes;
    printf("Digite quantos testes serão feitos: ");
    scanf("%d",&testes);
    printf("Digite quantos espacos seram disponiveis: ");
    scanf("%d",&tamanhoesp);
    for(int i=0;i<testes;i++){
        printf("Digite uma palavra: ");
        scanf("%s",&palavra);
        centralizar(palavra,tamanhoesp);
        printf("Palavra centralizada:\n%s\n",palavra);
    }
    return 0;
}
