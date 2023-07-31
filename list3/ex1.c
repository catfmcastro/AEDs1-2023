/*
Lista 03
Exercício 1

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

void nota(int n1, int n2, int n3, char l)
{
    float mediaA, mediaP;
    mediaA = ((float)n1 + (float)n2 + (float)n3) / 3;
    mediaP = (5 * (float)n1 + 3 * (float)n2 + 2 * (float)n3) / 10;
    if (l == 'A')
    {
        printf("\nA média aritmética é: %.2f", mediaA);
    }
    else if (l == 'P')
    {
        printf("\n A média ponderada é: %.2f", mediaP);
    }
}

int main(void)
{
    int N, n1, n2, n3;
    char l;

    printf("Insira o número de alunos que serão avaliados: ");
    scanf(" %d", &N);

    do
    {
        printf("\nInsira a primeira nota: ");
        scanf(" %d", &n1);
        printf("\nInsira a segunda nota: ");
        scanf(" %d", &n2);
        printf("\nInsira a terceira nota: ");
        scanf(" %d", &n3);
        printf("\nInsira a letra correspondente: ");
        scanf(" %c", &l);

        nota(n1, n2, n3, l);
        printf("\n--------------------------------\n\n");
        N--;
    } while (N > 0);

    return 0;
}