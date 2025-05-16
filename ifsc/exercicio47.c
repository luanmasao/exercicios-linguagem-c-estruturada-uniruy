//Questão 48 IFSC

#include <stdio.h>

int main()
{
    int a,b,c, menor;

    printf("Informe 3 números inteiros distintos: ");
    
    print("Primeiro número: ");
    scanf("%d",&a);
    print("Segundo número: ");
    scanf("%d",&b);
    print("Terceiro número: ");
    scanf("%d",&c);

    menor = a;

    if(b < menor)
    {
        menor = b;
    }
    else if(c < menor)
    {
        menor = c;
    }

    printf("O menor é: %d", menor);

    return 0;
}