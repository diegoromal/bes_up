/*
Calcular o aumento que será dado a um funcionário, obtendo do usuário as seguintes informações:
salário atual e a porcentagem de aumento. Apresentar o novo valor do salário e o valor do aumento
*/

#include <stdio.h>

int main() {
    float salario_atual, porcentagem_aumento, salario_novo, diferenca;

    printf("Informe o valor do salário atual: ");
    scanf("%f", &salario_atual);

    printf("Informe o valor da porcentagem de aumento: ");
    scanf("%f", &porcentagem_aumento);

    salario_novo = salario_atual * (1 + (porcentagem_aumento / 100));

    diferenca = salario_novo - salario_atual;

    printf("O novo salário é R$%.2f, o aumento foi R$%.2f.\n", salario_novo, diferenca);

    return 0;
}