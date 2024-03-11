/*
*/
#include <stdio.h>
#include <string.h>

int main() {
    int c, vetor[9], aux, i = 8, valor, soma = 0;
    
    for (c = 0; c < 9; c++) {
        do {
            printf("Entre com um valor para o indice %i do vetor: ", c);
            scanf("%i", &vetor[c]);
            if (vetor[c]< 0) {
                printf("Entre com um valor inteiro positivo. \n");
            }
        } while (vetor[c] < 0);
    }

    for (c = 0; c < 9; c++) {
        printf("%i  ", vetor[c]);
    }
    printf("\n");

    aux = vetor[8];
    for (c = 8; c > 0; c--) {
        vetor[c] = vetor[c - 1];
    }
    vetor[0] = aux;

    for (c = 0; c < 9; c++) {
        printf("%i  ", vetor[c]);
    }
    printf("\n");

    for (c = 0; c < 9; c++) {
        vetor[c] = vetor[c] + c;
    }

    for (c = 0; c < 9; c++) {
        printf("%i  ", vetor[c]);
    }
    printf("\n");

    printf("Entre com um valor inteiro: ");
    scanf("%i", &valor);
    
    for (c = 0; c < 9; c++) {
        if (vetor[c] == valor) {
            soma++;
        }
    } 
    printf("Encontrei %i vezes o valor %i no vetor! \n", soma, valor);

    return 0;
}