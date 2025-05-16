//Questão 32 IFSC

#include <stdio.h>

int main()
{
    int N;

    printf("Informe um número: ");
    scanf("%d", &N);
    
    if(N <=10)
    {
        printf("F1");
    }
    else if(N > 10 && N <= 100)
    {
        printf("F2");
    }
    else if(N >100)
    {
        printf("F3");
    }

    return 0;
}