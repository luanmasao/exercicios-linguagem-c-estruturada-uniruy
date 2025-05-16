//Questão 20 IFSC

#include <stdio.h>

int main()
{
    int a,b,resultado, soma;

    printf("Informe um valor: ");
    scanf("%d",&a);

    printf("Informe um valor: ");
    scanf("%d",&b);

    soma = a + b;
    resultado = soma * soma;

    printf("Resultado: %d", resultado);

    return 0;
}