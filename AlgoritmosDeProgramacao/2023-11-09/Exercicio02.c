/*
2. Faça um programa para lançar uma moeda. Quando chamamos
uma função, ela deve retornar cara ou coroa (pode ser representado como 0 e
1). Em outra função, faça n lançamentos de moedas, em que n é o valor que o
usuário quiser, e mostre a porcentagem de vezes em que deu cara e em que
deu coroa. Se você jogar a moeda 10, 100, 1000, um milhão de vezes...o que
tende a acontecer?
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int jogaMoeda() {
    int resultado = rand() % 2;

    return resultado;
}

void lancamentos(int num) {
    int moeda, cara = 0, coroa = 0;

    for (int i = 0; i < num; i++) {
        moeda = jogaMoeda();

        if (moeda == 0) {
            cara++;
        } else {
            coroa++;
        }
    }

    printf("Cara: %.1f%\n", (cara / (float)num) * 100.0);
    printf("Coroa: %.1f%\n", (coroa / (float)num) * 100.0);
}

int main () {

    srand(time(NULL));

    int num;

    printf("Entre com a quantidade de lancamentos da moeda: ");
    scanf("%i", &num);

    lancamentos(num);

    return 0;
}