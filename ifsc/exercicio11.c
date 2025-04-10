//Questão 96 IFSC

#include <stdio.h>

int main()
{
    int soma;

    for(int x = 1; x <= 15; x++)
    {
        if(x % 2 != 0)
        {
            soma += x;
        }
    }

    printf("O resultado é: \n", soma);

    return 0;
}