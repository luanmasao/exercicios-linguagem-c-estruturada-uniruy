//Questão 47 PUCRS

#include <stdio.h>
#include <string.h>

int main()
{
    int contador_clientes = 0;
    float valor_compras;
    float bonus;
    char nome_completo[150];

    while(contador_clientes < 150)
    {
        printf("Informe o nome completo do cliente: ");
        fgets(nome_completo,sizeof(nome_completo),stdin);
        nome_completo[strcspn(nome_completo, "\n")] = '\0';

        printf("Informe o valor das compras no ano passado: ");
        scanf("%f",&valor_compras);
        getchar();

        if(valor_compras < 500000)
        {
            bonus = valor_compras * 0.10;
        }
        else(valor_compras >= 500000)
        {
            bonus = valor_compras * 0.15;
        }
        
        printf("Bônus especial para %s: %.2f",nome_completo,bonus);

        contador_clientes++;

    }

    return 0;
}