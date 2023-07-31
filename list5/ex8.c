#include <stdio.h>

/*
Lista 05
Exercício 8

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

/* Inserir quant. de veículos e preço por aluguel
  Calcular:
  -> faturamento anual (1/3 dos veículos é alugado por mês)
  -> faturamento das multas por mês (1/10 dos veículos paga multa, por mês)
  -> custo da manutenção anual (0.02 dos veículos pagam 600 reais por ano) */

// Salvar em resultado.txt

int main(void)
{
    int veiculos;
    float preco, fatAno, fatMulta, manutencao;

    printf("\nInsira a quantidade de veículos que a locadora possui: ");
    scanf(" %d", &veiculos);

    printf("\nInsira o preço do aluguel: ");
    scanf(" %f", &preco);

    // Valor ganho com as multas, por ano:
    fatMulta = (0.10 * veiculos) * (0.20 * preco);

    // Custo da manutenção anual:
    manutencao = (0.02 * veiculos) * 600;

    // Faturamento anual
    fatAno = ((veiculos / 3.0) * preco * 12);

    // Salvar dados no arquivo
    FILE *arq = fopen("resultado.txt", "w");
    fprintf(arq, "R$ %.2lf\nR$ %.2lf\nR$ %.2lf", fatAno, fatMulta, manutencao);

    fclose(arq);

    return 0;
}