/*
3. Escrever um programa para somar duas matrizes de inteiros. Crie
funções separadas para a) ler uma matriz; b) somar duas matrizes; c) imprimir
uma matriz.
*/
#include <stdio.h>

// Função para ler uma matriz
void lerMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para somar duas matrizes
void somarMatrizes(int matriz1[][100], int matriz2[][100], int resultado[][100], int linhas, int colunas) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;

    // Solicita ao usuário o número de linhas e colunas das matrizes
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    int matriz1[100][100], matriz2[100][100], resultado[100][100];

    // Chama a função para ler as duas matrizes
    printf("Matriz 1:\n");
    lerMatriz(matriz1, linhas, colunas);

    printf("Matriz 2:\n");
    lerMatriz(matriz2, linhas, colunas);

    // Chama a função para somar as duas matrizes
    somarMatrizes(matriz1, matriz2, resultado, linhas, colunas);

    // Chama a função para imprimir a matriz resultante
    imprimirMatriz(resultado, linhas, colunas);

    return 0;
}
