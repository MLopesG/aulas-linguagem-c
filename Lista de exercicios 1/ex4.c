#include <stdio.h>

void main(){
    float numero1, numero2, produto;

    printf("Escreve o primeiro número:");
    scanf("%f", &numero1);

    printf("Escreve o segundo número:");
    scanf("%f", &numero2);

    produto = numero1 * numero2;

    printf("O produto entre os números é: %f", produto);

}