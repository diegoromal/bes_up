/*
Uma empresa qualquer decidiu conceder um aumento de salários a seus
funcionários de acordo com a tabela a seguir:
Salário atual Aumento
| 0,00 – 1.400,00     | 15% |
| 1.400,01 – 2.000,00 | 12% |
| 2.000,01 – 3.000,00 | 10% |
| 3.000,01 – 3.800,00 | 7%  |
| 3.800,01 – 5.000,00 | 4%  |
| acima de 5.000,00   | Sem aumento |
Escreva um algoritmo que leia o salário atual de um funcionário e escreva o
percentual de seu aumento e o valor do salário corrigido a partir desse aumento
*/

#include <stdio.h>

int main() {
    float salario, salario_novo;

    printf("Escreva o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario < 1400.00){
        salario_novo = salario * 1.15;
        printf("O salário terá aumento de 15%, passará a ser R$%.2f\n", salario_novo);
    } else if ((salario > 1400.00) && (salario < 2000.00)) {
        salario_novo = salario * 1.12;
        printf("O salário terá aumento de 12%, passará a ser R$%.2f\n", salario_novo);
    } else if ((salario > 2000.00) && (salario < 3000.00)) {
        salario_novo = salario * 1.10;
        printf("O salário terá aumento de 10%, passará a ser R$%.2f\n", salario_novo);
    } else if ((salario > 3000.00) && (salario < 3800.00)) {
        salario_novo = salario * 1.07;
        printf("O salário terá aumento de 7%, passará a ser R$%.2f\n", salario_novo);
    } else if ((salario > 3800.00) && (salario < 5000.00)) {
        salario_novo = salario * 1.04;
        printf("O salário terá aumento de 4%, passará a ser R$%.2f\n", salario_novo);
    } else {
        printf("O salário já é maior que R$5000.00, não terá aumento\n");
    }

    return 0;
}