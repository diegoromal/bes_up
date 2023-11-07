/*
Questão 03. [0.7 pontos] Em um programa de televisão chamado SOLETRANELSON, 6
competidores se enfrentam a fim de conquistar os grandes prêmios: uma escultura de gelo em
formato de capivara e um dogão com duas vinas. Sabendo que existem cinco rodadas, a cada
rodada os competidores tentam soletrar 10 palavras e o número de acertos por rodada é
computado. Ao final das 5 rodadas, a melhor e a pior rodada de cada competidor são
eliminadas e a pontuação final do competidor é a soma das três rodadas restantes.
Você deve escrever um programa que utilize uma matriz de 6 linhas (uma por competidor)
e 5 colunas (uma por rodada). Essa matriz deve ser preenchida com valores entre 0 e 10,
correspondentes ao número de acertos do competidor em cada rodada. O programa deve
calcular a pontuação final de cada competidor de modo a desconsiderar a melhor e a pior
rodada e fazer a soma das pontuações das três rodadas restantes. Por fim, exiba a pontuação
final para todos os competidores.
*/
#include <stdio.h>

int main() {
    int l, c, rodadas[5][6];

    for (l = 0; l < 5; l++) {
        printf("Rodada %i", l + 1);
        for (c = 0; c < 6; c++) {
            do {
                printf("Entre os acertos do jogador %i: ", c + 1);
                scanf("%i", rodadas[l][c]);
            } while ()
        }
    }
    return 0;
}