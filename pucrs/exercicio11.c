//Questão 13 PUCRS  

#include <stdio.h>

int main()
{
    int input_inicial, contador_input = 1, input_secundario, fatorial, contador_fatorial;

    printf("Digite quantos valores devem ser lidos: \n");
    scanf("%d", &input_inicial);

    while (contador_input <= input_inicial) 
    {
        printf("Digite um número para descobrir seu fatorial: \n");
        scanf("%d", &input_secundario);

        fatorial = 1; 

        for (contador_fatorial = 1; contador_fatorial <= input_secundario; contador_fatorial++)
        {
            fatorial *= contador_fatorial; 
        }

        printf("%dº número: %d! = %d\n", contador_input, input_secundario, fatorial); 
        contador_input++;
    }

    return 0;
}