#include<stdio.h>

void main(){
    int idade;

    printf("Informe sua idade:");
    scanf("%d", &idade);

    if(idade <=10)
        printf("R$ 30.00");
    else
        if(idade >= 11 && idade <= 29)
            printf("R$ 60.00");
        else
            if(idade >= 30 && idade <= 45)
                printf("R$ 120.00");
            else
               if(idade >= 46 && idade <= 59)
                    printf("R$ 150.00");
                else
                    printf("R$ 250.00");

}
