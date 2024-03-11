/*
2. Escreva um programa, utilizando estrutura, que atende os itens abaixo:
a. O programa recebe e armazena o nome de N cidades com renda per capita,
IDH (índice de desenvolvimento humano) e população. O usuário fornece a
quantidade de cidades N e as demais informações.
b. Calcular e mostrar a média da renda per capita das N cidades.
c. Determinar e mostrar o nome da cidade com maior população.
d. Mostre a renda per capita, IDH e população de acordo com o nome de uma
cidade digitada pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CIDADES 100

typedef struct {
    char nome[50];
    float rendaPerCapita;
    float idh;
    int populacao;
} Cidade;

int main() {
    int n;

    printf("Digite a quantidade de cidades (N): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_CIDADES) {
        printf("Número de cidades inválido.\n");
        return 1;
    }

    Cidade cidades[MAX_CIDADES];

    // Inicializar variáveis para cálculos
    float somaRendaPerCapita = 0;
    int maiorPopulacao = 0;
    char nomeMaiorPopulacao[50];

    // Receber informações das cidades
    for (int i = 0; i < n; i++) {
        printf("\nCidade %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", cidades[i].nome);

        printf("Renda per capita: ");
        scanf("%f", &cidades[i].rendaPerCapita);

        printf("IDH: ");
        scanf("%f", &cidades[i].idh);

        printf("População: ");
        scanf("%d", &cidades[i].populacao);

        // Atualizar variáveis para cálculos
        somaRendaPerCapita += cidades[i].rendaPerCapita;

        if (cidades[i].populacao > maiorPopulacao) {
            maiorPopulacao = cidades[i].populacao;
            strcpy(nomeMaiorPopulacao, cidades[i].nome);
        }
    }

    // Calcular e exibir a média da renda per capita
    float mediaRendaPerCapita = somaRendaPerCapita / n;
    printf("\nMédia da renda per capita das cidades: %.2f\n", mediaRendaPerCapita);

    // Exibir o nome da cidade com maior população
    printf("Cidade com maior população: %s\n", nomeMaiorPopulacao);

    // Pesquisar informações de uma cidade digitada pelo usuário
    char cidadeBusca[50];
    printf("\nDigite o nome da cidade para obter informações: ");
    scanf(" %[^\n]s", cidadeBusca);

    // Procurar a cidade na lista
    int cidadeEncontrada = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(cidades[i].nome, cidadeBusca) == 0) {
            printf("\nInformações da cidade %s:\n", cidades[i].nome);
            printf("Renda per capita: %.2f\n", cidades[i].rendaPerCapita);
            printf("IDH: %.2f\n", cidades[i].idh);
            printf("População: %d\n", cidades[i].populacao);
            cidadeEncontrada = 1;
            break;
        }
    }

    if (!cidadeEncontrada) {
        printf("Cidade não encontrada.\n");
    }

    return 0;
}
