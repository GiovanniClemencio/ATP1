//Programa que recebe uma string, e verifica se as vogais dessa string formam um palindroma
#include<stdio.h>
#include<string.h>
int main(){
    char entry[51],vogais[51],inver[51];
    int cont=0;
    fgets(entry,51,stdin);
    for(int z=0;z<strlen(entry);z++){
        if(entry[z]=='\n'){
            entry[z]='\0';
        }else{}
    }
    for(int i=0;i<strlen(entry);i++){
        if(entry[i]=='a'||entry[i]=='e'||entry[i]=='i'||entry[i]=='o'||entry[i]=='u'){
            vogais[cont]=entry[i];
            cont++;
        }else{}
    }
    vogais[cont]='\0';
    cont=0;
    for(int j=strlen(vogais)-1;j>=0;j--){
        inver[cont]=vogais[j];
        cont++;
    }
    inver[cont]='\0';
    if(strcmp(vogais,inver)!=0){
        printf("N\n");
    }else{
        printf("S\n");
    }
    return 0;
}
