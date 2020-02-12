#include <stdio.h>

void main(){
    float n1,n2,n3,media;

    printf("Escreva a primeira nota:");
    scanf("%f",&n1);

    printf("Escreva a segunda nota:");
    scanf("%f",&n2);

    printf("Escreva a terceira nota:");
    scanf("%f",&n3);

    media = ((n1*2)+(n2*3)+(n3*5))/10;

    printf("Média ponderado do aluno é: %f", media);
}