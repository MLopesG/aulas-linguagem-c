#include<stdio.h>

void main(){
    int numero,resto;

    printf("Informa um número inteiro para ser verificado :");
    scanf("%d",&numero);

    resto = (numero%2);

    if( resto == 0)
        printf("Número é par: %d",numero);
    else
        printf("Número é impar: %d",numero);
    

}

//gcc ex1.c -o ex1
// ./ex1