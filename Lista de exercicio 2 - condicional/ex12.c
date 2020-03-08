#include<stdio.h>

void main(){
    int a,b,c;

    printf("Digite o primeiro número:");
    scanf("%d", &a);

    printf("Digite o segundo número:");
    scanf("%d", &b);

    printf("Digite o terceiro número:");
    scanf("%d", &c);

    if(a>b && b<a) 
        printf("Número intermediário é%d", c);
    else if(b>c && c<b) 
        printf("Número intermediário é%d", a);
    else if(a>c && c<a) 
        printf("Número intermediário é%d", b);
    else if( a == b && b == c && c == a)
        printf("Números são iguais");
    else
        printf("Número são diferentes");

}