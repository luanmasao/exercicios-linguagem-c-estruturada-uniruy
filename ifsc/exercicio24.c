//Questão 61 IFSC

#include <stdio.h>

int main()
{
    float nota1,nota2,nota3, media;
    int input;

    printf("Informe 3 notas: \n");
    printf("Nota 1: ");
    scanf("%f",&nota1);
    printf("Nota 2: ");
    scanf("%f",&nota2);
    printf("Nota 3: ");
    scanf("%f",&nota3);

    printf("Digite 1 para média aritmética ou 2 para ponderada: \n");
    scanf("%d",&input);

    if(input == 1)
    {
        media =(nota1 + nota2 + nota3)/3;
        printf("Média aritmética é: %.2f",media);
    }
    else if(input == 2)
    {
        media = ((nota1 * 3) + (nota2 *3) + (nota3 * 4))/10;
        printf("Média ponderada é: %.2f",media);
    }

    return 0;
}