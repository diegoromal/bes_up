/*
9 - Faça um programa que efetue o cálculo do salário líquido de um professor.
Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual
de desconto do INSS.
*/

#include <stdio.h>

int main() {

    int num_aulas;
    float salario_liquido, valor_hora_aula, percentual;

    printf("Entre com o valor da hora aula: R$");
    scanf("%f", &valor_hora_aula);

    printf("Entre com o número de aulas dadas no mês: ");
    scanf("%i", &num_aulas);

    printf("Entre com o valor do percentual de descondo do INSS: ");
    scanf("%f", &percentual);

    salario_liquido = (valor_hora_aula * num_aulas) * (1 - percentual / 100);

    printf("O salário líquido do professor é R$%.2f.\n", salario_liquido);

    return 0;
}