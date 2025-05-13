//Questão 72 IFSC

#include <stdio.h>

int main()
{
    char nome[50];
    int idade;

    printf("Informe o nome do atleta: ");
    scanf("%s",nome);
    printf("Informe a idade do atleta: ");
    scanf("%d",&idade);

    if(idade < 11)
    {
        printf("%s é da categoria Infantil",nome);
    }
    else if(idade > 10 && idade < 16)
    {
        printf("%s é da categoria Juvenil",nome);
    }
    else if(idade > 15 && idade < 21)
    {
        printf("%s é da categoria Junior", nome);
    }
    else if(idade > 21)
    {
        printf("%s é da categoria Profissional", nome);
    }

    return 0;
}