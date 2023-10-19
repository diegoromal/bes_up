/*
    pedir primeiro jogador
    checar se campo ta vazio
    se vazio inserir senao volta a pedir
    imprime matriz
    checar se ganhou
    se ganhou break
    pedir segundo jogador
    checar se campo esta vazio
    se vazio inserir senao volta a pedir
    imprime matriz
    checar se ganhou
    se ganhou break
*/
#include <stdio.h>

int main () {
    char jogo[3][3];
    int l, c, linha, coluna, vazio = 0;

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            // Linha do jogador X!
            do {
                do {
                    printf("Jogador X: Insira uma linha entre 0 e 2: ");
                    scanf("%i", &linha);
                    if (linha < 0 && linha > 2) {
                        printf("Por favor. Entre com um valor entre 0 e 2! ");
                    }
                } while (linha < 0 && linha > 2);
                // Colunha do jogador X
                do {
                    printf("Jogador X: Insira uma coluna entre 0 e 2: ");
                    scanf("%i", &coluna);
                    if (coluna < 0 && coluna > 2) {
                        printf("Por favor. Entre com um valor entre 0 e 2! ");
                    }
                } while (coluna < 0 && coluna > 2);
                if (jogo[linha][coluna] == NULL) {
                    jogo[linha][coluna] = "X";
                    vazio = 1;
                } else {
                    printf("Campo já preenchido, tente novamente.");
                    vazio = 0;
                }
            } while (vazio = 0);
        }
    }   

    return 0;
}