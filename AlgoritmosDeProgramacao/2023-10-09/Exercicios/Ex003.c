/*
3 - Escreva um programa que verifica se uma string é um
palíndromo, ou seja, é a mesma quando lida de trás para frente ou de frente
para trás.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int c = 0, i = 0, tamanho;
    char frase[101], aux_frase[101], frase_inv[101];

    printf("Entre com uma frase, vou checar se é um palindromo: ");
    fgets(frase, 101, stdin);

    // Remover espaços da string
    tamanho = strlen(frase);
    for(c = 0; c < tamanho; c++) {
        if (frase[c] == '\0') {
            break;
        }
        if (frase[c] == ' ') {
            continue;
        }
        aux_frase[i] = frase[c];
        i++;
    }

    // Mudar todas as letras para maiusculas
    tamanho = strlen(aux_frase);
    for (c = 0; c < tamanho; c++) {
        aux_frase[c] = toupper(aux_frase[c]);
    }

    for (c = tamanho - 1; c >= 0; c--) {
        frase_inv[c] = aux_frase[i];
        i += 1;
    }

    for (c = tamanho - 1; c >= 0; c--) {
        frase_inv[i] = aux_frase[c];
        i += 1;
    }

    if (strcmp(aux_frase, frase_inv)) {
        printf("E um palindromo. \n");
    } else {
        printf("Nao e um palindromo! \n");
    }

    return 0;
}