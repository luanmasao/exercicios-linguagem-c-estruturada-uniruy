//Questão 35 IFSC

#include <stdio.h>
#include <string.h>

int main()
{
    float port,mat,geral;
    char nome[150];

    printf("Informe o nome do candidato: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Informe a nota de Português: ");
    scanf("%f",&port);
    printf("Informe a nota de Matemática: ");
    scanf("%f",&mat);
    printf("Informe a nota de Conhecimentos Gerais: ");
    scanf("%f",&geral);

    float media = (port + mat + geral) / 3;

    if(media > 7 && port >= 5 && mat >= 5 && geral >= 5)
    {
        printf("Aprovado!");
    }
    
    else
    {
        printf("Reprovado!");
    }


    return 0;
}