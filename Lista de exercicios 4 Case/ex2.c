#include<stdio.h>

void main(){
    int quantidade, codigo;
    float total;

    printf("Informe quantidade do produto:");
    scanf("%d",&quantidade);

    /**Menu*/

    printf("========================================= /n");
    printf("1001 - 12.32\n");
    printf("1324 -  16.25\n");
    printf("6548 -  22.37\n");
    printf("5987 -  25.32\n");
    printf("7623 -  36.45\n");
    printf("=========================================  \n");


    printf("Informe o código do produto: ");
    scanf("%d",&codigo);

    switch(codigo){
        case 1001:
            total = quantidade*12.32;
            break;
        case 1324:
            total = quantidade*16.25;
            break;
        case 6548:
            total = quantidade*22.37;
            break;
        case 5987:
            total = quantidade*25.32;
            break;
        case 7623:
            total = quantidade*36.45;
            break;
        default:
            printf("Produto não encontrado");
            break;
    }

    printf("Valor total a ser pago é: %f" , total);

}

