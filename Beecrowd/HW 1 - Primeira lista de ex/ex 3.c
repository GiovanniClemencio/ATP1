//Programa que recebe um valor monetário e imprime o seu equivalente na menor quantidade de notas e moedas possíveis
#include<stdio.h>
int main(){
    double entry;
    int cem,cinq,vinte,dez,cinco,dois,um,centcinq,vintcinc,centdez,centcinco,centum;
    scanf("%lf",&entry);
    cem = entry/100;
    entry = entry - (cem*100);
    cinq = entry/50;
    entry = entry - (cinq*50);
    vinte = entry/20;
    entry = entry - (vinte*20);
    dez = entry/10;
    entry = entry - (dez*10);
    cinco = entry/5;
    entry = entry - (cinco*5);
    dois = entry/2;
    entry = entry - (dois*2);
    um = entry;
    entry = (entry - um)*100;
    centcinq = entry/50;
    entry = entry - (centcinq*50);
    vintcinc = entry/25;
    entry = entry - (vintcinc*25);
    centdez = entry/10;
    entry = entry - (centdez*10);
    centcinco = entry/5;
    centum = entry - (centcinco*5);
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",cem,cinq,vinte,dez,cinco,dois);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",um,centcinq,vintcinc,centdez,centcinco,centum);
    return 0;
   }
