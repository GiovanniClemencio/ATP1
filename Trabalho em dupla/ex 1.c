//Nomes: Giovanni Roberto Clemencio e Luan Yamada Dezan
//Programa para codificar uma palavra baseada num parametro dade pelo usuário
#include<stdio.h>
#include<string.h>
void codificar(char vec[],int n ){
    for(int i=0;i<strlen(vec);i++){
        vec[i] = vec[i]+n;
    }
}
void decodificar(char vec[], int n){
    for(int j=0;j<strlen(vec);j++){
        vec[j] = vec[j]-n;
    }
}
int main(){
    char vec[20];
    int k,inte;
    printf("Digite '1' para codificar uma palavra e '2' para decodificar: ");
    scanf("%d",&inte);
    switch(inte){
        case 1:
            printf("Digite uma palavra: ");
            scanf("%s",&vec);
            printf("Valor de k: ");
            scanf("%d",&k);
            codificar(vec,k);
            printf("Palavra codificada: %s\n",vec);
            break;
        case 2:
            printf("Digite uma palavra codificada: ");
            scanf("%s",&vec);
            printf("Valor de k: ");
            scanf("%d",&k);
            decodificar(vec,k);
            printf("Palavra decodificada: %s\n",vec);
            break;
    }
    return 0;
}
