//função que utiliza ponteiros que recebe uma string e retorna o maior e menor numero considerando a ordem alfabetica
#include<stdio.h>
#include<string.h>
void maior_menor(char str[],char *mai,char *men){
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(str);j++){
            if(((str[i]<str[j] && str[i]<*men)|| i==0)&& (str[i]>=97 && str[i]<=122)){
                    *men=str[i];
            }if(((str[i]>str[j] && str[i]>*mai)|| i==0)&& (str[i]>=97 && str[i]<=122)){
                    *mai=str[i];
            }
        }
    }
}
int main(){
    char vec[30],maior,menor;
    printf("Digite uma string: ");
    fgets(vec,30,stdin);
    for(int k=0;k<strlen(vec);k++){
        if(vec[k]=='\n'){
            vec[k]='\0';
        }
        if(vec[k]>=65 && vec[k]<=90){
                vec[k]= vec[k]+32;
        }
    }
    maior_menor(vec,&maior,&menor);
    printf("Maior: %c\nMenor: %c\n",maior,menor);
    return 0;
}
