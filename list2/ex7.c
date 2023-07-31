/*
Lista 02
Exercício 7

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int a, b, fib, i, n;

    a = 0;
    b = 1;

    printf("Insira um número: ");
    scanf("%d", &n);
    printf("\n1\n");

    for (i = 2; i <= n; i++)
    {

        fib = a + b;
        a = b;
        b = fib;

        printf("%d\n", fib);
    }
    return 0;
}