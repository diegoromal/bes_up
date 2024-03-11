/*
6. Você foi contratado para desenvolver um programa que simule
uma conta bancária. O programa deve permitir que o usuário realize três
operações principais: depositar dinheiro na conta, sacar dinheiro da conta e
verificar o saldo atual da conta. Para isso, você deve criar um programa em
linguagem C que inclui funções para cada uma dessas operações.
Os requisitos do programa são:
a. Crie uma função chamada “depositar” que permita ao usuário depositar
uma quantia de dinheiro na conta bancária. A função deve receber o
valor a ser depositado como argumento e atualizar o saldo da conta.b. Desenvolva uma função chamada “sacar” que permita ao usuário sacar
uma quantia de dinheiro da conta bancária. A função deve verificar se
há saldo suficiente na conta para realizar o saque e atualizar o saldo, se
possível. Caso contrário, deve exibir uma mensagem de erro.
c. Implemente uma função chamada “verificarSaldo” que retorne o saldo
atual da conta bancária.
d. No programa principal, permita que o usuário escolha entre as três
operações: depositar, sacar ou verificar saldo. O programa deve
continuar rodando até que o usuário escolha sair.
e. Certifique-se de que o saldo da conta não possa se tornar negativo após
um saque.
*/
#include <stdio.h>

// Estrutura que representa a conta bancária
typedef struct {
    float saldo;
} ContaBancaria;

// Função para depositar dinheiro na conta
void depositar(ContaBancaria *conta, float valor) {
    conta->saldo += valor;
    printf("Depósito de R$%.2f realizado com sucesso.\n", valor);
}

// Função para sacar dinheiro da conta
void sacar(ContaBancaria *conta, float valor) {
    if (valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de R$%.2f realizado com sucesso.\n", valor);
    } else {
        printf("Saldo insuficiente. Saque não realizado.\n");
    }
}

// Função para verificar o saldo da conta
float verificarSaldo(ContaBancaria *conta) {
    return conta->saldo;
}

int main() {
    ContaBancaria minhaConta;
    minhaConta.saldo = 0.0;

    int escolha;
    float valor;

    // Loop principal do programa
    do {
        // Menu de opções
        printf("\nEscolha uma opção:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar Saldo\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // Depositar
                printf("Digite o valor a depositar: R$");
                scanf("%f", &valor);
                depositar(&minhaConta, valor);
                break;

            case 2:
                // Sacar
                printf("Digite o valor a sacar: R$");
                scanf("%f", &valor);
                sacar(&minhaConta, valor);
                break;

            case 3:
                // Verificar Saldo
                printf("Saldo atual: R$%.2f\n", verificarSaldo(&minhaConta));
                break;

            case 4:
                // Sair
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (escolha != 4);

    return 0;
}