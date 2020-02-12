#include <stdio.h>

void main(){
     int hora, minuto, segundos, passaram_horas;

    printf("Informe a hora:");
    scanf("%d", &hora);

    printf("Informe o minuto:");
    scanf("%d", &minuto);

    printf("Informe o segundos:");
    scanf("%d", &segundos);


    passaram_horas = hora*3600+minuto*60+segundos;

    printf("Passou %d segundos", passaram_horas);
}