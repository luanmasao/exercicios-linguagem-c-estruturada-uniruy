//Questão 17 IFSC

#include <stdio.h>

int main() 
{
    int a, b, c, d;

    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("Digite C: ");
    scanf("%d", &c);
    printf("Digite D: ");
    scanf("%d", &d);

    printf("Somas:\n");
    printf("A + B: %d\n", a + b);
    printf("A + C: %d\n", a + c);
    printf("A + D: %d\n", a + d);
    printf("B + C: %d\n", b + c);
    printf("B + D: %d\n", b + d);
    printf("C + D: %d\n", c + d);

    printf("Multiplicação:\n");
    printf("A * B: %d\n", a * b);
    printf("A * C: %d\n", a * c);
    printf("A * D: %d\n", a * d);
    printf("B * C: %d\n", b * c);
    printf("B * D: %d\n", b * d);
    printf("C * D: %d\n", c * d);

    return 0;
}

