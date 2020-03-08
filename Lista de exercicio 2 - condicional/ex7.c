#include<stdio.h>

void main(){
    int n1;
    int n2;

    printf("Informe o primeiro número inteiro:");
    scanf("%d", &n1);

    printf("Informe o segundo número inteiro:");
    scanf("%d", &n2);

    if(n1%n2 == 0)
        printf("%d é multiplo de %d",n1,n2);
    else
        printf("%d não é multiplo de %d",n1,n2);
    
}