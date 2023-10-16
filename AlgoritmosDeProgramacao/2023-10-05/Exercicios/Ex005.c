/*
Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça à
gerência algumas informações relativas aos salários dos funcionários dessa empresa. Os salários
devem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:
a.preencher a matriz de salários por leitura do teclado;
b.imprimir os salários de todos os funcionários, identiﬁcando qual a loja em que trabalha;
c.imprimir o total pago em salários por loja;
d.informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;
e.informar a média salarial da segunda loja.
*/
#include <stdio.h>
#include <strings.h>

int main() {
    char  funcionarios[3][6], nome[151], i;
    float salarios[3][6];
    int l, c, tamanho_nome;

    for (l = 0; l < 1; l++) {
        for (c = 0; c < 1; c++) {
            printf("Entre com o nome do funcionário %i da loja %i: ", c + 1, l + 1);
            fgets(nome, 151, stdin);
            funcionarios[l][c] = nome;
        }
    }
    for (l = 0; l < 1; l++) {
        for (c = 0; c < 1; c++) {
            tamanho_nome = strlen(funcionarios[l][c]);
            for (i = 0; i < tamanho_nome; i++) {
                printf("%c", funcionarios[l][c][i]);
            }
        }
    }


    return 0;
}