//Programa que recebe n entradas, as inverte e filtra só as letras minusculas imprimindo o resultado
#include<stdio.h>
#include<string.h>
int main(){
    int n,cont=0,contf=0;
    char vec[50],direito[50],f[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&vec);
        for(int j=0;j<strlen(vec);j++){
            direito[j] = vec[strlen(vec)-j-1];
            cont++;
        }
        direito[cont]='\0';
        cont=0;
        for(int k=0;k<strlen(direito);k++){
            if(direito[k]>=97 && direito[k]<=122){
                f[contf]=direito[k];
                contf++;
            }
        }
        f[contf]='\0';
        printf("%s\n",f);
        contf=0;

    }
    return 0;
}
