//programa que l� cinco valores fornecidos pelo usu�rio e fornece a m�dia usando do while
#include<stdio.h>
int main(){
    int cont=0;
    float media, num;
    do{
        printf("Insira o %do numero: ", cont+1);
        scanf("%f", &num);
        media = media+num;
        cont++;
    }while(cont<5);
    printf("A media e: %f", media/5);
    return 0;
}
