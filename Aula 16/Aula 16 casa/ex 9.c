#include<stdio.h>
#include<string.h>
int main(){
    char vec[30];
    printf("Digite string");
    fgets(vec,30,stdin);
    int n=strlen(vec);
    printf("%d",n);
    return 0;
}
