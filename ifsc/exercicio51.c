//Questão 38 IFSC

#include <stdio.h>

int main()
{
    int A,B,C;

    printf("Informe um valor para A: \n");
    scanf("%d",&A);
    printf("Informe um valor para B: \n");
    scanf("%d",&B);
    printf("Informe um valor para C: \n");
    scanf("%d",&C);

    if(A + B < C)
    {
        printf("A + B é menor que C");
    }

    
    if(A + B > C)
    {
        printf("A + B é maior que C");
    }

    
    if(A + B == C)
    {
        printf("A + B é igual a C");
    }

    return 0;
}