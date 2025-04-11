//Questão 96 IFSC

#include <stdio.h>

int main()
{
    int produto = 1;

    for(int x = 1; x <= 15; x++)
    {
        if(x % 2 != 0)
        {
            produto *= x;
        }
    }

    printf("O resultado é: %d ", produto);

    return 0;
}