#include <stdio.h>

void main(){
    float largura,comprimento,potencia, qtd_lampadas;

    printf("Entre com a potência:");
    scanf("%f",&potencia);

    printf("Entre com a largura:");
    scanf("%f",&largura);

    printf("Entre com o comprimento:");
    scanf("%f",&comprimento);


    qtd_lampadas = (largura*comprimento)/(potencia/20);

    printf("Quantidade de lâmpadas é:%f", qtd_lampadas);
}