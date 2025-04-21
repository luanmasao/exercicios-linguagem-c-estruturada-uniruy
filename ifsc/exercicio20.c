//Questão 66 IFSC

#include <stdio.h>

int main()
{
    int numero1, numero2;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);

    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

    if(numero1>numero2)
    {
        printf("%d é maior que %d",numero1,numero2);
    }
    
    else
    {
        printf("%d é maior que %d",numero2,numero1);
    }

    return 0;
}