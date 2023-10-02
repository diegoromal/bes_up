/*
A organização da OIBR, Olimpíada
Internacional de Basquete de Robô, está começando a ter problemas. É que os
robôs desses times acertam quase todos os lançamentos, de qualquer posição
na quadra! Pensando bem, o jogo de basquete ficaria mesmo sem graça se
jogadores conseguissem acertar qualquer lançamento, não é mesmo? Uma
das medidas que a OIBR está implantando é uma nova pontuação para os
lançamentos, de acordo com a distância do robô para o início da quadra.
A quadra tem 2000 centímetros de comprimento. Dada a distância D do
robô até o início da quadra, onde está a cesta, a regra é a seguinte:
    ● Se 0 ≤ D ≤ 800, a cesta vale 1 ponto;
    ● Se 800 < D ≤ 1400, a cesta vale 2 pontos;
    ● Se 1400 < D ≤ 2000, a cesta vale 3 pontos.
A organização da OIBR precisa de ajuda para automatizar o placar do
jogo. Dado o valor da distância D (que não deve ser negativa e nem maior queos 2000 centímetros do tamanho da quadra), você deve escrever um programa
para calcular o número de pontos do lançamento.
*/

#include <stdio.h>

int main() {
    int distancia;

    printf("Entre com a distância do arremesso: ");
    scanf("%i", &distancia);

    if (distancia >= 0 && distancia <= 800){
        printf("A cesta vale 1 ponto \n");
    } else if (distancia > 800 && distancia <= 1400){
        printf("A cesta vale 2 pontos \n");
    } else if (distancia > 1400 && distancia <= 2000){
        printf("A cesta vale 3 pontos \n");
    } else {
        printf("Distância inválida!");
    }


    return 0;
}