/*
Desenvolva um algoritmo para aplicar um percentual de desconto sobre o valor
de uma compra informado pelo usuário. Os percentuais de desconto são:
● 15% para compras acima de R$ 500,00;
● 10% para compras entre R$ 200,00 e R$ 499,99;
● 5% para compras abaixo de R$ 200,00.
O algoritmo deverá exibir o valor antes do desconto, o valor do desconto e o valor a ser
pago
*/

#include <stdio.h>

int main() {
    float valor_compra, valor_com_desconto;

    printf("Entre com o valor da compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra <= 0.0) {
        printf("Valor inválido!\n");
        return 1;
    } else if (valor_compra > 500.00) {
        valor_com_desconto = valor_compra - (valor_compra * 0.15);
        printf("Valor original: %.2f \nValor do Desconto: 15% \nValor atual: %.2f\n", valor_compra, valor_com_desconto);
    } else if ((valor_compra > 200.00) && (valor_compra < 500.00)) {
        valor_com_desconto = valor_compra - (valor_compra * 0.10);
        printf("Valor original: %.2f \nValor do Desconto: 10% \nValor atual: %.2f\n", valor_compra, valor_com_desconto);        
    } else if (valor_compra < 200.00) {
        valor_com_desconto = valor_compra - (valor_compra * 0.05);
        printf("Valor original: %.2f \nValor do Desconto: 05% \nValor atual: %.2f\n", valor_compra, valor_com_desconto);        
    }
    return 0;
}