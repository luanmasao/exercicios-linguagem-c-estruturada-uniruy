//Questão 25 PUCRS

#include <stdio.h>

int main()
{
    float preco;
    int codigo;
    float soma_normal = 0;
    float soma_aumento = 0;
    float media_normal;
    float media_aumento;
    float novo_preco;
    int contador = 0;

    printf("---Registre os produtos---\n");

    do
    {
        printf("\nInforme o código do produto: ");
        scanf("%d",&codigo);
     
        if(codigo>0)
        {
            printf("Informe o preço do produto: ");
            scanf("%f",&preco);

            soma_normal += preco;

            novo_preco = (preco * 0.2) + preco;

            soma_aumento += novo_preco;

            contador++;

            printf("Novo preço do produto %d: %.2f",codigo, novo_preco);
        }

    }while(codigo > 0);

    media_normal = soma_normal/contador;
    media_aumento = soma_aumento/contador;

    printf("\nMédia de preços antes do aumento: %.2f\n",media_normal);
    printf("Média de preços após o aumento: %.2f\n",media_aumento);

    return 0;
}