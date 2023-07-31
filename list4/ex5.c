#include <stdio.h>

/*
Lista 04
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Calcula fatorial
double fat(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fat(n - 1);
    }
}

// Calcula a série
double serie(int n)
{

    if (n == 1)
    {
        return 1;
    }
    else
    {
        return serie(n - 1) + (1 / fat(n));
    }
}

int main(void)
{
    int n;
    double resp;

    printf("\n Insira um número inteiro: ");
    scanf(" %d", &n);

    resp = serie(n);

    printf("\n O valor da série é: %.2f", resp);

    return 0;
}