#include<stdio.h>


void main(){
    int idade;

    printf("Entre com a idade: \n");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7)
        printf("Infatil A");
    else if(idade >= 8 && idade <= 10)
        printf("Infatil B");
    else if(idade >= 11 && idade <= 13)
        printf("Juvenil A");
    else if(idade >= 14 && idade <=17)
        printf("Juvenil B");
    else
        printf("Adulto");
}