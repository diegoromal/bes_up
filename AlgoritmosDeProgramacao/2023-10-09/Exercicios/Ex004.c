/*
4 - Escreva um algoritmo que construa uma matriz de 10 linhas e 15
colunas contendo números inteiros. Em seguida escreva a soma dos
elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim,
escreva a soma dos elementos de cada coluna e se a soma dos elementos é
par ou ímpar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int l, c, matriz[10][15], soma = 0;

    srand(time(NULL));               // semente da funcao rand

    for (l = 0; l < 10; l++) {
        for (c = 0; c < 15; c++) {
            matriz[l][c] = rand() % 51;
        }
    }

    for (l = 0; l < 10; l++) {
        soma = 0;
        for (c = 0; c < 15; c++) {
            soma = soma + matriz[l][c];
        }
        printf("Linha %i - ", l);
        if (soma % 2 == 0) {
            printf("Par - ");        
        } else {
            printf("Impar - ");
        }
        printf("%i \n", soma);
    }

    for (c = 0; c < 15; c++) {
        soma = 0;
        for (l = 0; l < 10; l++) {
            soma = soma + matriz[l][c];
        }
        printf("Coluna %i - ", c);
        if (soma % 2 == 0) {
            printf("Par - ");        
        } else {
            printf("Impar - ");
        }
        printf("%i \n", soma);
    }

    return 0;

}