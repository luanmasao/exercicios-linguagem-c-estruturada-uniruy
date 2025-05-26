//Questão 22 PUCRS

#include <stdio.h>

int main()
{
    float salario;
    int idade;
    char sexo;
    int menor_idade = 300;
    int maior_idade = -1;
    int contador_mulheres = 0;
    float media_salario;
    int contador_grupo = 0;
    float soma = 0.0f;

    do{
        printf("Informe a idade: ");
        scanf("%d",&idade);

        if(idade > 0)
        {
            printf("Informe o sexo(M,F): ");
            scanf(" %c",&sexo);

            printf("Informe o salário: ");
            scanf("%f",&salario);

            if(idade < menor_idade)
            {
                menor_idade = idade;
            }
            if(idade > maior_idade)
            {
                maior_idade = idade;
            }
            if(sexo == 'F')
            {
                if(salario <= 100.00)
                {
                    contador_mulheres++;
                }
            }
            contador_grupo++;
            soma += salario;
        }

    }while(idade > 0);

    media_salario = soma/contador_grupo;

    printf("Média salarial do grupo: %.2f\n",media_salario);
    printf("Maior idade do grupo: %d\n",maior_idade);
    printf("Menor idade do grupo: %d\n",menor_idade);
    printf("Quantidade de mulheres com salário até R$100,00: %d",contador_mulheres);

    return 0;
}