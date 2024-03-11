/*
Uma empresa qualquer decidiu conceder um aumento de salarios a seus
funcionarios de acordo com a tabela a seguir:
Salario atual Aumento
| 0,00 – 1.400,00     | 15% |
| 1.400,01 – 2.000,00 | 12% |
| 2.000,01 – 3.000,00 | 10% |
| 3.000,01 – 3.800,00 | 7%  |
| 3.800,01 – 5.000,00 | 4%  |
| acima de 5.000,00   | Sem aumento |
Escreva um algoritmo que leia o salario atual de um funcionario e escreva o
percentual de seu aumento e o valor do salario corrigido a partir desse aumento
*/

#include <stdio.h>

int main() {
    float salario, salario_novo;

    printf("Escreva o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario < 0.0) {
        printf("Salario invalido!\n");
        return 1;
    } else if ((salario >= 0.0) && (salario <= 1400.00)) {
        salario_novo = salario * 1.15;
        printf("Aumento de 15%");
    } else if ((salario >= 1400.01) && (salario <= 2000.00)) {
        salario_novo = salario * 1.12;
        printf("Aumento de 12%");
    } else if ((salario >= 2000.01) && (salario <= 3000.00)) {
        salario_novo = salario * 1.10;
        printf("Aumento de 10%");
    } else if ((salario >= 3000.01) && (salario <= 3800.00)) {
        salario_novo = salario * 1.07;
        printf("Aumento de 7%");
    } else if ((salario >= 3800.01) && (salario <= 5000.00)) {
        salario_novo = salario * 1.04;
        printf("Aumento de 4%");
    } else {
        salario_novo = 0;
        printf("Nao tera aumento!\n");
    }

    if(salario_novo != 0) {
        printf("Novo salário: %.2f", salario_novo);
    }

    return 0;
}