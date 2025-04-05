//Questão 14 PUCRS

#include <stdio.h>

int main()
{
    int input, soma = 0, contador = 0 , media, contador2 = 0 , contador3 = 0, percentualpositivo, percentualnegativo;

    printf("Informe valores(0 para parar): ");

    while(1)
    {
        scanf("%d", &input);

        if(input==0)
        {
            break;
        }

        if(input>0)
        {
            contador2++;
        }

        if(input<0)
        {
            contador3++;
        }

        soma += input;
        contador++;
        
    }

    media = soma / contador;

    percentualpositivo = contador2 * 100 / contador;
    percentualnegativo = contador3 * 100 / contador;

    printf("A média aritmética dos valores é: %d \n", media);
    printf("A quantidade de valores positivos é: %d \n", contador2);
    printf("A quantidade de valores negativos é: %d \n", contador3);
    printf("O percentual de positivos é: %d%%", percentualpositivo);
    printf("O percentual de negativos é: %d%%", percentualnegativo);

    return 0;

}