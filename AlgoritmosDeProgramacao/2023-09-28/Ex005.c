/*
Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Você deve garantir que
os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do
teclado e veriﬁcar se esse número está contido ou não no vetor.
*/
#include <stdio.h>

int main() {
    int cont, vet[8], num, contido = 0;

    for (cont = 0; cont <= 7; cont++){
        do {
            printf("Entre com um valor[%i]: ", cont);
            scanf("%i", &vet[cont]);
        } while (vet[cont] < 0);
    }

    printf("Agora entre com um valor para checagem: ");
    scanf("%i", &num);

    for (cont = 0; cont <= 7; cont++) {
        if (num == vet[cont]) {
            contido = 1;
        }
    }

    if (contido == 1) {
        printf("O numero %i esta contido no vetor.\n", num);
    } else {
        printf("O numero %i nao esta contido no vetor.\n", num);
    }

    return 0;
}