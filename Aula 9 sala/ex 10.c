//Programa que le o numero de enntradas que terá, le idade, altura e peso de cada uma e mostra quantas pessoas tem idade superir a 50
// a media da altura dos entre 10 e 20 anos e percentual de pessoas com peso inferior a 50 kg
#include<stdio.h>
int main(){
    int cont=0, idade, entradas, magros=0, cinquentao=0, dezvin=0;
    float kg, altura, media=0;
    printf("Digite quantas pessoas terao seus dados digitados: ");
    scanf("%d", &entradas);
    while(entradas>cont){
        printf("Digite a idade da %da pessoa: ", cont+1);
        scanf("%d", &idade);
        printf("Digite a altura da %da pessoa: ", cont+1);
        scanf("%f", &altura);
        printf("Digite o peso da %da pessoa: ", cont+1);
        scanf("%f",&kg);
        if(idade>50){
            cinquentao++;
        }else{}
        if(idade>=10 && idade<=20){
            media = media + altura;
            dezvin++;
        }else{}
        if(kg<50){
            magros++;
        }else{}
        cont++;
    }
    printf("Numero de pessoas com mais de 50 anos: %d\n", cinquentao);
    printf("Media de altura das pessoas entre 10 e 20 anos de idade: %f\n", media/dezvin);
    printf("Percentual de pessoas com peso inferior a 50kg: %f por cento\n", (float)magros/entradas*100);
    return 0;
}
