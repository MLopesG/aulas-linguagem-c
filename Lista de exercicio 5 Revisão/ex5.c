#include<stdio.h>

void main(){

    // Declarar variaveis
    float peso, peso_total;
    int identificador;


    // Menu para definir qual planeta será calculado

    printf("====================================== \n");
    printf("1 - 0,37 - Mercúrio \n");
    printf("2 - 0,88 - Venús \n");
    printf("3 - 0,38 - Marte \n");
    printf("4 - 2,64 - Júpiter \n");
    printf("5 - 1,15 - Saturno \n");
    printf("6 - 1,17 - Urano \n");
    printf("====================================== \n");

    // Entrar com o identificador
    printf("Entre com identificador:");
    scanf("%d", &identificador);

    // Entrar com peso do planeta para ser calculado

    printf("Entre com peso do objeto:");
    scanf("%f", &peso);

    switch(identificador){ // Identificar o planeta atraves dos casos
        case 1:
              peso_total = peso * 0.37; // Realizar os calculos
            break;
        case 2:
              peso_total = peso * 0.88; // Realizar os calculos
            break;
        case 3:
              peso_total = peso * 0.38; // Realizar os calculos
            break;
        case 4:
              peso_total = peso * 2.64; // Realizar os calculos
            break;
        case 5:
              peso_total = peso * 1.15; // Realizar os calculos
            break;
        case 6:
              peso_total = peso * 1.17; // Realizar os calculos
            break;

        default:
                printf("Planeta não encontrado"); // Mostrar mensagem de planata não encontrado
            break;
    }

    if(peso_total != 0){
        printf("Peso do objeto nesse problema %f", peso_total); //mostrar o resultado do calculo do planeta
    }
}
