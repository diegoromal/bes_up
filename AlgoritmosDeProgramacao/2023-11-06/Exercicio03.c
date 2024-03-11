/*
3. Um estabelecimento fará uma promoção com descontos nos produtos A e B. Se forem comprados
apenas os produtos A ou apenas os produtos B, o desconto será de 10%. Caso sejam comprados os
produtos A e B, o desconto será de 15%. O custo de cada produto é, respectivamente, para os
produtos A e B, R$10 e R$20. Elaborar um programa que, por meio de módulos, calcule e apresente
o valor da despesa do freguês na compra dos produtos. Lembre-se de que o freguês pode levar mais
de uma unidade de um determinado produto.
*/
#include <stdio.h>

float calculaTotal(int qtdeA, int qtdeB, float *custoTotal) {
    const float precoA = 10.0;
    const float precoB = 20.0;

    *custoTotal = (qtdeA * precoA) + (qtdeB * precoB);

    return *custoTotal;
}

float calculaDesconto(int qtdeA, int qtdeB, float *custoTotal) {
    const float descAouB = 0.10;
    const float descAeB = 0.15;

    if (qtdeA > 0 && qtdeB > 0) {
        *custoTotal = *custoTotal - (*custoTotal * descAeB);
    } else {
        *custoTotal = *custoTotal - (*custoTotal * descAouB);
    }
}

int main() {
    int qtdeA, qtdeB;
    float custoTotal;

    printf("Digite a quantidade de produtos A: ");
    scanf("%d", &qtdeA);

    printf("Digite a quantidade de produtos B: ");
    scanf("%d", &qtdeB);

    calculaTotal(qtdeA, qtdeB, &custoTotal);

    calculaDesconto(qtdeA, qtdeB, &custoTotal);

    printf("O valor total da compra com desconto é R$%.2f \n", custoTotal);

    return 0;
}