//Questão 56 IFSC

#include<stdio.h>

int main()
{
    int a,b,c;
    int maior_valor;

    printf("Informe 3 valores\n");

    printf("Informe o valor de a: ");
    scanf("%d",&a);

    printf("Informe o valor de b: ");
    scanf("%d",&b);

    printf("Informe o valor de c: ");
    scanf("%d",&c);

    maior_valor = a;

    if (b > maior_valor)
    {
        maior_valor = b;
    }

    if (c > maior_valor)
    {
        maior_valor = c;
    }

    printf("O maior valor é: %d", maior_valor);

    return 0;
}
