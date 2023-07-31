/*
Lista 03
Exercício 10

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

char cat(int x)
{
    char categ;
    if (x >= 5 && x <= 7)
    {
        return categ = 'F';
    }
    else if (x >= 8 && x <= 10)
    {
        return categ = 'E';
    }
    else if (x >= 11 && x <= 13)
    {
        return categ = 'D';
    }
    else if (x >= 14 && x <= 15)
    {
        return categ = 'C';
    }
    else if (x >= 16 && x <= 17)
    {
        return categ = 'B';
    }
    else if (x >= 18)
    {
        return categ = 'A';
    }
}

int main(void)
{
    int n;
    char resp;

    printf("\n\nInsira a idade do nadador: ");
    scanf(" %d", &n);

    resp = cat(n);

    if (resp == 'F')
    {
        printf("\n Categoria F\n");
    }
    else if (resp == 'E')
    {
        printf("\n Categoria E\n");
    }
    else if (resp == 'D')
    {
        printf("\n Categoria D\n");
    }
    else if (resp == 'C')
    {
        printf("\n Categoria C\n");
    }
    else if (resp == 'B')
    {
        printf("\n Categoria B\n");
    }
    else if (resp == 'A')
    {
        printf("\n Categoria A\n");
    }

    return 0;
}