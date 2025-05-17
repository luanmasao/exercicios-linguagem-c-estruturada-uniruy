//Questão 57 IFSC

#include <stdio.h>

int main()
{
    int num1,num2;
    
    printf("Informe o primeiro número: ");
    scanf("%d",&num1);

    printf("Informe o segundo número: ");
    scanf("%d",&num2);

    if(num1 % num2 == 0 || num2 % num1 == 0)
    {
        printf("São múltiplos");
    }
    else
    {
        printf("Não são múltiplos");
    }

    return 0;
}