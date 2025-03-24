//Questão 1 PUCRS

#include <stdio.h>

int main()
{
    int numero_input;
    int contador_negativos = 0;
    int contador_input;

    printf("Informe 5 números:\n");
    for (contador_input = 0; contador_input < 5; contador_input++)
    {
        printf("Número %d: ", contador_input + 1);
        scanf("%d",&numero_input);

        if (numero_input < 0)
        {
            contador_negativos++;
        }
    }
    
printf("A quantidade de números negativos é:%d\n", contador_negativos);

return 0;

}