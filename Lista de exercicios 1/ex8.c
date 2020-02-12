#include <stdio.h>

void main(){
    int temperatura_fahrenheit, temperatura_celsius;

    printf("Escreva a temperatura em celsius:");
    scanf("%d", &temperatura_celsius);

    temperatura_fahrenheit =  temperatura_celsius*1.8 + 32;

    printf("Temperatura em celsius é: %d", temperatura_fahrenheit);

}