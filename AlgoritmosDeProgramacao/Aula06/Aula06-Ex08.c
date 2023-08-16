/*
8 - Você está endividado e quer administrar melhor sua vida financeira. Para
isso, faça um programa que recebe o valor de uma dívida e o juro mensal, então calcule e
imprima o valor da dívida no mês seguinte.
*/

#include <stdio.h>

int main() {

    float valor_divida, juros_mensal, divida_mes_seguinte;

    printf("Entre com o valor de sua dívida: R$");
    scanf("%f", &valor_divida);

    printf("Entre com o percentual de juros mensal: ");
    scanf("%f", &juros_mensal);

    divida_mes_seguinte = valor_divida * (1 + (juros_mensal / 100));

    printf("Sua dívida do mês seguinte será R$%.2f.\n", divida_mes_seguinte);

    return 0;
}