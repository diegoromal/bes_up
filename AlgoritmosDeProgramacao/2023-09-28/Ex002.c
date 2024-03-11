/*
Implemente um programa que exiba os conteúdos dos itens de índice par de um vetor.
*/
#include <stdio.h>

int main() {
    int cont;
    float vet[10];

    for (cont = 0; cont <= 9; cont++) {
        printf("Entre com o valor do indice[%i]: ", cont);
        scanf("%f", &vet[cont]);
    }

    for (cont = 0; cont <= 9; cont++) {
        if (cont % 2 == 0) {
            printf("Indice[%i]: %.2f \n", cont, vet[cont]);
        }
    }

    return 0;
}