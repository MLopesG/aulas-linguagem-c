#include <stdio.h>


void main(){
    float horas, minutos, segundos;

    printf("Informe os segundos:");
    scanf("%f", &segundos);
    
    horas = segundos/3600;
    minutos = segundos/60;

    printf("Horas %f", horas);
    printf("Minutos %f", minutos);
    printf("Segundo %f", segundos);

}