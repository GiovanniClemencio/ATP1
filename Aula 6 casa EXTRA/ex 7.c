//Programa que le o numero do mes e o escreve por extenso
#include<stdio.h>
int main(){
    int mes;
    printf("Informe o número do mes: ");
    scanf("%d", &mes);
    if (mes == 1){
        printf("Mes: JANEIRO");
    }else{
        if (mes == 2){
            printf("Mes: FEVEREIRO");
        }else{
            if(mes == 3){
                printf("Mes: MARCO");
            }else{
                if(mes == 4){
                    printf("Mes: ABRIL");
                }else{
                    if(mes == 5){
                        printf("Mes: MAIO");
                    }else{
                        if(mes == 6){
                            printf("Mes: JUNHO");
                        }else{
                            if(mes == 7){
                                printf("Mes: JULHO");
                            }else{
                                if(mes == 8){
                                    printf("Mes: AGOSTO");
                                }else{
                                    if(mes == 9){
                                        printf("Mes: SETEMBRO");
                                    }else{
                                        if(mes == 10){
                                            printf("Mes: OUTUBRO");
                                        }else{
                                            if(mes == 11){
                                                printf("Mes: NOVEMBRO");
                                            }else{
                                                if(mes == 12){
                                                    printf("Mes: DEZEMBRO");
                                                }else{
                                                    printf("Entrada nao valida");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
