/*
Lista 03
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

void cresc(int x, int y, int z)
{

    // o parâmero utiliza de todas as possibilidades de ordem crescente para fazer o printf
    if (x > y && y > z)
    {
        printf("A ordem crescente: %d , %d , %d", x, y, z);
    }
    else if (x > z && z > y)
    {
        printf("A ordem crescente: %d , %d , %d", x, z, y);
    }
    else if (y > x && x > z)
    {
        printf("A ordem crescente: %d , %d , %d", y, x, z);
    }
    else if (y > z && z > y)
    {
        printf("A ordem crescente: %d , %d , %d", y, z, y);
    }
    else if (z > x && x > y)
    {
        printf("A ordem crescente: %d , %d , %d", z, x, y);
    }
    else if (z > y && y > x)
    {
        printf("A ordem crescente: %d , %d , %d", z, y, x);
    }
}

int main(void)
{
    int conj, x, y, z;

    printf("Quantos conjuntos serão analisados?: ");
    scanf(" %d", &conj);

    do
    {
        printf("\n Insita um número inteiro: ");
        scanf(" %d", &x);
        printf("\n Insita outro número inteiro: ");
        scanf(" %d", &y);
        printf("\n Insita outro número inteiro: ");
        scanf(" %d", &z);

        cresc(x, y, z);

        conj--;
    } while (conj > 0);

    return 0;
}