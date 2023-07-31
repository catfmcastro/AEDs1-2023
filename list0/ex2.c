#include <stdio.h>
#include <math.h>

/*
Lista 00
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// 100kw = 1/7 sal. min
// inserir: valor do sal. + consumo de en. em kw
// valor em reais de cada kilowatt e o valor gasto pela resid

int main(void) {

  float salMin, consumo, precoKw, valorConta, valorDesconto;

  scanf("%f", &salMin);
  scanf("%f", &consumo);

  precoKw = salMin / (7 * 100);
  valorConta = precoKw * consumo;
  valorDesconto = valorConta * 0.9;

  printf("Valor do kW: %.2f\n", precoKw);
  printf("Valor a pagar: %.2f\n", valorConta);
  printf("Valor com desconto: %.2f\n", valorDesconto);

  return 0;
}