//Questão 20 IFSC

#include <stdio.h>

int main()
{
    int a,b,resultado;

    printf("Informe um valor: \n");
    scanf("%d",&a);

    printf("Informe um valor: \n");
    scanf("%d",&b);

    resultado = (a * a) + (b * b);

    printf("Resultado: %d", resultado);

    return 0;
}