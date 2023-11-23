/*
3. Suponha que um banco permita no máximo 5 transações enviadas por PIX em um dia. Construa um
programa que receba do teclado o saldo disponível na conta do cliente. Em seguida, cadastre os
dados de cada um dos 5 PIX enviados (chave e valor). A cada PIX cadastrado, apresente o saldo
atual da conta do cliente. Caso o cliente não tenha dinheiro suﬁciente para enviar o PIX, exiba uma
mensagem de erro e não faça a transação. Ao ﬁnal, imprima os dados das transações e o saldo da
conta do cliente.
*/
#include <stdio.h>

// Definição da struct para representar uma transação PIX
struct TransacaoPix {
    char chave[50];
    float valor;
};

int main() {
    float saldo;
    int numTransacoes = 5;

    // Recebe o saldo disponível na conta do cliente
    printf("Digite o saldo disponível na conta do cliente: ");
    scanf("%f", &saldo);

    // Declara um array de structs para armazenar as transações PIX
    struct TransacaoPix transacoes[numTransacoes];

    // Loop para cada transação PIX
    for (int i = 0; i < numTransacoes; i++) {
        // Recebe os dados da transação PIX
        printf("\nDigite a chave PIX da transação %d: ", i + 1);
        scanf("%s", transacoes[i].chave);

        printf("Digite o valor da transação %d: ", i + 1);
        scanf("%f", &transacoes[i].valor);

        // Verifica se há saldo suficiente para a transação
        if (transacoes[i].valor > saldo) {
            printf("Erro: Saldo insuficiente para a transação %d. Transação não realizada.\n", i + 1);
        } else {
            // Realiza a transação e atualiza o saldo
            saldo -= transacoes[i].valor;
            printf("Transação %d realizada com sucesso. Saldo atual: %.2f\n", i + 1, saldo);
        }
    }

    // Imprime os dados das transações e o saldo final
    printf("\nResumo das transações:\n");
    for (int i = 0; i < numTransacoes; i++) {
        printf("Transação %d - Chave PIX: %s, Valor: %.2f\n", i + 1, transacoes[i].chave, transacoes[i].valor);
    }
    printf("\nSaldo final da conta: %.2f\n", saldo);

    return 0;
}
