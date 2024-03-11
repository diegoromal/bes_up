/*
Deﬁna uma matriz de 4 linhas por 4 colunas e imprima a multiplicação de sua diagonal principal.
*/
#include <stdio.h>

int main() {
    int l, c, matriz[4][4], soma;

    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            if (l == c) {
                soma = soma + l + c;
            }
        }
    
    }

    printf("A soma dos elementos da diagonal principal é: %i \n", soma);
    
    return 0;
}