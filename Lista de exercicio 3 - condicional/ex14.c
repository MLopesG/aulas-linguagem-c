#include<stdio.h>

void main(){
    float horas_trabalhadas, preco_pago_horas, salario;

    printf("Digite a quantidade de horas trabalhadas:");
    scanf("%f", &horas_trabalhadas);

    printf("Digite preço pago por horas:");
    scanf("%f", &preco_pago_horas);

    salario = horas_trabalhadas*preco_pago_horas;

    if(horas_trabalhadas > 40)
        horas_trabalhadas = (horas_trabalhadas*0.5) + horas_trabalhadas;
    
    salario = (horas_trabalhadas*60)/(preco_pago_horas*60);

    printf("Salário é: %f", salario);

}