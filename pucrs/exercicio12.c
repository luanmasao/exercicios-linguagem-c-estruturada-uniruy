//Questão 15 PUCRS

#include <stdio.h>

int main()
{
    
    int input = 0; int contador_25 = 0, contador_50 = 0, contador_75 = 0, contador_100 = 0;

    printf("Informe números (digite um número negativo para encerrar): \n");

    while (input >= 0)
    {
        scanf("%d", &input);

        if (input >= 0 && input <= 25)
        {
            contador_25++;
        }
        else if (input >= 26 && input <= 50)
        {
            contador_50++;
        }
        else if (input >= 51 && input <= 75)
        {
            contador_75++;
        }
        else if (input >= 76 && input <= 100)
        {
            contador_100++;
        }
    }

    printf("Números entre 0 e 25: %d\n", contador_25);
    printf("Números entre 26 e 50: %d\n", contador_50);
    printf("Números entre 51 e 75: %d\n", contador_75);
    printf("Números entre 76 e 100: %d\n", contador_100);

    return 0;
}

