//Questão 8 PUCRS

#include <stdio.h>

int main()
{
    int input, media,contador = 0, soma = 0;

    printf("Informe números para calcular a média aritmética(Somente pares serão calculados): ");
    
    while(1)
    {
        scanf("%d",&input);

        if(input==0)
        {
            break;
        }

        if(input % 2 == 0)
        {
            soma += input;
            contador++;

        }
    }

    media = soma/contador;

    printf("A média aritmética(Números pares) é: %d", media);

    return 0;
}