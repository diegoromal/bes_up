/*
5 - Escreva um programa que leia dois números inteiros e calcule o máximo divisor comum (MDC)
desses números.
*/
#include <stdio.h>

int main() {
    
    int num1, num2;

    printf("Entre o primeiro num: \n");
    scanf("%i", &num1);
    printf("Entre o segundo num: \n");
    scanf("%i", &num2);

    do {
        num2 = num1 % num2;
    } while (num2 != 0);

    printf("MDC: %i\n", num1);

    return 0;
}