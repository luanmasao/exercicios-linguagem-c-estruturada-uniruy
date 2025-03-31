//Questão 5 PUCRS

#include <stdio.h>

int main()
{
    int input;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Informe números inteiros e positivos para que a média aritmética seja calculada: \n");

    while (1)
    {
        scanf("%d",&input);

        if(input < 0)
        {
            break;
        }
        
        soma += input;
        contador++;
    
    }

    media = (float)soma / contador;

    printf("A média aritmética dos números informados é: %f", media);

    return 0;
}