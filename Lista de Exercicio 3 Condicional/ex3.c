
#include<stdio.h>

void main(){
    float identificaco_aluno,n1,n2,n3,media_exercicios,ma;

    printf("Informe o número de identificação do aluno:");
    scanf("%f", &identificaco_aluno);

    printf("Informe a média dos exercicios");
    scanf("%f", &media_exercicios);

    printf("Informe a primera nota:");
    scanf("%f", &n1);

    printf("Informe a segunda nota:");
    scanf("%f", &n2);

    printf("Informe a terceira nota:");
    scanf("%f", &n3);

    ma = (n1+n2*2+n3*3+media_exercicios)/7;


    if(ma >= 9)
        printf("Aluno %f  foi com o conceito A \n", identificaco_aluno);
    else
        if(ma < 9 && ma >= 7.5)
            printf("Aluno %f foi com o conceito B  \n", identificaco_aluno);
        else
         if(ma < 7.5 && ma >= 6.0)
            printf("Aluno %f foi com o conceito C  \n", identificaco_aluno);
          else
             if(ma < 6.0 && ma >= 4.0)
                printf("Aluno %f foi com o conceito D  \n", identificaco_aluno);
             else
                if(ma < 4.0)
                    printf("Aluno %f foi com o conceito E  \n", identificaco_aluno);
                else
                    printf("Aluno %f foi com o conceito muito baixo  \n", identificaco_aluno);

}
