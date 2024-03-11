/*
Elabore um algoritmo que efetue a média aritmética de todos os números pares que se encontram
no conjunto dos números inteiros de 1 até 100.
*/

#include <stdio.h>

int main() {
    int cont = 1, soma_pares = 0, qtde_pares = 0;
    float media_pares;

    while(cont <=100) {
        
        if (cont % 2 == 0) {
            printf("Par: %i \n", cont);
            soma_pares = soma_pares + cont;
            qtde_pares++;
        }

        cont++;
    }
    media_pares = soma_pares / qtde_pares;
    printf("Média: %f \n", media_pares);

    return 0;
}