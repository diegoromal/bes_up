#include <stdio.h>
#include <string.h>

int main () {

    // Exemplo com 6 notas de 50 alunos
    // tipo nome[linhas][colunas];
    // Calculo de memória: linhas x colunas x 4
    float notas[50][6];
    int linhas, colunas;

    for (linhas = 0; linhas < 50; linhas++) {
        for (colunas = 0; colunas < 6; colunas++) {
            printf("notas[%i][%i]: ", linhas, colunas);
            scanf("%f", &notas[linhas][colunas]);
        }
    }

    return 0;
}