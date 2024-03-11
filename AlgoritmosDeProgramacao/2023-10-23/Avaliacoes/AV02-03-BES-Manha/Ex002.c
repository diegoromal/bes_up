/*
Questão 02. [0.4 pontos] Em uma competição de saltos ornamentais, os atletas
realizam uma série de saltos acrobáticos que são avaliados por 5 juízes. A cada salto,
cada juiz atribui uma nota de 0.0 a 10.0. A nota do atleta para cada salto é dada pela
média das notas dos juízes, excluindo-se a nota mais baixa e a nota mais alta.
Implemente um programa que armazene as notas dadas por 5 juízes para um salto em
um vetor, considerando que:
● se o vetor for preenchido com valores do teclado, você deve garantir que esses
valores estejam entre 0.0 e 10.0
● se o vetor for preenchido com valores aleatórios entre 0.0 e 10.0, utilize a função
rand().
Após o preenchimento do vetor de notas, imprima a nota final que o atleta recebeu
por ele.
*/
#include <stdio.h>

int main() {
    float notas[5], soma_notas = 0.0, menor_nota = 0.0, maior_nota = 0.0, nota_final = 0.0;
    int c;

    for (c = 0; c < 5; c++) {
        do {
        printf("Entre com a nota do juiz %i: ", c + 1);
        scanf("%f", &notas[c]);

        if (notas[c] < 0.0 || notas[c] > 10.0) {
            printf ("Entre com uma nota entre 0.0 e 10.0. \n");
        }
        } while (notas[c] < 0.0 || notas[c] > 10.0);
        if (c == 0) {
            menor_nota = notas[0];
        } else if (notas[c] < menor_nota) {
            menor_nota = notas[c];
        }
        if (notas[c] > maior_nota) {
            maior_nota = notas[c];
        }
    }

    for (c = 0; c < 5; c++) {
        soma_notas = soma_notas + notas[c];
    }

    nota_final = (soma_notas - maior_nota - menor_nota) / 3;

    printf("A nota final é %.1f \n", nota_final);

    return 0;
}