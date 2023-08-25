/*
Faça um programa que leia um número inteiro e imprima se é par ou ímpar, usando o comando switch
*/

#include <stdio.h>

int main() {
    int number, result;

    printf("Digite um número: ");
    scanf("%i", &number);

    result = number % 2;

    switch (result)
    {
    case 0:
        printf("O número %i é par!\n", number);
        break;
    default:
        printf("O número %i é impar!\n", number);
        break;
    }

    return 0;
}