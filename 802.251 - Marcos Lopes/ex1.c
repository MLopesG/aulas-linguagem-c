#include <stdio.h>

void main(){
    float peso_prato;// peso da comida consumida
    float total; // total a ser pago pela comida
    
    printf("Informe o peso do prato: "); // entrada do peso da comida
    scanf("%f", &peso_prato);
    
    total = 22*peso_prato; // calcula o preço total que é o valor do prato, multiplicado pelo peso;
    
    printf("Valor total é:%.2f", total); // imprimi o resultado
}