/*
3 - Escreva um programa que leia uma sequência de números inteiros positivos e negativos, e imprima
a soma dos números positivos e a soma dos números negativos.
*/
#include <stdio.h>

int main () {

    int soma_pos=0, soma_neg=0, num;

    do {
        printf("Entre com um número [0 para parar]: \n");
        scanf("%i", &num);

        if (num < 0) {
            soma_neg = soma_neg + num;
        } else {
            soma_pos = soma_pos + num;            
        }

    } while (num != 0);

    printf("Soma positivos: %i \n", soma_pos);
    printf("Soma negativos: %i \n", soma_neg);

    return 0;
}