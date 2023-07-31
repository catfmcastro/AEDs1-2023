#include <stdio.h>

/*
Lista 05
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Receber texto do user, escrever no arquivo e contar as letras 'A' inseridas.

int main(void)
{

    int cont = 0;
    char tex[20], letA;
    FILE *arq = fopen("texto.txt", "w+");

    // Input de usuário: interrompido ao detectar \n
    printf("\n Insira seu texto: ");
    scanf(" %[^\n]", tex);

    //"%s" se refere ao vetor tex
    fprintf(arq, " %s", tex);

    fclose(arq);

    fopen("texto.txt", "r");

    // Contagem das letras 'A'
    while ((letA = fgetc(arq)) != EOF)
    {
        if (letA == 'A' || letA == 'a')
        {
            cont++;
        }
    }

    fclose(arq);

    printf("\n O texto inserido foi adicionado ao arquivo!");

    printf("\n %d CARACTERES", cont);

    return 0;
}