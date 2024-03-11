/*
Construir um programa que leia valores inteiros do teclado até que o produto (multiplicação)
desses valores ultrapasse 100
*/

#include <stdio.h>

int main () {

    int valor, produto = 1;

    do {
        printf("Entre com um número: \n");
        scanf("%i", &valor);
        produto = produto * valor;
        printf("O produto atual e %i \n", produto);
    } while (produto <= 100);
    
    printf("Programa pausado.\n");
    
    return 0;
}