/*
6. Escreva um programa que gere uma matriz de inteiros de 4 linhas
por 4 colunas e crie sua transposta (matriz transposta é toda a matriz onde são
trocadas as linhas pelas colunas ou vice-versa).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int l, c, matriz[4][4];

    srand(time(NULL));               // semente da funcao rand
    
    printf("Matriz original: \n");
    for(l = 0; l < 4; l++){
        for(c=0; c < 4; c++){
            matriz[l][c] = rand() % 51;
            printf("%02i ", matriz[l][c]);
        }
        printf("\n");
    }

    printf("Matriz transposta: \n");

    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("%02i ", matriz[c][l]);
        }
        printf("\n");
    }
    return 0;
}