#include <stdio.h>

void main(){
    float altura; // recebe a entrada altura
    float raio; // recebe o raio
    float volume; // recebe o volume total
    
    printf("Informe o raio: "); // entrada do dado raio
    scanf("%f", &raio);
    
    printf("Informe altura: ");// entrada do dado altura
    scanf("%f", &altura);
    
    volume = 3.14159*(raio*raio)*altura; // realiza o calculo do volume
    
    printf("O volume é:%f", volume); // mostra o resultado, volume.
}