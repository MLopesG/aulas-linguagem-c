#include<stdio.h>

void main(){
    // Declarar variaveis
    float salario, parcelas_financiamentos, salarioCompare;
    // Receber o salario atual
    printf("Informe o salário");
    scanf("%f", &salario);
    // Receber o quantidade de parcelas que usuário deseja
    printf("Informe a quantidade de  parecelamento");
    scanf("%f", &parcelas_financiamentos);
    // Calculo para exponenciar 5x o salario.
    salario = salario*5;
    // Verificar financiamento
    if(parcelas_financiamentos <= salario)
        printf("Financiamento Concedido");
    else
        printf("Financiamento Concedido");

}
