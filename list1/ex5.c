/*
Lista 01
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

/* valor diária promocional, valor diária promocional com 80% de ocup.; valor diária normal com 50% de ocup; diferença entre esses dois ultimos;
ocup. total = 80 apartamentos
ocup. 50% = 40 apartamentos
ocup 80% = 64 apartamentos */

int main(void) {
float diaria, diariadesconto, diaria50, diaria80, diferenca;

//entrada do valor da diaria
  scanf("%f", &diaria);

//cálculo da diária com desconto
  diariadesconto = diaria-(diaria*0.25);

//cálculo das diárias com as respectivas ocupações
  diaria80 = 64*diariadesconto;
  diaria50 = 40*diaria;

  diferenca = diaria80-diaria50;

//imprime os resultados
  printf("\nValor promocional: %.2f", diariadesconto);
  printf("\nPromocional com 80%% ocupado: %.2f", diaria80);
  printf("\nNormal com 50%% ocupado: %.2f", diaria50);
  printf("\nDiferença entre os valores: %.2f", diferenca);
  
  return 0;
}