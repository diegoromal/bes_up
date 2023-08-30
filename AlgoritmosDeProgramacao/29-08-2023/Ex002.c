/*
Escreva um programa que leia dois números inteiros A e B do
teclado e imprima as mensagens “nulo”, “sinal negativo” ou “sinal positivo”,
conforme o resultado da multiplicação de A por B
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Entre com o valor de A: ");
    scanf("%i", &a);

    printf("Entre com o valor de B: ");
    scanf("%i", &b);

    if ((a * b) < 0) {
        printf("Sinal negativo\n");
    } else if ((a * b) == 0) {
        printf("Nulo\n");
    } else {
        printf("Sinal positivo\n");
    }
    return 0;
}