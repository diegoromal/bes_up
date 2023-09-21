/*
9 - Escreva um algoritmo para solicitar o valor de N (inteiro) e gerar H
(real) conforme a fórmula a seguir:
H = 1 + (1/2) + (1/3) + (1/4) + ... + (1/n)
*/
#include <stdio.h>

int main() {
    int num;
    float cont = 1, soma = 0.0;

    printf("Entre com um numero inteiro (n): ");
    scanf("%i", &num);

    printf("Formula: \nH = 1 + ");
    for (cont = 1; cont <= num; cont++) {
        if (cont == num) {
            printf("(1/%.0f) \n", cont);
        } else {
            printf("(1/%.0f) + ", cont);
        }
        soma = soma + (1 / cont);
    }

    printf("Resultado: \nH = %.2f \n", 1 + soma);

    return 0;
}