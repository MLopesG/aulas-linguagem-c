#include<stdio.h>

void main(){
    int a,b;

    printf("Informe o primeiro número inteiro:");
    scanf("%d", &a);

    printf("Informe o segundo número inteiro:");
    scanf("%d", &b);


    if(a == b)
        printf("Números são iguais");
    else
        printf("Números são diferentes");
}