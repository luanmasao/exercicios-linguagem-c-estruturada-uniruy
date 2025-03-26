//Questão 26 PUCRS

#include <stdio.h>

int main()
{
    int numero;

    printf("Números entre 1000 e 1999 divididos por 11 com resto 5: \n");

    for (numero = 1000; numero <= 1999; numero++)
    {
        
        if (numero % 11 == 5)
        {
            printf("%d \n", numero);
        }

    }

    return 0;
}
