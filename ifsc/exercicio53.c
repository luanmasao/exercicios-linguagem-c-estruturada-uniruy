//Questão 39 IFSC

#include <stdio.h>

int main()
{
    int valor_compra, valor_cliente, troco;

    printf("Informe o valor da compra: ");
    scanf("%d",&valor_compra);

    printf("Informe o valor fornecido pelo cliente: ");
    scanf("%d",&valor_cliente);

    troco = valor_cliente - valor_compra;

    int qnt100 = troco/100;
    troco %= 100;

    int qnt10 = troco/10;
    troco %= 10;

    int qnt1 = troco;

    printf("Valor da compra: %d\n",valor_compra);
    printf("Valor do troco: %d\n",troco);
    printf("Quantidade notas 100: %d\n", qnt100);
    printf("Quantidade notas 10: %d\n", qnt10);
    printf("Quantidade notas 1: %d\n", qnt1);

    return 0;
}