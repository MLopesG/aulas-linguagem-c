#include<stdio.h>

void main(){
    float n1,n2,n3,n4,media;

    printf("Digite a primeira nota:");
    scanf("%f",&n1);

    printf("Digite a segunda nota:");
    scanf("%f",&n2);

    printf("Digite a terceira nota:");
    scanf("%f",&n3);

    printf("Digite a quarta nota:");
    scanf("%f",&n4);

    media = (n1+n2+n3+n4)/4;

    if(media >= 6)
        printf("Aluno aprovado com média %f", media);
    else
        if(media < 6 &&  media >= 3)
            printf("Aluno está de exame com nota %f", media);
        else
            printf("Aluno reprovado com nota %f", media);
}