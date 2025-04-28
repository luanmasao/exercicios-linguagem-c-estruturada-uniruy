//Questão 38 PUCRS

#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,primo;
    long long produto = 1;

    for(x=92;x<=1478;x++)
    {
        primo = 1;
        
        for(y = 2;y <= sqrt(x); y++)
        {
            if(x % y ==0)
            {
                primo = 0;
                break;
            }
        }
        if(primo)
        {
            produto *= x;
        }
    }

    printf("O produto é: %lld", produto);

    return 0;
}
