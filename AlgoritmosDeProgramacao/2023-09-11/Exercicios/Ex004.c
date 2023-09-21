/*
4 - Escreva um programa que leia números inteiros positivos até que o número 0 seja digitado e
imprima a média desses números.
*/
#include <stdio.h>

int main() {
    int num, soma, cont=0;
    float media;

    do {
        printf("Entre com um número inteiro positivo [0 para parar]: ");
        scanf("%i", &num);

        if (num == 0) {
            printf("Programa parado!\n");
        } else if (num < 0) {
            printf("Número inválido! \n");
        } else {
            soma = soma + num;
            cont++;
        }
    } while (num != 0);
    
    media = soma / cont;
    printf("Soma: %i \nQuantidade: %i\n", soma, cont);

    printf("Média: %.2f\n", media);

    return 0;
}