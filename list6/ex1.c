#include <stdio.h>

/*
Lista 06
Exercício 1

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

void PreencheVetor(float *notas)
{
    printf("\n Insita as notas dos 10 alunos:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &notas[i]);
    }
}

void Media(float notas[10])
{
    float mediaNotas = 0;
    int cont = 0;

    // Cálculo de média
    for (int i = 0; i < 10; i++)
    {
        mediaNotas += notas[i];
    }
    mediaNotas /= 10;

    // Contagem de alunos acima da média
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > mediaNotas)
        {
            cont++;
        }
    }

    // Imprime o resultado
    printf("\n\nA média da turma foi %.2f.", mediaNotas);
    printf("\n%d alunos ficaram acima da média.", cont);
}

int main(void)
{
    float notas[10];

    // Chamada da Função
    PreencheVetor(notas);
    Media(notas);

    return 0;
}