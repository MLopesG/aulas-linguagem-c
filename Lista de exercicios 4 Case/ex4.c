#include<stdio.h>

void main(){

    int codigo;
    float valor_produto;

    printf("============= Desconto =============== \n");
    printf("1001 - 22% \n");
    printf("1254 - 30% \n");
    printf("1548 - 32%\n");
    printf("1687 - 37%\n");
    printf("1923 - 40%\n");
    printf("=========================================  \n");

    printf("Informe o código do desconto:");
    scanf("%d", &codigo);

    printf("Informe o valor do produto:");
    scanf("%f", &valor_produto);

    switch(codigo){
        case 1001:
            valor_produto = valor_produto*1.22;
            break;
        case 1254:
            valor_produto = valor_produto*1.30;
            break;
        case 1548:
            valor_produto = valor_produto*1.32;
        case 1687:
            valor_produto = valor_produto*1.37;
        case 1923:
            valor_produto = valor_produto*1.40;
            break;
        default:
            printf("Desconto não encontrado");
            break;
    }

    printf("Valor do produto %f", valor_produto);


}

