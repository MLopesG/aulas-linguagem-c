#include <stdio.h>

void main(){
    float raio,area;

    printf("Escreva o raio do circulo:");
    scanf("%f", &raio);

    area = 3.14*(raio*raio);

    printf("Área do circulo é: %f", area);
}