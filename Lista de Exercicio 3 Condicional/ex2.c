#include<stdio.h>

void main(){
     int idade;

    printf("Entre com a idade: \n");
    scanf("%d", &idade);

    if(idade > 0 && idade <= 10)
        printf("30 reais");
    else if(idade >= 11 && idade <= 29)
        printf("60 reais");
    else if(idade >= 30 && idade <= 45)
        printf("120 reais");
    else if(idade >= 46 && idade <=59)
        printf("150 reais");
    else
        printf("250 reais");

}