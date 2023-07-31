#include <stdio.h>

/*
Lista 05
Exercício 7

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Receber letras inseridas pelo user, colocá-las em um arquivo e contar as vogais.

int main(void)
{
    int n, vogais = 0;
    char letras;

    printf("\n Insira a quantidade de letras: ");
    scanf(" %d", &n);

    FILE *arq = fopen("arquivo.txt", "w");

    for (int i = 0; i < n; i++)
    {

        // Recebe a letra do user
        printf("\nInsira uma letra: ");
        scanf(" %c", &letras);

        // Escreve a letra no arquivo
        fprintf(arq, "%c\n", letras);
    }

    fclose(arq);

    // Abre o arquivo para leitura
    fopen("arquivo.txt", "r");

    // Contagem de vogais
    while (fscanf(arq, "%c", &letras) != EOF)
    {

        if (letras == 'A' || letras == 'a' || letras == 'E' || letras == 'e' || letras == 'I' || letras == 'i' || letras == 'O' || letras == 'o' || letras == 'U' || letras == 'u')
        {
            vogais++;
        }
    }

    printf("\n\nForam inseridas %d vogal(is).", vogais);

    fclose(arq);

    return 0;
}