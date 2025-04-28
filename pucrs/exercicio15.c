//Questão 41 PUCRS
#include <stdio.h>

int main()
{
    int limite, contador = 1;
    char nome[100];
    float nota1,nota2,nota3,MP,media_geral, soma = 0;

    printf("Calcule a média ponderada dos alunos \n");

    for(limite=50;contador <= limite;contador++)
    {
        printf("Informe o nome do aluno: ");
        scanf("%s",nome);
        
        printf("Informe a primeira nota: ");
        scanf("%f",&nota1);
        
        printf("Informe a segunda nota: ");
        scanf("%f",&nota2);
        
        printf("Informe a terceira nota: ");
        scanf("%f",&nota3);

        MP = ((nota1*2) + (nota2*4) + (nota3*3)) / 10;
        printf("Média ponderada de %s: %.2f \n",nome,MP);

        if(MP >= 7)
        {
            printf("Aprovado \n");
        }
        else
        {
            printf("Reprovado");        
        }

        soma += MP;

    }

    media_geral = soma/limite;

    printf("Média geral: %.2f",media_geral);
    
    return 0;
}