/*
6 - Crie um algoritmo para calcular a taxa de serviço do garçom, a partir da
entrada do valor da conta. A taxa de serviço é fixa em 10%. O sistema deverá escrever na
tela o valor da taxa de serviço e depois o valor total a ser pago.
*/

#include <stdio.h>

#define TAXA 10.0

int main() {

    float valor_conta, taxa_servico, valor_total;

    printf("Entre com o valor da conta: R$");
    scanf("%f", &valor_conta);

    taxa_servico = valor_conta * (TAXA / 100);
    
    valor_total = valor_conta + taxa_servico;

    printf("O valor da taxa de serviço ficou em R$%.2f e o total à pagar será R$%.2f.", taxa_servico, valor_total);

    return 0;
}