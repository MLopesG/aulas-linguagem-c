#include<stdio.h>

void main(){
    int quantidade, codigo;
    float total;

    printf("Informe quantidade do produto:");
    scanf("%d",&quantidade);

    /**Menu*/

    printf("========================================= /n");
    printf("100 - Cachorro quente 9.50\n");
    printf("101 - Bauru 8.50\n");
    printf("102 - Hambúrger 7.00\n");
    printf("103 - Cheeseburguer 8.00\n");
    printf("104 - Refrigerante 5.50\n");
    printf("=========================================  \n");


    printf("Informe o código do produto: ");
    scanf("%d",&codigo);

    switch(codigo){
        case 100:
            total = quantidade*9.50;
            break;
        case 101:
            total = quantidade*8.50;
            break;
        case 102:
            total = quantidade*7.00;
            break;
        case 103:
            total = quantidade*8.00;
            break;
        case 104:
            total = quantidade*5.50;
            break;
        default:
            printf("Produto não encontrado");
            break;
    }

    printf("Valor total a ser pago é: %f" , total);

}

