/*
1 - Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de
três e que se encontram no conjunto dos números de 1 até 500.
*/
#include <stdio.h>

int main() {

    int i, soma = 0;

    for (i = 1; i <= 500; i++) {
        if (i % 3 == 0 && i % 2 != 0) {
            // printf("i == %i \n", i);
            soma = soma + i;
        }
    }

    printf("A soma dos números é %i \n", soma);

    return 0;
}