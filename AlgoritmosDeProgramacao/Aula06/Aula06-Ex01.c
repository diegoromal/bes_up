// Escreva um algoritmo que calcule e apresente na tela o resultado de C = ( A + B ) x B.

#include <stdio.h>

int main() {
    float c, a, b;

    printf("Informe o valor de a: ");
    scanf("%f", &a);

    printf("Informe o valor de b: ");
    scanf("%f", &b);

    c = (a + b) * b;

    printf("O resultado de (A + B) x B é %f\n", c);

    return 0;
}