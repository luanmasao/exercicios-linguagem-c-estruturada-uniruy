//Questão 13 IFSC

#include <stdio.h>

int main()
{
    float fahrenheit;
    
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f",&fahrenheit);

    float C = (fahrenheit - 32) * (5.0/9.0);

    printf("Temperatura em Celsius: %.2f",C);

    return 0;
}