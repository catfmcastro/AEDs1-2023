/*
Lista 02
Exercício 8

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int a, b, fib, i, l;

    a = 0;
    b = 1;

    printf("Insira um número: ");
    scanf("%d", &l);
    printf("\n1\n");

    for (i = 2; i <= l; i++)
    {

        fib = a + b;
        a = b;
        b = fib;

        // limita quantos fib vai imprimir
        if (fib < l)
        {
            printf("%d\n", fib);
        }
    }
    return 0;
}