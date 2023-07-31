#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Lista 07
Exercício 4

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Procedimento de contagem de vogais e consoantes
void contaLetras(int tam, char *str, int *vogais, int *consoantes)
{

    for (int i = 0; i < tam; i++)
    {

        // Testa se a letra é vogal ou consoante
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            (*vogais)++;
        }
        else
        {
            (*consoantes)++;
        }
    }
}

int main(void)
{
    // Declaração de variáveis
    int vogais = 0, consoantes = 0;

    // Declaração da string, com espaço para 1000 caracteres
    char *str = (char *)malloc(1000 * sizeof(char));

    // Input
    printf("\nInsira uma string: ");
    scanf(" %s", str);

    // Quantidade de caracteres inseridos
    int tam = strlen(str);

    // Realoca o tamanho da string para a quantidade de caracteres inseridos
    str = (char *)realloc(str, tam * sizeof(char));

    contaLetras(tam, str, &vogais, &consoantes);

    printf("\n\nForam inseridas %d vogais.", vogais);
    printf("\nForam inseridas %d consoantes.", consoantes);

    free(str);

    return 0;
}