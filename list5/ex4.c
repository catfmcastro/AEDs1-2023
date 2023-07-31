#include <stdio.h>

/*
Lista 05
Exercício 4

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Ler arquivo, imprimir o conteúdo linha a linha no terminal, contar quant. de linhas.

int main(void)
{

    int cont = 0;
    char tex[100], ch, novaLinha;
    FILE *arq = fopen("texto.txt", "w+");

    // Texto dentro do arquivo
    fprintf(arq, "Exemplo de texto\nEscrito dentro do arquivo\nCom várias linhas"
                 "\nPara análise\n\n\n");

    fclose(arq);

    // Abrir texto para leitura
    fopen("texto.txt", "r");

    // Imprime o conteúdo de arq na tela e conta a quantidade de linhas
    while (fscanf(arq, "%c", &novaLinha) != EOF)
    {
        printf("%s", &novaLinha);
        if (novaLinha == '\n')
            cont++;
    }

    fclose(arq);

    printf("\n %d LINHAS", cont);

    return 0;
}