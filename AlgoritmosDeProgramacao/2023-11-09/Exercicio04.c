/*
4. Criar uma função que receba um vetor de inteiros positivos, um
vetor de caracteres e o tamanho (único) dos vetores. A função deve imprimir
cada um dos caracteres do 2º vetor n vezes, onde n é o conteúdo da posição
correspondente no vetor de inteiros.
*/
#include <stdio.h>

void imprimirCaracteresNvezes(int inteiros[], char caracteres[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < inteiros[i]; ++j) {
            printf("%c ", caracteres[i]);
        }
    }
    printf("\n");
}

int main() {
    // Exemplo de uso da função
    const int tamanhoVetor = 5;
    int vetorInteiros[] = {3, 1, 4, 2, 5};
    char vetorCaracteres[] = {'A', 'B', 'C', 'D', 'E'};

    imprimirCaracteresNvezes(vetorInteiros, vetorCaracteres, tamanhoVetor);

    return 0;
}
