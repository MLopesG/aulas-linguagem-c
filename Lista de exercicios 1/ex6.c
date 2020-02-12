#include <stdio.h>

void main(){
    float numero1, numero2, numero3, media;

    printf("Escreve o primeiro número:");
    scanf("%f", &numero1);

    printf("Escreve o segundo número:");
    scanf("%f", &numero2);

    printf("Escreve o terceiro número:");
    scanf("%f", &numero3);

    media = (numero1 + numero2 + numero3)/3;

    printf("A média entre os números é: %f", media);

}