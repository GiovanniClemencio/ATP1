//Programa que apresenta as tabuadas de 0 a 10 usando dois for aninhados
#include<stdio.h>
int main(){
    for(int num=0;num<11;num++){
        for(int mult=0; mult<11;mult++){
            printf("%d X %d = %d\n", num, mult, num*mult);
        }
        printf("\n\n\n");
    }
    return 0;
}
