//Questão 15 IFSC

#include <stdio.h>

int main()
{
    int tempo, velocidade_media,distancia;
    float litros_usados;

    printf("Informe o tempo de viagem(Horas): ");
    scanf("%d",&tempo);
    printf("Informe a velocidade média(km/h): ");
    scanf("%d",&velocidade_media);

    distancia = tempo * velocidade_media;
    
    litros_usados = distancia /12;

    printf("Velocidade média: %d km/h\n",velocidade_media);
    printf("Tempo gasto: %d horas\n",tempo);
    printf("Distância percorrida: %d km\n",distancia);
    printf("Quantidade de litros usados: %.2f litros\n",litros_usados);

    return 0;
}