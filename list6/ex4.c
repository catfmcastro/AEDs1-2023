#include <stdio.h>
#include <limits.h>

/*
Lista 06
Exercício 4

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void)
{
    // Declaração de variáveis
    int janeiro[31], maior = INT_MIN, menor = INT_MAX, total = 0, media, diasFrios = 0;

    // Loop para percorrer vetor
    for (int i = 0; i < 31; i++)
    {

        // Preenche vetor
        printf("Insira a temperatura do dia %d: ", (i + 1));
        scanf("%d", &janeiro[i]);

        // Calcula maior
        if (janeiro[i] > maior)
        {
            maior = janeiro[i];
        }

        // Calcula Menor
        if (janeiro[i] < menor)
        {
            menor = janeiro[i];
        }

        // Soma todas as temperaturas
        total += janeiro[i];
    }

    // Calcula a temperatura média
    media = (total / 31);

    // Conta os dias cuja temperatura foi menor que a média
    for (int i = 0; i < 31; i++)
    {
        if (janeiro[i] < media)
        {
            diasFrios++;
        }
    }

    printf("\n\nA maior temperatura foi de %d graus.", maior);
    printf("\nA menor temperatura foi de %d graus.", menor);
    printf("\nA media das temperaturas foi de %d graus.", media);
    printf("\n%d dias tiveram a temperatura abaixo da média.", diasFrios);

    return 0;
}