#include<stdio.h>

void main(){
    float salario_atual; // entrada do salario atual
    float salario_ano_1; // recebe o salario reajustado no primeiro contrato
    float salario_ano_2; // recebe o salario reajustado no segundo contrato
    float salario_ano_3; // recebe o salario reajustado no terceiro contrato
    
    // Recebe o salário atual
    printf("Informe o salário atual do funcionário: ");
    scanf("%f",&salario_atual);
    
    salario_ano_1 = salario_atual + (salario_atual*0.07); // calcula o reajuste do primeiro contrato
    salario_ano_2 = salario_ano_1 + (salario_ano_1*0.06); // calcula o reajuste do segundo contrato
    salario_ano_3 = salario_ano_2 + (salario_ano_2*0.05); // calcula o reajuste do terceiro contrato
    
    printf("\nSalário no primeiro contrato, será:%.2f", salario_ano_1); // imprimi o salario do primeiro contrato
    printf("\nSalário no segundo contrato, será:%.2f", salario_ano_2);// imprimi o salario do segundo contrato
    printf("\nSalário no terceiro contrato, será:%.2f", salario_ano_3); // imprimi o salario do terceiro contrato
}