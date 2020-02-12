#include <stdio.h>

void main(){
    float numero1, numero2, media;

    printf("Escreve o primeiro número:");
    scanf("%f", &numero1);

    printf("Escreve o segundo número:");
    scanf("%f", &numero2);

    media = (numero1 + numero2)/2;

    printf("A média entre os números é: %f", media);

}