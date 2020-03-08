#include<stdio.h>

void main(){
    int a,b,c;

    printf("Digite o primeiro número:");
    scanf("%d", &a);

    printf("Digite o segundo número:");
    scanf("%d", &b);

    printf("Digite o terceiro número:");
    scanf("%d", &c);


    if(a > b && a > c)
        printf("Primeiro número é o maior: %d", a);
    else if(b > a && b > c)
        printf("Segundo número é o maior: %d", b);
    else if(c > a && c > b)
        printf("Terceiro número é o maior: %d", c);
    else if( a == b && b == c && c == a)
        printf("Números são iguais");
    else
        printf("Números são diferentes");
}