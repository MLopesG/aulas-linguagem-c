#include<stdio.h>

void main(){
    // Declarar variaveis
    float tempo_servico,
    salario;

    // Entrar com o tempo do servi�o prestado pelo funcion�rio
    printf("Informe o tempo do servi�o");
    scanf("%f", &tempo_servico);
    // Entrar com sal�rio atual
    printf("Informe o salario atual");
    scanf("%f", &salario);
    // Condi��o para verificar a quantidade de aumento para o sal�rio do funcion�rio
    if(tempo_servico <= 10 )
        salario = salario * 1.08;
    else
        salario = salario * 1.10;

    printf("Sal�rio � %.2f", salario);
}
