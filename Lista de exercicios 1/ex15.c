#include <stdio.h>


void main(){
    float horas, minutos, segundos;

    printf("Informe os segundos:");
    scanf("%f", &segundos);
    
    horas = segundos/3600;
    minutos = (horas - (horas*3600))/60;
    segundos = (horas - (horas*3600)) - (minutos*60);

    printf("Horas %f", horas);
    printf("Minutos %f", minutos);
    printf("Segundo %f", segundos);

}
