//Programa para ler a idade de um nadador e classifica-lo numa categoria
#include<stdio.h>
int main(){
    int idade;
    printf("Informe a idade do atleta: ");
    scanf("%d", &idade);
    if(idade>=5 && idade<=7){
        printf("Categoria: INFANTIL A");
    }else{
        if(idade>=8 && idade<=10){
            printf("Categoria: INFANTIL B");
        }else{
            if(idade>=11 && idade<=13){
                printf("Categoria: JUVENIL A");
            }else{
                if(idade>=14 && idade<=17){
                    printf("Categoria: JUVENIL B");
                }else{
                    if(idade>=18){
                        printf("Categoria: ADULTO");
                    }else{
                        printf("Idade nao valida para competir");
                    }
                }
            }
        }
    }
    return 0;
}
