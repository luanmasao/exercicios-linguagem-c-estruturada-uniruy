//Questão 31 IFSC 

#include <stdio.h>

int main()
{
    int valor_a, valor_b;

    printf("Informe dois valores para serem comparados: \n");
    
    printf("Primeiro valor(A): ");
    scanf("%d", &valor_a);

    printf("Segundo valor(B): ");
    scanf("%d", &valor_b);

    if (valor_a > valor_b)
    {
        printf("%d(A) é maior que (B)%d", valor_a, valor_b);
    }

    if (valor_b > valor_a)
    {
        printf("%d(B) é maior que (A)%d", valor_b, valor_a);
    }

    return 0;

}