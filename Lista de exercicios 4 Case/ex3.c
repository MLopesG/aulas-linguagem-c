#include<stdio.h>

void main(){
    int  codigo;
    float total, salario;

    printf("Informe seu sal�rio:");
    scanf("%f",&salario);

    /**Menu*/

    printf("========================================= \n");
    printf("101 - Gerente\n");
    printf("102 - Engenheiro \n");
    printf("103 - T�cnico\n");
    printf("=========================================  \n");


    printf("Informe o c�digo: ");
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
            printf("Cargo n�o encontrado");
            break;
    }

    printf("Valor do seu sal�rio �: %f" , total);

}

