//Programa para dizer se um aluno esta aprovado baseado nas medias e nos trabalhos
#include<stdio.h>
int main(){
    float mprovas, mtrabs;
    printf("Informe a media das provas do aluno: ");
    scanf("%f", &mprovas);
    printf("Informe a media dos trabalhos do aluno: ");
    scanf("%f", &mtrabs);
    if(mprovas>5 && mtrabs>5){
        printf("Media final do aluno: %f", (mprovas+mtrabs)/2);
    }else{
        if (mprovas>mtrabs){
            printf("Media final do anuno: %f", mtrabs);
        }else{
            printf("Media final do aluno: %f", mprovas);
        }
    }
    return 0;
}
