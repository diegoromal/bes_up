/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar
uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os
valores lidos são múltiplos entre si
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Entre com o valor de A: ");
    scanf("%i", &a);

    printf("Entre com o valor de B: ");
    scanf("%i", &b);

    if ((a % b) == 0 || (b % a) == 0){
        printf("Os valores são múltiplos entre si. \n");
    } else {
        printf("Os valores não são múltiplos entre si. \n");
    }

    return 0;
}