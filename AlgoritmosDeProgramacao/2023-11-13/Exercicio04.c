/*
4. Elaborar um programa que armazene o nome e a altura de 10 pessoas com o uso de registros. O
programa deve usar um menu que execute as seguintes etapas:
a.Cadastrar os 10 registros;
b.Apresentar os registros (nome e altura) das pessoas com 1.50 m ou menores;
c.Apresentar os registros (nome e altura) das pessoas com mais de 1.50 m;
d.Apresentar os registros (nome e altura) das pessoas com mais de 1.5 m e menos de 1.80 m;
e.Calcular a média das alturas e apresentar os registros (nome e altura) das pessoas que estão acima da média.
*/
#include <stdio.h>
#include <string.h>

// Definição da struct para representar uma pessoa
struct Pessoa {
    char nome[50];
    float altura;
};

int main() {
    struct Pessoa pessoas[10];
    int opcao;

    // Menu principal
    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar registros\n");
        printf("2. Mostrar registros de pessoas com altura <= 1.50 m\n");
        printf("3. Mostrar registros de pessoas com altura > 1.50 m\n");
        printf("4. Mostrar registros de pessoas com altura > 1.50 m e < 1.80 m\n");
        printf("5. Calcular média das alturas e mostrar registros acima da média\n");
        printf("0. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Cadastrar registros
                printf("\nCadastrar registros:\n");
                for (int i = 0; i < 10; i++) {
                    printf("Digite o nome da pessoa %d: ", i + 1);
                    scanf("%s", pessoas[i].nome);
                    printf("Digite a altura da pessoa %d: ", i + 1);
                    scanf("%f", &pessoas[i].altura);
                }
                break;

            case 2:
                // Mostrar registros de pessoas com altura <= 1.50 m
                printf("\nRegistros de pessoas com altura <= 1.50 m:\n");
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura <= 1.50) {
                        printf("Nome: %s, Altura: %.2f\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 3:
                // Mostrar registros de pessoas com altura > 1.50 m
                printf("\nRegistros de pessoas com altura > 1.50 m:\n");
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura > 1.50) {
                        printf("Nome: %s, Altura: %.2f\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 4:
                // Mostrar registros de pessoas com altura > 1.50 m e < 1.80 m
                printf("\nRegistros de pessoas com altura > 1.50 m e < 1.80 m:\n");
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura > 1.50 && pessoas[i].altura < 1.80) {
                        printf("Nome: %s, Altura: %.2f\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 5:
                // Calcular média das alturas e mostrar registros acima da média
                float somaAlturas = 0;
                for (int i = 0; i < 10; i++) {
                    somaAlturas += pessoas[i].altura;
                }
                float mediaAlturas = somaAlturas / 10;

                printf("\nMédia das alturas: %.2f\n", mediaAlturas);
                printf("Registros de pessoas acima da média:\n");
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura > mediaAlturas) {
                        printf("Nome: %s, Altura: %.2f\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 0:
                // Sair do programa
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
