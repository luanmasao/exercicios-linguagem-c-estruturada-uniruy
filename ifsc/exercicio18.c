//Questão 113 IFSC

#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[50], nome2[50];
    float altura1,altura2,peso1,peso2;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);

    printf("Digite o peso da primeira pessoa(kg): ");
    scanf("%f", &peso1);
    
    printf("Digite a altura da primeira pessoa(metros): ");
    scanf("%f", &altura1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);

    printf("Digite o peso da segunda pessoa(kg): ");
    scanf("%f", &peso2);
    
    printf("Digite a altura da segunda pessoa(metros): ");
    scanf("%f", &altura2);

    if(peso1>peso2)
    {
        printf("%s é a pessoa mais pesada: %.2f kg \n",nome1, peso1);
    }
    else if(peso2>peso1)
    {
        printf("%s é a pessoa mais pesada: %.2f kg \n",nome2, peso2);
    }

    if(altura1>altura2)
    {
        printf("%s é a pessoa mais alta: %.2f m \n",nome1, altura1);
    }
    else if(altura2>altura1)
    {
        printf("%s é a pessoa mais alta: %.2f m \n",nome2, altura2);
    }

    return 0;
}