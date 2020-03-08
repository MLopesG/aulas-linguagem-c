#include<stdio.h>

void main(){
    int a,b, diferenca;
    
    printf("Informe o primeiro número:");
    scanf("%d",&a);

    printf("Informe o segundo número:");
    scanf("%d",&b);

    if(a > b)
        diferenca = (a - b);
    else
        diferenca = (a - b);

    printf("A diferença entre os números, é: %d", diferenca);
}