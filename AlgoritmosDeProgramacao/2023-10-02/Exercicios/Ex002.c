/*
Escreva um programa que leia uma string do teclado (com tamanho máximo de 200 caracteres) e
conte quantas ocorrências de cada vogal existem nessa string.
*/
#include <stdio.h>
#include <string.h>

int main() {
    int cont, tam, a = 0, e = 0, i = 0, o = 0, u = 0;
    char palavra[201];

    printf("Entre com uma string: ");
    fgets(palavra, 201, stdin);

    tam = strlen(palavra);

    for (cont = 0; cont < tam; cont++) {
        if (palavra[cont] == 'a' || palavra[cont] == 'A') {
            a++;
        } else if (palavra[cont] == 'e' || palavra[cont] == 'E') {
            e++;
        } else if (palavra[cont] == 'i' || palavra[cont] == 'I') {
            i++;
        } else if (palavra[cont] == 'o' || palavra[cont] == 'O') {
            o++;
        } else if (palavra[cont] == 'u' || palavra[cont] == 'U') {
            u++;
        }
    }

    printf("Apareceram %i vogais na string! \n", soma_vogal);


    return 0;
}