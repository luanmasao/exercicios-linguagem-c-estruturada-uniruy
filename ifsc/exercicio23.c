//Questão 59 IFSC

#include <stdio.h>

int main()
{
    int input;

    printf("Informe um número inteiro: ");
    scanf("%d",&input);

    if(input % 2 == 0)
    {
        printf("%d é par \n",input);
    }
    else
    {
        printf("%d é impar \n", input);    
    }
    if(input < 0)
    {
        printf("%d é negativo \n",input);
    }
    else if(input > 0)
    {
        printf("%d é positivo \n",input);
    }

    return 0;
}