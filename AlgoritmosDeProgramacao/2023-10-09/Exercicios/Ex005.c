/*
5 - Escreva um programa que construa uma matriz de 5 linhas por 5
colunas de números reais e coloque o conteúdo de sua diagonal principal
dentro de um vetor e o imprima.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int l, c;
    float matriz[5][5], vetor[5];

    srand(time(NULL));               // semente da funcao rand

    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            matriz[l][c] = rand() % 51;
            printf("%i ", matriz[l][c]);
        }
    }

    return 0;
}