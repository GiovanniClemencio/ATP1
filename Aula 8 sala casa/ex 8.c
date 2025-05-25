//programa que le um caractere minusculo e diz se é vogal ou consoante
#include<stdio.h>
int main(){
    char entrada;
    printf("Digite um caractere minusculo: ");
    scanf("%c", &entrada);
    switch(entrada){
        case 'a':case 'e':case 'i': case 'o': case 'u': case 'y':
            //Estou considerando y como vogal pq na minha cabeça é, ja que em portugues ela soa como uma vogal
            printf("O caractere digitado e uma vogal");
            break;
        default:
            printf("O caractere digitado e uma consoante");
            break;
    }
    return 0;
}
