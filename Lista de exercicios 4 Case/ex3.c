#include<stdio.h>

void main(){
    int  codigo;
    float total, salario;

    printf("Informe seu salário:");
    scanf("%f",&salario);

    /**Menu*/

    printf("========================================= \n");
    printf("101 - Gerente\n");
    printf("102 - Engenheiro \n");
    printf("103 - Técnico\n");
    printf("=========================================  \n");


    printf("Informe o código: ");
    scanf("%d",&codigo);

    switch(codigo){
        case 101:
            total = salario*1.10;
            break;
        case 102:
            total = salario*1.20;
            break;
        case 103:
            total = salario*1.30;
            break;
        default:
            printf("Cargo não encontrado");
            break;
    }

    printf("Valor do seu salário é: %f" , total);

}

