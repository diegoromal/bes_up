/*
4. Escreva um programa que simule a compra de um lanche em uma padaria. O programa deve ser
executado enquanto o cliente informar o que deseja comprar e a quantidade desejada. A cada novo
item inserido na compra, o programa deve mostrar na tela o subtotal a ser pago. Ao ﬁnal da
execução apresente o valor total da compra.
*/

#include <stdio.h>
#include <string.h>

float calculaSubtotal(int qtde, float preco) {
    return qtde * preco;
}

void processaCompra() {
    char item[50];
    int qtde;
    float preco, subtotal, total = 0.0;

    while (1) {
        printf("Digite o nome do item (ou 'fim' para encerrar): ");
        scanf("%s", item);

        if (strcmp(item, "fim") == 0) {
            break;
        }

        printf("Entre com a quantidade desejada: ");
        scanf("%i", &qtde);

        printf("Entre com o preco unitario: R$");
        scanf("%f", &preco);

        subtotal = calculaSubtotal(qtde, preco);

        total = total + subtotal;

        printf("Subtotal para %s: R$%.2f \n", item, subtotal);

    }

    printf("Total da compra: R$%.2f \n", total);
}

int main() {
    printf("Bem-vindo à padaria! \n");
    
    processaCompra();

    printf("Obrigado por comprar conosco! \n");

    return 0;
}