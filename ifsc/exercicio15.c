//Questão 91 IFSC

#include <stdio.h>

int main()
{
    int x, soma = 0;
    
    for(x=85;x<=907; x++)
    {
        if(x % 2 == 0)
        {
            soma += x;
            printf("%d",x);
        }

    }

    printf("Soma: %d", soma);

    return 0;
}