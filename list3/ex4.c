/*
Lista 03
Exercício 4

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

void trig(int x, int y, int z)
{
    if (x > y + z || y > z + x || z > y + x)
    {
        printf("\n Os valores inseridos não podem formar os lados de um triângulo");
    }
    else if (x == y && x == z && z == y)
    {
        printf("\nO triângulo é equilátero.\n");
    }
    else if (x == y || x == z || z == y)
    {
        printf("\nO triângulo é isosceles.\n");
    }
    else if (x != y && y != z && z != x)
    {
        printf("\n O triângulo é escaleno.\n");
    }
}

int main(void)
{
    int n, x, y, z;

    printf("Quantos triângulos serão analisados?: ");
    scanf(" %d", &n);

    do
    {
        printf("\n Insira um lado do triângulo: ");
        scanf(" %d", &x);
        printf("\n Insira outro lado: ");
        scanf(" %d", &y);
        printf("\n Insira o último lado: ");
        scanf(" %d", &z);

        trig(x, y, z);

        n--;

    } while (n > 0);

    return 0;
}