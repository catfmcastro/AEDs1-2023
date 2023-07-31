#include <stdio.h>

/*
Lista 05
Exercício 9

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Receba dados (matrícula e telefone) e salve em um arquivo saida.txt
// Entrada pelo teclado (1) ou pelo arquivo entrada.txt (2)

int main(void)
{
    // Número limite de alunos é 3.
    int entrada = 0, mat[3], tel[3];

    // É preciso inserir os dados no arq. entrada.txt antes de selecionar o tipo de entrada
    FILE *arqEntrada = fopen("entrada.txt", "w+");
    fclose(arqEntrada);

    // Seleção do tipo de entrada
    while (entrada != 1 && entrada != 2)
    {
        printf("Insira o tipo de entrada - 1 (pelo teclado) ou 2 (por arquivo): ");
        scanf("%d", &entrada);
        if (entrada != 1 && entrada != 2)
        {
            printf("Favor inserir opção válida.\n");
        }
    }

    // Entrada pelo teclado
    if (entrada == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("\nInsira o número de matrícula do aluno(a): ");
            scanf(" %d", &mat[i]);
            printf("\nInsira o número de telefone do aluno(a): ");
            scanf(" %d", &tel[i]);
        }
    }

    // Entrada pelo arquivo
    if (entrada == 2)
    {
        FILE *arqEntrada = fopen("entrada.txt", "r");

        for (int i = 0; i < 3; i++)
        {
            fscanf(arqEntrada, "%d %d", &mat[i], &tel[i]);
        }
        fclose(arqEntrada);

        printf("\n Dados enviados para arquivo saida.txt");
    }

    // Saída de dados
    FILE *arqSaida = fopen("saida.txt", "w");

    for (int i = 0; i < 3; i++)
    {
        fprintf(arqSaida, "%d %d", mat[i], tel[i]);
        if (i < 2)
        {
            fprintf(arqSaida, "\n");
        }
    }

    fclose(arqSaida);

    return 0;
}