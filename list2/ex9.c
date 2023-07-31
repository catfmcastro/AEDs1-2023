/*
Lista 02
Exercício 9

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    float lucro, porclucro, compra, venda, totcompra = 0, totvenda = 0, totlucro = 0;
    int l1 = 0, l2 = 0, l3 = 0;

    do
    {
        printf("\n Insira preço de compra: ");
        scanf(" %f", &compra);
        printf("\n Insira preço de venda: ");
        scanf(" %f", &venda);

        totcompra += compra;
        totvenda += venda;
        lucro = venda - compra;
        porclucro = lucro / 100;

        // quantidade de produtos por lucro
        if (porclucro < 0.1 * compra)
        {
            l1++;
        }
        else if (porclucro >= 0.1 * compra && lucro <= 0.2 * compra)
        {
            l2++;
        }
        else if (porclucro > 0.2 * compra)
        {
            l2++;
        }

        // após a condição de parada, remove-se uma mercadoria, para que não ocorram erros na conta
        if (compra == 0)
        {
            l1--;
        }

    } while (compra != 0);

    totlucro = totvenda - totcompra;

    printf("\n Mercadorias com lucro menor que 10%%: %d", l1);
    printf("\n Mercadorias com lucro entre 10%% e 20%%: %d", l2);
    printf("\n Mercadorias com lucro maior que 20%%: %d\n", l3);

    printf("\n valor total da compra: %f", totcompra);
    printf("\n valor total de venda: %f", totvenda);
    printf("\n valor total do lucro: %f", totlucro);

    return 0;
}