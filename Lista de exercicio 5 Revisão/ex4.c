#include<stdio.h>

void main(){

    // Declarar variaveis
   int q1_atual,q2_maximo,q3_minimo;
   float media;

   // Entrar com o valor do estoque atual
   printf("Quantidade do estoque atual:");
   scanf("%d", &q1_atual);

   // Entrar com o valor do estoque m�ximo suportado
   printf("Quantidade do estoque m�xima:");
   scanf("%d", &q2_maximo);

   // Entrar com o valor do estoque minimo suportado
   printf("Quantidade do estoque minima:");
   scanf("%d", &q3_minimo);

   //realizar a media entre os estoques
   media = (q2_maximo + q3_minimo)/2;


   // realizar compara��o do estoqye atual com media, para verificar se � preciso repor
   if(q1_atual >= media)
        printf("N�o efetuar compra");
   else
        printf("Efetuar compra");
}
