/*
Deﬁna uma matriz com 3 linhas e 5 colunas e imprima o somatório dos elementos de sua última
coluna.
*/
#include <stdio.h>

int main() {
    int l, c, matriz[3][5], soma = 0;

    for (l = 0; l < 3; l++) {
        soma = soma + l + 4;
    }

    printf("A soma dos elementos da última coluna é %i \n", soma);

    return 0;
}