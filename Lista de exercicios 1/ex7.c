#include <stdio.h>

void main(){
    int temperatura_fahrenheit, temperatura_celsius;

    printf("Escreva a temperatura em fahrenheit:");
    scanf("%d", &temperatura_fahrenheit);

    temperatura_celsius = (temperatura_fahrenheit - 32)/1.8;

    printf("Temperatura em celsius é: %d", temperatura_celsius);

}