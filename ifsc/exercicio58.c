//Questão 53 IFSC

#include <stdio.h>

int main()
{
    int num1, num2, num3, temp;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    printf("Informe o terceiro número: ");
    scanf("%d", &num3);

    if (num1 < num2) 
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 < num3) 
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }


    printf("%d, %d, %d\n", num1, num2, num3);

    return 0;
}