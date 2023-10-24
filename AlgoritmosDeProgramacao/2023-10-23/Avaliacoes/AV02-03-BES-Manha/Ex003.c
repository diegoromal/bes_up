/*
Questão 03. [0.4 pontos] Imagine que você está construindo um sistema para
correção de 10 questões objetivas de uma avaliação, sabendo que cada uma delas
possui 5 alternativas possíveis. Tendo em mãos o gabarito da avaliação, você deve ler
do teclado as respostas do usuário e identificar quais estão corretas ou incorretas. Ao final
da execução, exiba na tela essas informações e o número total de acertos do usuário.
Para resolver esta questão você deve utilizar uma matriz de 3 linhas e 10
colunas:
● Na primeira linha da matriz deve constar o gabarito de cada uma das 10 questões.
Para obter esses dados, você deve preencher cada uma das posições da primeira
linha da matriz com valores aleatórios que representem a alternativa correta para a
questão;
● Na segunda linha da matriz deve constar a alternativa escolhida pelo usuário em
cada uma das 10 questões. Essas informações devem ser lidas do teclado.
Lembre-se de verificar se o usuário digitou uma das 5 alternativas válidas;
● Na terceira linha da matriz deve constar o número 1 nas questões que o usuário
acertou e 0 nas questões que o usuário errou.
Por fim, você deve exibir as informações da matriz e o número total de acertos
do usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int l, c, matriz[3][10], acertos = 0;

    srand(time(NULL));

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 10; c++) {
            if (l == 0) {
                // gabarito
                matriz[l][c] = rand() % 5 + 1;
            } else if (l == 1) {
                // respostas do aluno
                do {
                    printf("Entre com a sua resposta da questão %i: ", c + 1);
                    scanf("%i", &matriz[l][c]);
                    if (matriz[l][c] < 1 || matriz[l][c] > 5) {
                        printf("Entre com uma resposta entre 1 e 5.");
                    }
                } while (matriz[l][c] < 1 || matriz[l][c] > 5);
            } else if (l == 2) {
                // acertos
                if (matriz[0][c] == matriz[1][c]) {
                    matriz[2][c] = 1;
                    acertos = acertos + 1;
                }
            }
        }
    }

    printf("Resultado final: \n");
    for (l = 0; l < 3; l++) {
        if (l == 0) {
            printf("Gabarito: \n");
        } else if (l == 1) {
            printf("Respostas: \n");
        } else if (l == 2) {
            printf("Acertos: \n");
        }
        for (c = 0; c < 10; c++) {
            printf("%i ", matriz[l][c]);
        }
        printf("\n");
    }
    printf("Acertos: %i \n", acertos);

    return 0;
}