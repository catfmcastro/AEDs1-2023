#include <stdio.h>
#include <string.h>

/*
Lista 05
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Concatenar o conteúdo de dois arquivos diferentes em um terceiro arquivo.

int main(void)
{
    char conteudo1[50], conteudo2[50], conteudo3[100];

    // Criação do primeiro arquivo
    FILE *arq1 = fopen("arquivo1.txt", "w");
    fprintf(arq1, "Conteúdo inicial\nDo primeiro arquivo");

    fclose(arq1);

    // Criação do segundo arquivo
    FILE *arq2 = fopen("arquivo2.txt", "w");
    fprintf(arq2, "Conteúdo final\nDo segundo arquivo");

    fclose(arq2);

    // Terceiro arquivo
    FILE *arq3 = fopen("arquivo3.txt", "w");
    arq1 = fopen("arquivo1.txt", "r");
    arq2 = fopen("arquivo2.txt", "r");

    // Leitura dos vetores
    fscanf(arq1, "%[^EOF]", conteudo1);
    fscanf(arq2, "%[^EOF]", conteudo2);

    // Concatena os conteúdos 1 e 2 no conteúdo 3, e adiciona isso no arq3.
    sprintf(conteudo3, "%s\n%s", conteudo1, conteudo2);
    fprintf(arq3, "%s", conteudo3);

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    return 0;
}