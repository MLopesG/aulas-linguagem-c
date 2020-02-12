#include <stdio.h>


void main(){
    int numero1,numero2,soma_quadrados;

    printf("Escreve o primeiro número: ");
    scanf("%d", &numero1);

    printf("Escreve o segundo número: ");
    scanf("%d", &numero2);

    soma_quadrados = ((numero1*numero1)+(numero2*numero2));

    printf("A Soma dos quadrados é: %d", soma_quadrados);

}

//gcc ex3.c -o ex3
// ./ex3