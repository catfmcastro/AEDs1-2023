#include <stdio.h>

/*
Lista 05
Exercício 6

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Receber número, imprimir todos os seus divisores na tela e salvar a soma dos divisores em um arquivo

int main(void)
{
    int n, i, soma = 0;

    printf("Insira um número inteiro: ");
    scanf(" %d", &n);

    // Encontrar os divisores e descobrir a soma
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            soma += i;
        }
    }

    // Abre o arquivo e escreve a soma
    FILE *arq = fopen("soma_divisores.txt", "w");

    fprintf(arq, "%d", soma);

    fclose(arq);

    return 0;
}