/*
7 . Faça um programa que leia dois números reais, um será o valor de um
produto e outro o valor de desconto que esse produto está recebendo. Imprima quantos
reais o produto custa na promoção.
*/

#include <stdio.h>

int main() {
    
    float valor_original, desconto, valor_desconto;

    printf("Entre com o valor original do produto: R$");
    scanf("%f", &valor_original);

    printf("Entre com o valor do desconto: R$");
    scanf("%f", &desconto);

    valor_desconto = valor_original - desconto;

    printf("O valor na promoção é: R$%.2f\n", valor_desconto);

    return 0;
}