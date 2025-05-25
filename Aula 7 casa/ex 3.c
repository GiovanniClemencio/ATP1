//Programa para dizer se um aluno está aprovado, reprovado ou de exame baseado na sua media e frequência
#include<stdio.h>
int main(){
    float media, freq;
    printf("Insira a media do aluno (0 a 10): ");
    scanf("%f", &media);
    printf("Insira a frequencia do aluno em porcentagem (0 a 100): ");
    scanf("%f", &freq);
    if (media>=5 && freq>=70){
        printf("Status: APROVADO");
    }else{
        if(media<5 && media>3 && freq>=70){
            printf("Status: EXAME");
        }else{
            printf("Status: REPROVADO");
        }
    }
    return 0;
}
