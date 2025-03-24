//Questão  IFSC 10

#include <stdio.h>

int main()
{
    int primeiro_numero;
    int segundo_numero;
    int soma;
    
    printf("Informe dois números inteiros\n");

    printf("Informe o primeiro número: \n");
    scanf("%d", &primeiro_numero);

    printf("Informe o segundo número: \n");
    scanf("%d", &segundo_numero);

    soma = primeiro_numero + segundo_numero;
    printf("Soma de %d + %d = %d", primeiro_numero, segundo_numero, soma);
    
    return 0;

}

