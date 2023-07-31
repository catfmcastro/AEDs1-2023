#include <stdio.h>

/*
Lista 04
Exercício 1

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int contdigitos(int x)
{
    int cont = 1;

    if (x < 10 && x > -10)
    {
        cont = 1;
    }
    else
    {
        x /= 10;
        cont += contdigitos(x);
    }
    // Ao dividir por 10, variáveis do tipo int não irão armazenar as casas decimais, permitindo que a conta continue normalmente.

    return cont;
}

int main(void)
{
    int x, resp;

    printf("\nInsira um número: ");
    scanf(" %d", &x);

    resp = contdigitos(x);

    printf("\n Resposta: %d", resp);

    return 0;
}