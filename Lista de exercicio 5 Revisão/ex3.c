#include<stdio.h>

void main(){
    // Declarar variaveis
    float litros,desconto;

    // Entrar com os litros consumidos
    printf("Informe o litros consumidos:");
    scanf("%f", &litros);

    // Realizar comparação, para verificar a quantidade do desconto para o cliente
    if(litros <=20)
        desconto = (litros*4.30)/1.04;
    else
        desconto = (litros*4.30)/1.06;

    // Mostrar resultado
    printf("valor a ser pago pelo cliente será de: %.2f", desconto);

}
