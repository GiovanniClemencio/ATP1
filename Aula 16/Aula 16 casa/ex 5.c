//fazer um menu com função
#include<stdio.h>
int menu(){
    int entry;
    printf("===MENU===\n1-Soma\n2-Subtacao\n3-Multiplicacao\n4-Divisao\n5-Sair\nDigite a opcao desejada: ");
    scanf("%d",&entry);
    return entry;

}
int main(){
    int e1,e2,receiv=0,op;
    printf("Digite o primeiro numero: ");
    scanf("%d",&e1);
    printf("Digite o segundo numero: ");
    scanf("%d",&e2);
    while(receiv!=1){
        switch(menu()){
            case 1:
                printf("%d + %d = %d\n",e1,e2,e1+e2);
                break;
            case 2:
                printf("%d - %d = %d\n",e1,e2,e1-e2);
                break;
            case 3:
                printf("%d * %d = %d\n",e1,e2,e1*e2);
                break;
            case 4:
                printf("%d / %d = %d\n",e1,e2,e1/e2);
                break;
            case 5:
                receiv=1;
                break;
        }
    }
    return 0;
}

