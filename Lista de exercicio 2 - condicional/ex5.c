#include<stdio.h>

void main(){
    int numero;

    printf("Informe um número inteiro:");
    scanf("%d", &numero);

    if(numero%3==0)
        printf("Número é divisivel por 3");
    else
        printf("Número não divisivel por 3");
}