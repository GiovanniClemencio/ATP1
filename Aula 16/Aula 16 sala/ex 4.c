//Programa que recebe uma string e usando uma função diz quantos numeros estão na string
#include<stdio.h>
#include<string.h>
int contagems(char vec[]){
    int cont=0;
    for(int i=0;i<strlen(vec);i++){
        switch(vec[i]){
            case '0':case'1':case'2':case '3':case'4':case'5':case '6':case'7':case'8':case '9':
                cont++;
                break;
        }
    }
    return cont;
}
int main(){
    char frase[50];
    int numero;
    printf("Digite uma sting: ");
    fgets(frase,50,stdin);
    numero = contagems(frase);
    printf("Quantidade de numeros na string: %d",numero);
    return 0;
}
