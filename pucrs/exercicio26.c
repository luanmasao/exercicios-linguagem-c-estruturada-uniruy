//Questão 20 PUCRS

#include <stdio.h>

int main()
{
    int input;
    int produto = 1;

    while(1)
    {
        printf("Informe um número: ");
        scanf("%d",&input);

        if(input <= 0)
        {
            break;
        }

        else if(input % 2 == 0)
        {
            produto *= input;
        }

    }

    if(produto == 1)
    {
        printf("Nenhum número foi informado\n");
    }
    else
    {
    printf("Produtório dos números pares e positivos: %d",produto);
    }
    
    return 0;
}


