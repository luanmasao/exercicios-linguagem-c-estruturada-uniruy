//Questão 107 IFSC

#include <stdio.h>

int main()
{
    int input, maior_valor = -1;

    printf("Informe valores(9999 é o valor sentinela): \n");

    while(1)
    {
        scanf("%d",&input);

        if(input == 9999)
        {
            break;
        }
        
        if(input > maior_valor)
        {
            maior_valor = input;
        }

    }

    printf("O maior valor é: %d", maior_valor);

    return 0;
}