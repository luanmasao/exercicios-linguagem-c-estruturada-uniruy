//Questão 90 IFSC

#include <stdio.h>

int main()
{

    int x, produto;
    
    for(x = 1; (produto = x * 7) <1000; x++)
    {
        printf("%d \n", produto);
    }

    return 0;
}