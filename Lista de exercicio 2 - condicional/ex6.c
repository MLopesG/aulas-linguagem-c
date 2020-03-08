#include<stdio.h>

void main(){
    int ano;

    printf("Informe o ano:");
    scanf("%d", &ano);


    if(ano%4 == 0)
        printf("Ano é bissexto");
    else
        printf("Ano não é bissexto");
}

//gcc ex1.c -o ex1
// ./ex1