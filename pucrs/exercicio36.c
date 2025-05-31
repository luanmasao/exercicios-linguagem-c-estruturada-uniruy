//Questão 18 PUCRS

#include <stdio.h>

int main()
{
    int m,x;
    
    while(1)
    {
        int fatorial = 1;
        int soma = 0;

        printf("\nInforme um valor positivo e inteiro: ");
        scanf("%d",&m);
        
        if(m < 1)
        {
            break;
        }
        if(m % 2 == 0)
        {
            for(x = 1; x <= m; x++)
            {
                if(m % x == 0)
                {
                    printf("%d ",x);
                }
            }
        }
        else if(m % 2 != 0)
        {
            if(m < 10)
            {
                for(x = 1; x <= m;x++)
                {
                    fatorial *= x;
                }
                printf("Fatorial: %d",fatorial);            
            }
            else if(m > 10)
            {
                for(x = 1; x <= m;x++)
                {
                    soma += x;
                }
                printf("Soma dos inteiros até %d: %d",m,soma);
            }
        }
    }

    return 0;
}