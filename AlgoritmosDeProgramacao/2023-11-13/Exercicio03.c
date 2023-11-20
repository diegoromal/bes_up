/*
3. Suponha que um banco permita no máximo 5 transações enviadas por PIX em um dia. Construa um
programa que receba do teclado o saldo disponível na conta do cliente. Em seguida, cadastre os
dados de cada um dos 5 PIX enviados (chave e valor). A cada PIX cadastrado, apresente o saldo
atual da conta do cliente. Caso o cliente não tenha dinheiro suﬁciente para enviar o PIX, exiba uma
mensagem de erro e não faça a transação. Ao ﬁnal, imprima os dados das transações e o saldo da
conta do cliente.
*/

#include <stdio.h>

typedef struct {
    float saldoInicial;
    char chave[50];
    float valor;
    char status;
} pix;

typedef struct{
    float saldoDisponivel;
    pix p[5];
} transacoes ;


int main() {
    transacoes t;
    int lixo, soma = 1;

    printf("Entre com o saldo disponível: R$");
    scanf("%f", &t.saldoDisponivel);

    for (int i = 0; i < 5; i++) {
        t.p[i].saldoInicial = t.saldoDisponivel;

        printf("Entre com a chave %i: ", i);
        scanf("%[^\n]s", t.p[i].chave);
        lixo = getchar();

        printf("Entre com o valor %i: R$", i);
        scanf("%f", &t.p[i].valor);

        

        if (t.saldoDisponivel < t.p[i].valor) {
            t.p[i].status = 'N';
            printf("Saldo insuficiente. \n");
            i = 5;
        } else {
            t.saldoDisponivel = t.saldoDisponivel - t.p[i].valor;
        }

        soma++;
    }

    for (int i = 0; i < soma; i++) {
        printf("--- Transação %i --- \n", i);
        printf("Saldo inicial: %.2f \n", t.p[i].saldoInicial);
        printf("Chave: %s \n", t.p[i].chave);
        printf("Valor: %.2f \n", t.p[i].valor);
        printf("Status: %c \n", t.p[i].status);
    }


    return 0;
}
;