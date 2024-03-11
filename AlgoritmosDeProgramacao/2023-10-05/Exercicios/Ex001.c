/*
Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10.
*/
#include <stdio.h>

int main() {
     int l, c, tabuada[11][11];

     for (l = 0; l < 11; l++) {
        printf("Tabuada do %i: \n", l);
        for (c = 0; c < 11; c++) {
            tabuada[l][c] = l * c;
            printf("%i x %i = %i \n", l, c, tabuada[l][c]);
        }
     }

    return 0;
}