#include <stdio.h>

/*
Lista 06
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Imprime o vetor no console
void ImprimeVetor(int n, int vec[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vec[i]);
    }
}

// Procedimento para preencher os vetores X e Y
void PreencheVetores(int *vecX, int *vecY)
{

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o elemento %d de vecX: ", i);
        scanf("%d", &vecX[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o elemento %d de vecY: ", i);
        scanf("%d", &vecY[i]);
    }
}

void IntercalaVetor(int *vecX, int *vecY, int *vecResp)
{
    int contX = 0, contY = 0;

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            vecResp[i] = vecX[contX];
            contX++;
        }
        else
        {
            vecResp[i] = vecY[contY];
            contY++;
        }
    }
}

int main(void)
{
    int vecX[10], vecY[10];
    int vecResp[20];

    // Chamada dos procedimentos
    PreencheVetores(vecX, vecY);
    IntercalaVetor(vecX, vecY, vecResp);

    printf("\n\nO vetor gerado foi: ");
    ImprimeVetor(20, vecResp);

    return 0;
}