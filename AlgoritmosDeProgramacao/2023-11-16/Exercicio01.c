/*
1. Escreva um programa que recebe nome completo, idade, salário, anos de
experiência na profissão e cargo em uma empresa de N funcionários. Calcule e mostre a
idade média dos funcionários, o nome do funcionário com maior experiência e o cargo do
funcionário com maior salário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_CARGO 50
#define MAX_FUNCIONARIOS 100

typedef struct {
    char nome[MAX_NOME];
    int idade;
    float salario;
    int experiencia;
    char cargo[MAX_CARGO];
} Funcionario;

int main() {
    int n;
    printf("Digite o número de funcionários (N): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_FUNCIONARIOS) {
        printf("Número de funcionários inválido.\n");
        return 1;
    }

    Funcionario funcionarios[MAX_FUNCIONARIOS];

    // Inicializar variáveis para cálculos
    int somaIdades = 0;
    int maiorExperiencia = 0;
    char nomeMaiorExperiencia[MAX_NOME];
    float maiorSalario = 0;
    char cargoMaiorSalario[MAX_CARGO];

    for (int i = 0; i < n; i++) {
        printf("\nFuncionário %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", funcionarios[i].nome); // %[^\n]s para ler espaços no nome

        printf("Idade: ");
        scanf("%d", &funcionarios[i].idade);

        printf("Salário: ");
        scanf("%f", &funcionarios[i].salario);

        printf("Anos de experiência: ");
        scanf("%d", &funcionarios[i].experiencia);

        printf("Cargo: ");
        scanf(" %[^\n]s", funcionarios[i].cargo);

        // Atualizar variáveis para cálculos
        somaIdades += funcionarios[i].idade;

        if (funcionarios[i].experiencia > maiorExperiencia) {
            maiorExperiencia = funcionarios[i].experiencia;
            strcpy(nomeMaiorExperiencia, funcionarios[i].nome);
        }

        if (funcionarios[i].salario > maiorSalario) {
            maiorSalario = funcionarios[i].salario;
            strcpy(cargoMaiorSalario, funcionarios[i].cargo);
        }
    }

    // Calcular e exibir a idade média
    float idadeMedia = (float)somaIdades / n;
    printf("\nIdade média dos funcionários: %.2f\n", idadeMedia);

    // Exibir o nome do funcionário com maior experiência
    printf("Funcionário com maior experiência: %s\n", nomeMaiorExperiencia);

    // Exibir o cargo do funcionário com maior salário
    printf("Cargo do funcionário com maior salário: %s\n", cargoMaiorSalario);

    return 0;
}
