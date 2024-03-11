/*
Questão 04. [0.4 pontos] Imagine que você está construindo um programa para
controle de estoque em uma rede de lojas. Sabe-se que essa rede possui 3 (três) lojas e
que elas vendem 5 (cinco) tipos de produtos. Leia do teclado a quantidade disponível de
cada produto em cada loja e armazene em uma matriz de 3 linhas e 5 colunas.
Considerando que não deve haver menos que 50 itens de cada produto em estoque na
rede de lojas, some os estoques de cada produto e informe quais deles precisam ser
comprados.
*/
#include <stdio.h>

int main() {
    int l, c, estoque[3][5], soma_estoque[5];

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 5; c++) {
            printf("Entre com o estoque do produto %i na loja %i: ", c, l + 1);
            scanf("%i", &estoque[l][c]);
        }
    }
    
    for (c = 0; c < 5; c++) {
        for (l = 0; l < 3; l++) {
            soma_estoque[c] = soma_estoque[c] + estoque[l][c];
        }
        if (soma_estoque[c] < 50) {
            printf("Comprar produto: %i, faltando %i pecas. \n", c, 50 - soma_estoque[c]);
        }
    }

    return 0;
}