/*
1. Crie uma função que preencha um vetor de mil posições com
valores aleatórios de 1 até 6. Conte quantas vezes cada número foi sorteado.
Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para preencher o vetor com valores aleatórios de 1 a 6
void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = rand() % 6 + 1;  // Gera um número aleatório de 1 a 6
    }
}

// Função para contar e exibir a porcentagem de cada número sorteado
void contarEExibirPorcentagem(int vetor[], int tamanho) {
    int contadores[6] = {0};  // Inicializa contadores para cada número com zero

    // Conta a ocorrência de cada número no vetor
    for (int i = 0; i < tamanho; ++i) {
        contadores[vetor[i] - 1]++;  // -1 porque os valores vão de 1 a 6, mas os índices de 0 a 5
    }

    // Exibe a porcentagem de cada número sorteado
    for (int i = 0; i < 6; ++i) {
        float porcentagem = (float)contadores[i] / tamanho * 100.0;
        printf("Número %d foi sorteado %.2f%% das vezes.\n", i + 1, porcentagem);
    }
}

int main() {
    srand(time(NULL));  // Inicializa a semente para geração de números aleatórios

    const int tamanhoVetor = 1000;
    int vetor[tamanhoVetor];

    // Preenche o vetor com valores aleatórios de 1 a 6
    preencherVetor(vetor, tamanhoVetor);

    // Conta e exibe a porcentagem de cada número sorteado
    contarEExibirPorcentagem(vetor, tamanhoVetor);

    return 0;
}
