//Questão 9 IFSC

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    char sobrenome[100];
    char nomecompleto[151]; 

    printf("Informe o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Informe o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0'; 

    strcpy(nomecompleto, nome);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, sobrenome);

    printf("Nome completo: %s\n", nomecompleto);

    return 0;
}