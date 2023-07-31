/*
Lista 03
Exercício 7

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int func(int x)
{
    if (x > 0)
    {
        return 1;
    }
    else if (x <= 0)
    {
        return 0;
    }
}

int main(void)
{
    int n, x, resp;

    printf("Quantos números serão analisados?: ");
    scanf(" %d", &n);

    do
    {
        printf("\n\n Insira um número inteiro: ");
        scanf(" %d", &x);

        resp = func(x);

        if (resp == 1)
        {
            printf("\nO número inserido é positivo.");
        }
        else if (resp == 0)
        {
            printf("\nO número inserido é negativo.");
        }
        n--;

    } while (n > 0);
    
    return 0;
}