//Questão 30 PUCRS

#include <stdio.h>

int main()
{

    int x, r;

    printf("Números ímpares entre 100 e 200: \n");
    
    for(x = 100; x < 200; x++)
    {
        if (r % 2 != 0)
        {
            printf("%d é ímpar \n", r);
        }
    }

    return 0;
}

