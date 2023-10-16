/*
2 - Escreva um programa que sorteie aleatoriamente 1000 números
e armazene-os em um vetor. Em seguida, o usuário deve digitar um número e
seu programa deve informar se o número digitado está contido no vetor ou
não. Se estiver, diga em que posições do vetor ele é encontrado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int c, numero_aleatorio, vet[1000], escolha, contido = 0;

    srand(time(NULL));               // semente da funcao rand
    numero_aleatorio = rand() % 1001; // gerar valores de 0 a 1000

    // printf("Valor: %d \n", numero_aleatorio);

    for (c = 0; c < 1000; c++) {
        vet[c] = numero_aleatorio;
    }

    printf("Entre com um número: ");
    scanf("%i", &escolha);

    for(c = 0; c < 1000; c++) {
        if (vet[c] == escolha) {
            contido = 1;
            break;
        }
    }

    if (contido == 1) {
        printf("O numero %i esta contido no vetor. \n", escolha);
    } else {
        printf("O numero %i nao esta contido no vetor. \n", escolha);
    }

    return 0;
}