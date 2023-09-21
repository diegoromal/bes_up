/*
1 - Elaborar um programa que apresente todos os valores numéricos inteiros ímpares situados no intervalo de 0 a 20.
*/
#include <stdio.h>

int main() {

    int cont=1;

    do {
        if (cont % 2 != 0) {
            printf("Impar: %i \n", cont);
        }
        cont++;
    } while (cont <=20);

    return 0;
}