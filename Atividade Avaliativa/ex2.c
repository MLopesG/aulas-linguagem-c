#include <stdio.h>

void main(){
    
    float salario; // entrada do salario atual do funcionario
    float total_vendas; // entrada do total de vendas do funcionário
    float salario_final; // salario final, reajustado
    
    printf("Informe o salário do vendedor: "); // entrada do salário atual
    scanf("%f", &salario); 
    
    printf("Informe o total de vendas: ");// entrada do total de venda
    scanf("%f", &total_vendas);
    
    salario_final = ((total_vendas*0.05)) + salario; // calculo do reajuste do salário, baseado no valor de vendas
    
    printf("salário final é:%.2f", salario_final); // mostrar salario reajustado
}