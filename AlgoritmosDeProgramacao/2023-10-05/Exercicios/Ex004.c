/*
Deﬁna uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3 posições que contenha a soma
dos valores de cada uma das linhas da matriz. Crie um vetor com 4 posições que contenha a
multiplicação dos valores de cada uma das colunas da matriz. Ao ﬁnal do processamento, imprima
esses vetores.
*/
#include <stdio.h>

int main() {

    int l, c, matriz[3][4], soma_linhas[3], soma_colunas[4];

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 4; c++) {
            soma_linhas[l] = soma_linhas[l] + (l * c);
        }
    }

    for (c = 0; c < 4; c++) {
        for (l = 0; l < 3; l++) {
            soma_colunas[c] = soma_colunas[c] + (c * l);
        }
    }

    for (l = 0; l < 3; l++) {
        printf("somalinhas[%i] = %i \n", l, soma_linhas[l]);
    }

    for (c = 0; c < 4; c++) {
        printf("soma_colunas[%i] = %i \n", c, soma_colunas[c]);
    }
    return 0;
}