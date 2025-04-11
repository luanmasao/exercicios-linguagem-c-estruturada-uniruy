//Questão 89 IFSC
//Foram escolhidos valores entre -25 e 25

#include <stdio.h>

int main()
{
    
    int x, contador, soma = 0;

    for (x = -25; x <=25; x++)
    {
        if(x<0)
        {
            contador++;
        }

        else
        {
            soma += x;
        }
    }

    printf("Soma dos positivos: %d \n", soma);
    printf("Quantidade de negativos: %d", contador);

    return 0;
}