#include <stdio.h>

void main(){
    float valor_conta, valor_reajuste;

    printf("Qual foi seu gasto no restaurante?");
    scanf("%f", &valor_conta);

    valor_reajuste = ((valor_conta*0.1) + valor_conta);

    printf("O Valor total é: %f", valor_reajuste);
}