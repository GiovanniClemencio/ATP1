//Programa para ler a idade e o tempo de serviço do usuário e assim dizer se ele pode ou n se aposentar
#include<stdio.h>
int main(){
    int idade, tempo;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe o tempo de trabalho: ");
    scanf("%d", &tempo);
    if (idade>=65 || tempo>=30 || (idade>=60 && tempo>=25)){
        printf("Pode se aposentar");
    }else{
        printf("Nao pode se aposentar");
    }
    return 0;
}
