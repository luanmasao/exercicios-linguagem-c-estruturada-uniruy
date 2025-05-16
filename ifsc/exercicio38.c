//Questão 27 IFSC

#include <stdio.h>

int main() 
{
    int codigo, a, b, c, d, e, s, digitov;

    printf("Informe os 5 algarismos: ");
    scanf("%d", &codigo);

    a = codigo / 10000;
    b = (codigo / 1000) % 10;
    c = (codigo / 100) % 10;
    d = (codigo / 10) % 10;
    e = codigo % 10;

    s = 6*a + 5*b + 4*c + 3*d + 2*e;
    digitov = s % 7;

    printf("O dígito é: %d", digitov);

    return 0;
}
