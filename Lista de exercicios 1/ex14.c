#include <stdio.h>

void main(){
    float 
    largura,
    comprimento,
    area,
    litro_lata;

    int 
    preco_tinta,
    metro_pintado_lata, 
    area_pintada,
    qtd_latas,
    total;
    
    // valores fixos
    preco_tinta  = 25;
    metro_pintado_lata = 13;
    litro_lata =  3.6;


    printf("Informe a largura:");
    scanf("%f", &largura);

    printf("Informe o comprimento:");
    scanf("%f", &comprimento); 

    area = largura*comprimento;
    area_pintada = area/metro_pintado_lata;
    qtd_latas = area_pintada/litro_lata;
    total = qtd_latas*preco_tinta;

    printf("Quantidade de latas: %d\n", qtd_latas);
    printf("Preço será de: %d\n", total);

}