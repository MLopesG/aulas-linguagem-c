#include<stdio.h>

void main(){
    int idade;
    
    printf("Informe a idade da pessoa:");
    scanf("%d", &idade);

    if(idade >= 18)
        printf("Pessoal maior de idade.");
    else
        printf("Pessoa menor de idade.");
}