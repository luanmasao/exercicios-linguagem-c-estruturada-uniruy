//Questão 20 PUCRS

#include <stdio.h>

int main() 
{
    int input_usuario;
    int soma = 0;

    printf("Informe números inteiros. Negativos serão somados. 0 para finalizar.\n");

    while (1)
    {
        scanf("%d", &input_usuario);

        if (input_usuario == 0)
        {
            break;
        }

        if (input_usuario < 0)

        {
            soma += input_usuario;
        }


    }
    
    printf("O somatório dos números negativos é: %d", soma);

    return 0;

}

