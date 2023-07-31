/*
Lista 03
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

void mconceito(x)
{
    if (x <= 39)
    {
        printf("\n Conceito F\n");
    }
    else if (x >= 40 && x <= 59)
    {
        printf("\n Conceito E\n");
    }
    else if (x >= 60 && x <= 69)
    {
        printf("\n Conceito D\n");
    }
    else if (x >= 70 && x <= 79)
    {
        printf("\n Conceito C\n");
    }
    else if (x >= 80 && x <= 89)
    {
        printf("\n Conceito B\n");
    }
    else if (x >= 90)
    {
        printf("\n Conceito A\n");
    }
}

int main(void)
{
    int n, x;

    printf("Quantos alunos serão avaliados?: ");
    scanf(" %d", &n);

    do
    {
        printf("\n Insira a nota do aluno: ");
        scanf(" %d", &x);

        mconceito(x);

        n--;

    } while (n > 0);

    return 0;
}