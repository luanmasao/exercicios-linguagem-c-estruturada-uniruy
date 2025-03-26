//Questão 29 PUCRS

#include <stdio.h>

int main()
{
    int numero, soma, primeiro_resultado,resultado_final;
    
    for (numero = 13; numero <= 73; numero++)
    {
        primeiro_resultado = soma += numero;  
    }

    resultado_final = primeiro_resultado / 60;
    printf("Resultado final: %d", resultado_final);

    return 0;

}