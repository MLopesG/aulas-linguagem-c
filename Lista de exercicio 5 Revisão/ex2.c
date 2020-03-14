#include<stdio.h>

void main(){
    // Declarar variaveis
    float tempo_servico,
    salario;

    // Entrar com o tempo do serviço prestado pelo funcionário
    printf("Informe o tempo do serviço");
    scanf("%f", &tempo_servico);
    // Entrar com salário atual
    printf("Informe o salario atual");
    scanf("%f", &salario);
    // Condição para verificar a quantidade de aumento para o salário do funcionário
    if(tempo_servico <= 10 )
        salario = salario * 1.08;
    else
        salario = salario * 1.10;

    printf("Salário é %.2f", salario);
}
