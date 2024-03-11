#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct structs {
    int cod;
    char nome[50];
    float salario;
    int dpto;
    char cargo;
} funcionario;

int main() {

    funcionario f[3];

    for (int i = 0; i < 3; i++) {
        printf("--- Cad. funcionario %i ---\n", i);

        f[i].cod = i + 1;

        // fflush(stdin); // limpeza de buffer do teclado antes de ler cada string
        __fpurge(stdin); // limpeza de buffer do teclado antes de ler cada string
        printf("Digite o nome: ");
        scanf("%[^\n]s", f[i].nome);

        printf("Digite o salario: ");
        scanf("%f", &f[i].salario);

        printf("Digite o cargo: ");
        scanf(" %c", &f[i].cargo);

        if (f[i].salario <= 2000.00) {
            f[i].dpto = 1;
        } else {
            f[i].dpto = 2;
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("\n --- Dados do funcionario %i --- \n", i);
        printf("Codigo: %d \n", f[i].cod);
        printf("Nome: %s \n", f[i].nome);
        printf("Salario: %.2f \n", f[i].salario);
        printf("Departamento: %d \n", f[i].dpto);
        printf("Cargo: %c \n", f[i].cargo);
    }

    return 0;
}