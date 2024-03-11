/*
Escreva um programa que leia uma string do teclado e a escreva na tela ao contrário (do final para o início).
*/
#include <stdio.h>
#include <string.h>

int main() {
    int tam, i, c;
    char palavra[101], palavra_contrario[101];

    printf("Escreva algo: ");
    fgets(palavra, 101, stdin);

    tam = strlen(palavra);

    for (i = tam - 1; i >= 0; i--) {
        palavra_contrario[c] = palavra[i];
        c += 1;
    }

    if (strcmp(palavra, palavra_contrario)) {
        printf("É um palindromo!");
    } else {
        printf("Não é um palindromo!");
    }

    printf("\n");

    return 0;
}