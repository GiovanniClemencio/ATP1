#include<stdio.h>
#include<string.h>
int main(){
    char n1[202],n2[202],nome[201];
    int n,tamanho,cont=0,cont1=0,cont2=0;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        fgets(n1,101,stdin);
        fgets(n2,101,stdin);
        for(int j=0;j<101;j++){
            if(n1[j]=='\n'){
                n1[j]= '\0';
            }
            if(n2[j]=='\n'){
                n2[j]= '\0';
            }
        }
        tamanho = (strlen(n1) + strlen(n2));
        for(int k=0;k<tamanho;k++){
            if(k%2==0 || k==0){
                nome[cont]= n1[cont1];
                nome[cont+1]= n1[cont1+1];
                cont = cont + 2;
                cont1 = cont1 + 2;
            }else{
                nome[cont]=n2[cont2];
                nome[cont+1]= n2[cont2+1];
                cont = cont + 2;
                cont2 = cont2 + 2;
            }
        }
        nome[tamanho]='\0';
        printf("%s\n",nome);
        cont = 0;
        cont1=cont;
        cont2=cont1;
    }
    return 0;
}
