/*
Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se são iguais
*/

#include <stdio.h>

int main() {

    float num1, num2;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite um número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro número é maior!\n");
    } else if (num1 < num2) {
        printf("O segundo número é maior!\n");
    } else {
        printf("Os númeors são iguais!\n");
    }

    return 0;
}