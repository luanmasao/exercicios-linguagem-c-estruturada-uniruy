//Questão 34 IFSC

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, swap;

    printf("Primeiro valor: \n");
    scanf("%d", &valor1);
    
    printf("Segundo valor: \n");
    scanf("%d", &valor2);

    printf("Terceiro valor: \n");
    scanf("%d", &valor3);

    if (valor1 > valor2) {
        swap = valor1;
        valor1 = valor2;
        valor2 = swap;
    }

    if (valor1 > valor3) {
        swap = valor1;
        valor1 = valor3;
        valor3 = swap;
    }

    if (valor2 > valor3) {
        swap = valor2;
        valor2 = valor3;
        valor3 = swap;
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", valor1, valor2, valor3);

    return 0;
}