/*
6 - Escreva um algoritmo que leia vários números e informe quantos
números entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o
algoritmo deverá cessar sua execução.
*/

#include <stdio.h>

int main() {

    int count;
    float num;

    do {
        printf("Entre com um numero [0 - Parar]: ");
        scanf("%f", &num);

        if (num > 100 && num < 200) {
            count++;
        }
    } while (num != 0);

    printf("Foram digitados %i numeros entre 100 e 200. \n", count);

    return 0;
}