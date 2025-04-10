//Questão 103 IFSC

#include <stdio.h>

int main()
{
    float massa_inicial;

    printf("Informe a massa inicial em gramas: ");
    scanf("%f", &massa_inicial);

    float tempo = 0;

    while (massa_inicial > 0.05)
    {
        massa_inicial /= 2.0;
        tempo += 50;
    }

    printf("É necessário %f segundos para que a massa se torne menor que 0,05 gramas. ", tempo);   

    return 0;
} 