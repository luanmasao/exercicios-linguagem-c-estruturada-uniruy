//Questão 8 IFSC

#include <stdio.h>

int main()
{
    float AREA, BASE, ALTURA;

    printf("Cálculo da área do triângulo\n");
    printf("Informe a medida da base: ");
    scanf("%f",&BASE);
    printf("Informe a medida da altura: ");
    scanf("%f",&ALTURA);

    AREA = (BASE * ALTURA)/2;

    printf("A área do triângulo é: %.2f",AREA);

    return 0;
}