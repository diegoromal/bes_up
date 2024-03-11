/*
Escreva um programa que leia uma string do teclado e a escreva na tela ao contrário (do final para o início).
*/
#include <stdio.h>
#include <string.h>

int main() {
    int tam, i;
    char palavra[101];

    printf("Escreva algo: ");
    fgets(palavra, 101, stdin);

    tam = strlen(palavra);

    for (i = tam - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    
    printf("\n");

    return 0;
}