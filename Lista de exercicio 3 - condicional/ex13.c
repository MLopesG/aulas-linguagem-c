#include<stdio.h>

void main(){
    char sexo;
    float altura, peso_ideal;

    printf("Informe o sexo da pessoa, seleciona 'h' ou 'm'");
    scanf("%c", &sexo);

    printf("Informe altura da pessoa:");
    scanf("%f", &altura);


    if(sexo == 'h')
        peso_ideal = (72.7*altura) - 58;
    else
        peso_ideal = (62.1*altura) - 44.7;

    printf("Peso ideal da pessoal é: %f", peso_ideal);

}