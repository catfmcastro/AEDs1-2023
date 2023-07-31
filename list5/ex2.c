#include <stdio.h>

/*
Lista 05
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Receber texto do user e escrever no arquivo.

int main(void)
{

    char tex[20];
    FILE *arq = fopen("texto.txt", "w+");

    // Input de usuário: interrompido ao detectar \n
    printf("\n Insira seu texto: ");
    scanf(" %[^\n]", tex);

    //"%s" se refere ao vetor tex
    fprintf(arq, " %s", tex);

    fclose(arq);

    printf("\n O texto inserido foi adicionado ao arquivo!");

    return 0;
}