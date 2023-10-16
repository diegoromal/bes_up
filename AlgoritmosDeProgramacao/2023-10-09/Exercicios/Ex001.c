/*
1 - Leia do teclado valores para um vetor de 10 elementos inteiros,
pares e positivos. Crie um segundo vetor da seguinte forma: os elementos de
índices pares receberão os respectivos elementos divididos por 2; os
elementos de índices ímpares receberão os respectivos elementos
multiplicados por 3. Imprima os dois vetores.
*/
#include <stdio.h>

int main() {

    int c, vet1[10], vet2[10];

    for (c = 0; c < 10; c++) {
        do {
            printf("Entre com o valor do indice [%i] do vetor 1: ", c);
            scanf("%i", &vet1[c]);
            if (vet1[c] < 0) {
                printf("Entre com um valor inteiro positivo.");
            }
        } while (vet1[c] < 0);
    }

    for (c = 0; c < 10; c++) {
        if (c % 2 == 0){
            vet2[c] = vet1[c] / 2;
        } else {
            vet2[c] = vet1[c] * 3;
        }
    }

    printf("Vetor 1: ");
    for (c = 0; c < 10; c++) {
        printf("%i  ", vet1[c]);
    }
    printf("\n");
    
    printf("Vetor 2: ");
    for (c = 0; c < 10; c++) {
        printf("%i  ", vet2[c]);
    }
    printf("\n");

    return 0;
}