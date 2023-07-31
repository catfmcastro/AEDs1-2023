#include <stdio.h>

/*
Lista 04
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int somadigitos(int x)
{
    int soma = 0;

    if (x == 0)
    {
        soma = 0;
    }
    else if (x != 0)
    {
        soma += (x % 10) + somadigitos(x / 10);
    }

    return soma;
}

int main(void)
{
    int x, resp;

    printf("\n Insira um número inteiro: ");
    scanf(" %d", &x);

    resp = somadigitos(x);

    printf("\n A soma dos dígitos é: %d", resp);

    return 0;
}