//questão 12 IFSC

#include <stdio.h>

int main()
{
    int usercelsius;
    
    printf("Informe a temperatura em Celsius:");
    scanf("%d", &usercelsius);

    int fahrenheit = (9 * usercelsius + 160) /5 ;
    printf("%d Celsius convertido para Fahrenheit é: %d", usercelsius, fahrenheit);

    return 0;
}